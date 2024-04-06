// Copyright (C) 2024  Paul Johnson

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.

// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <Shared/SimulationCommon.h>

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <Shared/Bitset.h>
#include <Shared/Utilities.h>

int rr_simulation_has_entity(struct rr_simulation *this, EntityIdx entity)
{
    return this->entity_tracker[entity] & 1;
}

void rr_simulation_request_entity_deletion(struct rr_simulation *this,
                                           EntityIdx entity)
{
#ifndef NDEBUG
    printf("<rr_simulation::request_delete::%u>\n", entity);
#endif
    assert(rr_simulation_has_entity(this, entity));
    rr_bitset_set(this->pending_deletions, entity);
}

void __rr_simulation_pending_deletion_free_components(uint64_t i,
                                                      void *captures)
{
    struct rr_simulation *this = captures;
    assert(rr_simulation_has_entity(this, i));
#define XX(COMPONENT, ID)                                                      \
    if (rr_simulation_has_##COMPONENT(this, i))                                \
        rr_component_##COMPONENT##_free(                                       \
            rr_simulation_get_##COMPONENT(this, i), this);
    RR_FOR_EACH_COMPONENT;
#undef XX
}

void __rr_simulation_pending_deletion_unset_entity(uint64_t i, void *captures)
{
    struct rr_simulation *this = captures;
    assert(rr_simulation_has_entity(this, i));
#ifndef NDEBUG
    RR_SERVER_ONLY(printf("<rr_simulation::deletion::%lu>\n", i);)
#endif

    this->entity_tracker[(EntityIdx)i] = 0;
}

void rr_simulation_create_component_vectors(struct rr_simulation *this)
{
#define XX(COMPONENT, ID) this->COMPONENT##_count = 0;
    RR_FOR_EACH_COMPONENT;
#undef XX
    for (EntityIdx entity = 1; entity < RR_MAX_ENTITY_COUNT; ++entity)
    {
        if (!(this->entity_tracker[entity] & 1))
            continue;
#define XX(COMPONENT, ID)                                                      \
    if (this->entity_tracker[entity] & (1 << ID))                              \
        this->COMPONENT##_vector[this->COMPONENT##_count++] = entity;
        RR_FOR_EACH_COMPONENT;
#undef XX
    }
}

void rr_simulation_for_each_entity(struct rr_simulation *this,
                                   void *user_captures,
                                   void (*cb)(EntityIdx, void *))
{

    for (uint64_t i = 1; i < RR_MAX_ENTITY_COUNT; ++i)
        if (this->entity_tracker[i])
            cb(i, user_captures);
}

#define XX(COMPONENT, ID)                                                      \
    void rr_simulation_for_each_##COMPONENT(struct rr_simulation *this,        \
                                            void *user_captures,               \
                                            void (*cb)(EntityIdx, void *))     \
    {                                                                          \
        for (EntityIdx pos = 0; pos < this->COMPONENT##_count; ++pos)          \
            cb(this->COMPONENT##_vector[pos], user_captures);                  \
        return;                                                                \
    }                                                                          \
                                                                               \
    uint8_t rr_simulation_has_##COMPONENT(struct rr_simulation *this,          \
                                          EntityIdx entity)                    \
    {                                                                          \
        assert(rr_simulation_has_entity(this, entity));                        \
        return (this->entity_tracker[entity] >> ID) & 1;                       \
    }                                                                          \
    struct rr_component_##COMPONENT *rr_simulation_add_##COMPONENT(            \
        struct rr_simulation *this, EntityIdx entity)                          \
    {                                                                          \
        assert(rr_simulation_has_entity(this, entity));                        \
        this->entity_tracker[entity] |= (1 << ID);                             \
        rr_component_##COMPONENT##_init(&this->COMPONENT##_components[entity], \
                                        this);                                 \
        this->COMPONENT##_components[entity].parent_id = entity;               \
        this->COMPONENT##_vector[this->COMPONENT##_count++] = entity;          \
        return rr_simulation_get_##COMPONENT(this, entity);                    \
    }                                                                          \
    struct rr_component_##COMPONENT *rr_simulation_get_##COMPONENT(            \
        struct rr_simulation *this, EntityIdx entity)                          \
    {                                                                          \
        assert(rr_simulation_has_##COMPONENT(this, entity));                   \
        return &this->COMPONENT##_components[entity];                          \
    }
RR_FOR_EACH_COMPONENT;
#undef XX
