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

#include <Client/Assets/Render.h>

#include <Client/Renderer/Renderer.h>

void rr_prop_water_lettuce_draw(struct rr_renderer *renderer)
{
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -100.41916, -16.93065999999999);
    rr_renderer_bezier_curve_to(renderer, -137.055925, -41.30687999999999,
                                -186.51674, -31.367732999999987,
                                -210.89296000000002, 5.269017000000012);
    rr_renderer_quadratic_curve_to(renderer, -222.93178600000002,
                                   23.36304200000001, -204.8218846,
                                   61.51645400000001);
    rr_renderer_quadratic_curve_to(renderer, -206.7872929, 103.70398400000002,
                                   -188.6932836, 115.742804);
    rr_renderer_bezier_curve_to(renderer, -152.0565186, 140.119055,
                                -102.5957186, 130.17990700000001, -78.2194836,
                                93.543158);
    rr_renderer_bezier_curve_to(renderer, -53.8432636, 56.906378000000004,
                                -63.782410600000006, 7.445563000000007,
                                -100.4191606, -16.930657999999994);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff208932);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -110.80016, -1.3274200000000178);
    rr_renderer_bezier_curve_to(renderer, -138.819432, -19.969998000000018,
                                -176.64632, -12.368710000000018, -195.2889,
                                15.65057699999998);
    rr_renderer_quadratic_curve_to(renderer, -203.69399, 28.283175999999983,
                                   -186.630941, 57.860966999999974);
    rr_renderer_quadratic_curve_to(renderer, -190.9435326, 91.73422699999998,
                                   -178.31091800000002, 100.13931699999998);
    rr_renderer_bezier_curve_to(renderer, -150.291661, 118.78189499999998,
                                -112.46475800000002, 111.18057699999997,
                                -93.82217800000001, 83.16131999999998);
    rr_renderer_bezier_curve_to(renderer, -75.17960000000001, 55.14206299999998,
                                -82.78090300000001, 17.315159999999977,
                                -110.80016, -1.327420000000032);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -160.64746, 41.46875);
    rr_renderer_bezier_curve_to(renderer, -166.5774985, 42.6603699, -170.418731,
                                48.433655, -169.227096, 54.363678);
    rr_renderer_bezier_curve_to(renderer, -168.65484562999998, 57.2113953,
                                -166.97479199999998, 59.7151184,
                                -164.55653329999998, 61.324127);
    rr_renderer_bezier_curve_to(renderer, -162.1382593, 62.933105299999994,
                                -159.17987029999998, 63.515563799999995,
                                -156.3321528, 62.9432981);
    rr_renderer_line_to(renderer, -78.7418228, 47.3515621);
    rr_renderer_bezier_curve_to(renderer, -72.81176909999999, 46.1599117,
                                -68.9705518, 40.3866571, -70.1621718,
                                34.4566341);
    rr_renderer_bezier_curve_to(renderer, -71.3538222, 28.5265804, -77.1270768,
                                24.685363100000004, -83.0571148,
                                25.876983100000004);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -123.96538000000001, 94.83774);
    rr_renderer_bezier_curve_to(renderer, -128.867785, 98.377596, -135.714129,
                                97.2748738, -139.25712800000002,
                                92.37472729999999);
    rr_renderer_bezier_curve_to(renderer, -140.9585288, 90.02160829999998,
                                -141.6550467, 87.08957109999999,
                                -141.19343780000003, 84.22363429999999);
    rr_renderer_bezier_curve_to(
        renderer, -140.73184417000002, 81.35772849999998, -139.14991980000002,
        78.79266529999998, -136.79570220000002, 77.09277489999998);
    rr_renderer_line_to(renderer, -88.46849220000001, 42.19732789999998);
    rr_renderer_bezier_curve_to(renderer, -83.56608720000001, 38.65747189999998,
                                -76.71972820000002, 39.760194099999985,
                                -73.17672920000001, 44.66031009999998);
    rr_renderer_bezier_curve_to(renderer, -69.63376040000001, 49.56045659999998,
                                -70.73575020000001, 56.40240609999998,
                                -75.63815500000001, 59.94226209999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -143.11374, -0.45281999999997424);
    rr_renderer_bezier_curve_to(
        renderer, -149.00302200000002, -1.8240968999999743, -154.891938,
        1.8377684000000256, -156.26696900000002, 7.7261960000000265);
    rr_renderer_bezier_curve_to(renderer, -156.9272931, 10.553924300000027,
                                -156.43708924, 13.527404500000028,
                                -154.90422180000002, 15.992523000000027);
    rr_renderer_bezier_curve_to(
        renderer, -153.37133910000003, 18.457672000000027, -150.92134220000003,
        20.212524000000027, -148.0932018, 20.871032500000027);
    rr_renderer_line_to(renderer, -90.0373548, 34.38882450000003);
    rr_renderer_bezier_curve_to(renderer, -84.1480573, 35.760101400000025,
                                -78.2591568, 32.09823610000003, -76.8841258,
                                26.209838500000025);
    rr_renderer_bezier_curve_to(renderer, -75.5090648, 20.321410800000024,
                                -79.1686107, 14.436278500000025, -85.0578928,
                                13.065002500000025);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -78.05727999999999, 12.149960000000021);
    rr_renderer_bezier_curve_to(renderer, -140.4261, 34.59673700000002,
                                -172.78934999999998, 103.35336000000002,
                                -150.34258999999997, 165.72220000000002);
    rr_renderer_quadratic_curve_to(renderer, -139.25668299999998, 196.52466,
                                   -76.84691999999997, 208.85547000000003);
    rr_renderer_quadratic_curve_to(renderer, -27.57280999999997,
                                   249.09344600000003, 3.2296200000000255,
                                   238.00750900000003);
    rr_renderer_bezier_curve_to(renderer, 65.59845500000003, 215.56073200000003,
                                97.96170600000002, 146.80413900000002,
                                75.51496000000003, 84.43530900000002);
    rr_renderer_bezier_curve_to(renderer, 53.06821300000003, 22.06647400000002,
                                -15.688409999999976, -10.296776999999977,
                                -78.05727999999996, 12.149969000000013);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff239336);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -68.49689999999998, 38.71152000000001);
    rr_renderer_bezier_curve_to(renderer, -116.19565999999998,
                                55.878482000000005, -140.94660999999996,
                                108.46253, -123.77964499999999, 156.16129);
    rr_renderer_quadratic_curve_to(renderer, -116.039853, 177.66650900000002,
                                   -64.94419499999998, 183.567754);
    rr_renderer_quadratic_curve_to(renderer, -27.83506499999998,
                                   219.18384400000002, -6.32987499999998,
                                   211.444036);
    rr_renderer_bezier_curve_to(renderer, 41.36891500000002, 194.277105,
                                66.11983500000002, 141.693056,
                                48.95290100000002, 93.99426600000001);
    rr_renderer_bezier_curve_to(renderer, 31.785939000000017, 46.29550600000001,
                                -20.798108999999975, 21.544556000000014,
                                -68.49689899999998, 38.71152100000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -61.456999999999994, 137.42252000000002);
    rr_renderer_bezier_curve_to(
        renderer, -65.33715749999999, 145.66602000000003, -61.79998705999999,
        155.49414500000003, -53.55648729999999, 159.37430200000003);
    rr_renderer_bezier_curve_to(
        renderer, -49.597838599999996, 161.23761380000002, -45.06109529999999,
        161.45203030000002, -40.94433529999999, 159.97040185000003);
    rr_renderer_bezier_curve_to(
        renderer, -36.82760559999999, 158.48877345000002, -33.468016899999995,
        155.43243785000004, -31.604705299999992, 151.47378885000003);
    rr_renderer_line_to(renderer, 19.16427670000001, 43.61361885000004);
    rr_renderer_bezier_curve_to(renderer, 23.04443420000001, 35.37014985000004,
                                19.50723324000001, 25.541993850000036,
                                11.263764000000009, 21.661836850000036);
    rr_renderer_bezier_curve_to(renderer, 3.02026400000001, 17.781679350000037,
                                -6.807860999999992, 21.318880310000036,
                                -10.688017999999992, 29.562349550000036);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 36.02753000000001, 140.93982);
    rr_renderer_bezier_curve_to(renderer, 35.910464570000016, 150.0474555,
                                28.432284600000013, 157.340455,
                                19.324588000000013, 157.229188);
    rr_renderer_bezier_curve_to(renderer, 14.950931000000013, 157.17578224,
                                10.778720000000012, 155.3871165,
                                7.725833000000012, 152.25671499999999);
    rr_renderer_bezier_curve_to(renderer, 4.672946000000012, 149.1263134,
                                2.9894133000000123, 144.9105846,
                                3.045657000000012, 140.536958);
    rr_renderer_line_to(renderer, 4.199770800000012, 50.755247999999995);
    rr_renderer_bezier_curve_to(renderer, 4.316836230000012, 41.647642999999995,
                                11.795016200000012, 34.35464399999999,
                                20.90271280000001, 34.46588);
    rr_renderer_bezier_curve_to(renderer, 30.010409800000012, 34.57711657,
                                37.29873980000001, 42.050505199999996,
                                37.181642800000006, 51.15810999999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -96.43787, 78.58893);
    rr_renderer_bezier_curve_to(renderer, -103.382023, 84.483095,
                                -104.23682000000001, 94.89364800000001,
                                -98.34709550000001, 101.84158500000001);
    rr_renderer_bezier_curve_to(renderer, -95.51875690000001, 105.1781023,
                                -91.4815559, 107.25354200000001,
                                -87.12361550000001, 107.61139100000001);
    rr_renderer_bezier_curve_to(
        renderer, -82.76569010000001, 107.96920960000001, -78.44400450000002,
        106.58008000000001, -75.10931800000002, 103.74960500000002);
    rr_renderer_line_to(renderer, -6.654758000000015, 45.645693000000016);
    rr_renderer_bezier_curve_to(
        renderer, 0.28939499999998475, 39.751528000000015, 1.1441919999999843,
        29.340975000000014, -4.745547800000015, 22.393038000000015);
    rr_renderer_bezier_curve_to(
        renderer, -10.635257300000015, 15.445101000000015, -21.039157800000016,
        14.590883500000015, -27.983309800000015, 20.485048500000016);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 95.95769999999999, 62.10297000000003);
    rr_renderer_bezier_curve_to(renderer, 162.24343599999997, 62.10297000000003,
                                215.978635, 8.367770000000029, 215.978635,
                                -57.91793499999997);
    rr_renderer_quadratic_curve_to(renderer, 215.978635, -90.65484299999997,
                                   161.431515, -123.39175099999997);
    rr_renderer_quadratic_curve_to(renderer, 128.694607, -177.93885499999996,
                                   95.95769899999999, -177.93885499999996);
    rr_renderer_bezier_curve_to(
        renderer, 29.671992999999986, -177.93885499999996, -24.063206000000008,
        -124.20365499999997, -24.063206000000008, -57.91793499999996);
    rr_renderer_bezier_curve_to(
        renderer, -24.063206000000008, 8.367771000000047, 29.67199399999999,
        62.10297000000004, 95.95769899999999, 62.10297000000004);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff208932);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 95.95697000000001, 33.87304999999998);
    rr_renderer_bezier_curve_to(renderer, 146.651306, 33.87304999999998,
                                187.74719000000002, -7.222836000000022,
                                187.74719000000002, -57.91720000000002);
    rr_renderer_quadratic_curve_to(renderer, 187.74719000000002,
                                   -80.77295900000001, 141.66848500000003,
                                   -103.62873300000003);
    rr_renderer_quadratic_curve_to(renderer, 118.81271100000004,
                                   -149.70742300000003, 95.95696800000003,
                                   -149.70742300000003);
    rr_renderer_bezier_curve_to(
        renderer, 45.26260200000003, -149.70742300000003, 4.1667180000000315,
        -108.61153700000003, 4.1667180000000315, -57.91720300000003);
    rr_renderer_bezier_curve_to(
        renderer, 4.1667180000000315, -7.222837000000027, 45.26260400000003,
        33.87304699999997, 95.95696800000003, 33.87304699999997);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 122.76062000000002, -61.39046999999999);
    rr_renderer_bezier_curve_to(renderer, 129.2031554, -67.83297499999999,
                                129.2031554, -78.278348, 122.76062000000002,
                                -84.72085299999999);
    rr_renderer_bezier_curve_to(renderer, 119.66683950000002, -87.814664,
                                115.47073350000002, -89.552747,
                                111.09542800000001, -89.552747);
    rr_renderer_bezier_curve_to(renderer, 106.72012300000002, -89.552747,
                                102.52404700000001, -87.8146641,
                                99.43023600000001, -84.72085299999999);
    rr_renderer_line_to(renderer, 15.134551000000002, -0.4251679999999851);
    rr_renderer_bezier_curve_to(renderer, 8.692046000000001, 6.017337000000015,
                                8.692046000000001, 16.462710000000015,
                                15.134551000000002, 22.905215000000016);
    rr_renderer_bezier_curve_to(
        renderer, 21.577056000000002, 29.347720000000017, 32.022429,
        29.347720000000017, 38.464934, 22.905215000000016);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 32.22622999999999, -97.7123);
    rr_renderer_bezier_curve_to(renderer, 35.42059649999999, -106.242238,
                                44.92669999999998, -110.57198,
                                53.45868199999998, -107.383061);
    rr_renderer_bezier_curve_to(renderer, 57.55588049999998, -105.8516889,
                                60.87588799999998, -102.755818,
                                62.68832699999998, -98.776509);
    rr_renderer_bezier_curve_to(renderer, 64.50079649999998, -94.79721520000001,
                                64.65722959999998, -90.26042600000001,
                                63.12323299999998, -86.16420400000001);
    rr_renderer_line_to(renderer, 31.633486999999977, -2.0773040000000123);
    rr_renderer_bezier_curve_to(renderer, 28.43908999999998, 6.452602999999987,
                                18.93301699999998, 10.782375999999989,
                                10.401034999999979, 7.593441999999987);
    rr_renderer_bezier_curve_to(renderer, 1.8690529999999796, 4.404538199999987,
                                -2.457913000000021, -5.095492000000013,
                                0.7364539999999788, -13.625400000000012);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1a7329);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 135.75143000000003, 5.813420000000008);
    rr_renderer_bezier_curve_to(
        renderer, 144.28136800000001, 2.6190535000000077, 148.61111000000002,
        -6.887018999999992, 145.42220600000002, -15.419001999999992);
    rr_renderer_bezier_curve_to(
        renderer, 143.89083390000002, -19.516200499999993, 140.79494770000002,
        -22.836207999999992, 136.815639, -24.648676999999992);
    rr_renderer_bezier_curve_to(renderer, 132.83633, -26.461115999999993,
                                128.299556, -26.617579599999992,
                                124.20333400000001, -25.083582999999994);
    rr_renderer_line_to(renderer, 40.11645400000002, 6.406194000000006);
    rr_renderer_bezier_curve_to(renderer, 31.586516000000017, 9.600560500000007,
                                27.256774000000018, 19.106664000000006,
                                30.445708000000018, 27.638646000000005);
    rr_renderer_bezier_curve_to(
        renderer, 33.634611800000016, 36.170598000000005, 43.13461200000002,
        40.49759400000001, 51.66455000000002, 37.303197000000004);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 50.57297, -57.95614999999998);
    rr_renderer_bezier_curve_to(renderer, 50.57297, -124.24186999999998,
                                -3.1621999999999986, -177.97706999999997,
                                -69.447935, -177.97706999999997);
    rr_renderer_quadratic_curve_to(renderer, -102.18482800000001,
                                   -177.97706999999997, -134.921735,
                                   -123.42996599999998);
    rr_renderer_quadratic_curve_to(renderer, -189.468839, -90.69305799999998,
                                   -189.468839, -57.95614999999998);
    rr_renderer_bezier_curve_to(renderer, -189.468839, 8.329556000000025,
                                -135.733655, 62.06475500000002, -69.447934,
                                62.06475500000002);
    rr_renderer_bezier_curve_to(
        renderer, -3.1621980000000036, 62.06475500000002, 50.572970999999995,
        8.32955500000002, 50.572970999999995, -57.95614999999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff239336);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 22.343050000000005, -57.9554);
    rr_renderer_bezier_curve_to(renderer, 22.343050000000005,
                                -108.64973599999999, -18.752835999999995,
                                -149.74562, -69.44717, -149.74562);
    rr_renderer_quadratic_curve_to(renderer, -92.30296, -149.74562, -115.158718,
                                   -103.66693000000001);
    rr_renderer_quadratic_curve_to(renderer, -161.23742299999998,
                                   -80.81115600000001, -161.23742299999998,
                                   -57.955397000000005);
    rr_renderer_bezier_curve_to(
        renderer, -161.23742299999998, -7.261031000000003, -120.14153699999997,
        33.834852999999995, -69.44717299999998, 33.834852999999995);
    rr_renderer_bezier_curve_to(
        renderer, -18.752836999999978, 33.834852999999995, 22.343047000000027,
        -7.261033000000005, 22.343047000000027, -57.955397000000005);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -72.92047000000002, -84.75908000000001);
    rr_renderer_bezier_curve_to(
        renderer, -79.36297500000002, -91.20158500000001, -89.80834800000002,
        -91.20158500000001, -96.25085300000002, -84.75908000000001);
    rr_renderer_bezier_curve_to(
        renderer, -99.34466400000002, -81.66526900000001, -101.08273170000002,
        -77.46917830000001, -101.08273170000002, -73.09387300000002);
    rr_renderer_bezier_curve_to(
        renderer, -101.08273170000002, -68.71859830000001, -99.34466410000003,
        -64.52249200000001, -96.25085300000002, -61.42868100000002);
    rr_renderer_line_to(renderer, -11.955168000000015, 22.867003999999987);
    rr_renderer_bezier_curve_to(
        renderer, -5.512663000000015, 29.309508999999988, 4.932709999999986,
        29.309508999999988, 11.375214999999987, 22.867003999999987);
    rr_renderer_bezier_curve_to(
        renderer, 17.817719999999987, 16.424498999999987, 17.817719999999987,
        5.979125999999987, 11.375214999999987, -0.463379000000014);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -109.2423, 5.775329999999997);
    rr_renderer_bezier_curve_to(renderer, -117.7722225, 2.580932999999997,
                                -122.10198, -6.9251400000000025, -118.913061,
                                -15.457122000000002);
    rr_renderer_bezier_curve_to(renderer, -117.3816889, -19.554320500000003,
                                -114.285818, -22.874328000000002, -110.306509,
                                -24.686767000000003);
    rr_renderer_bezier_curve_to(renderer, -106.3272, -26.499236500000002,
                                -101.79042600000001, -26.655669600000003,
                                -97.69420400000001, -25.121673000000005);
    rr_renderer_line_to(renderer, -13.607304000000013, 6.368072999999995);
    rr_renderer_bezier_curve_to(renderer, -5.077366000000014, 9.562469999999996,
                                -0.7476240000000125, 19.068542999999995,
                                -3.936558000000014, 27.600524999999994);
    rr_renderer_bezier_curve_to(renderer, -7.125461800000014, 36.13250699999999,
                                -16.625462000000013, 40.459472999999996,
                                -25.155400000000014, 37.265105999999996);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -5.716549999999984, -97.7499);
    rr_renderer_bezier_curve_to(renderer, -8.910946999999984, -106.2798225,
                                -18.417019999999983, -110.609565,
                                -26.949001999999982, -107.42064599999999);
    rr_renderer_bezier_curve_to(
        renderer, -31.046200499999983, -105.88927389999999, -34.366207999999986,
        -102.79341799999999, -36.17867699999998, -98.81410899999999);
    rr_renderer_bezier_curve_to(
        renderer, -37.99111599999998, -94.83479999999999, -38.14754909999998,
        -90.29801099999999, -36.61358299999998, -86.20180399999998);
    rr_renderer_line_to(renderer, -5.123805999999977, -2.1149039999999815);
    rr_renderer_bezier_curve_to(renderer, -1.929408999999977, 6.415034000000018,
                                7.576664000000022, 10.74477600000002,
                                16.10864600000002, 7.555842000000018);
    rr_renderer_bezier_curve_to(renderer, 24.640598000000022, 4.366938200000018,
                                28.96759400000002, -5.133061999999983,
                                25.77319700000002, -13.66299999999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -18.799649999999986, 96.43024000000003);
    rr_renderer_bezier_curve_to(
        renderer, -7.477750999999985, 161.74253000000004, 54.64652000000001,
        205.51038000000003, 119.95880000000002, 194.18854000000005);
    rr_renderer_quadratic_curve_to(renderer, 152.21496500000003,
                                   188.59692600000005, 175.15423500000003,
                                   129.25925000000007);
    rr_renderer_quadratic_curve_to(renderer, 223.30871500000003,
                                   87.68622000000006, 217.717101,
                                   55.430090000000064);
    rr_renderer_bezier_curve_to(renderer, 206.395202, -9.88219999999994,
                                144.27093100000002, -53.65007999999993,
                                78.958651, -42.32820999999994);
    rr_renderer_bezier_curve_to(
        renderer, 13.646360999999999, -31.006340999999942, -30.121518999999992,
        31.117930000000058, -18.799649000000002, 96.43024000000007);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff239336);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 9.015600000000006, 91.60770000000002);
    rr_renderer_bezier_curve_to(renderer, 17.67441300000001, 141.55759000000003,
                                65.18613200000001, 175.03061000000002,
                                115.13602, 166.3718);
    rr_renderer_quadratic_curve_to(renderer, 137.656162, 162.467961, 152.30585,
                                   113.16208300000001);
    rr_renderer_quadratic_curve_to(renderer, 193.80401999999998,
                                   82.77151900000001, 189.90015,
                                   60.25137700000001);
    rr_renderer_bezier_curve_to(renderer, 181.241337, 10.301517000000011,
                                133.72958699999998, -23.17153299999999,
                                83.77973, -14.512722999999987);
    rr_renderer_bezier_curve_to(renderer, 33.82984, -5.853909999999987,
                                0.3567900000000037, 41.657809000000015,
                                9.015600000000006, 91.607697);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 107.45830000000001, 101.74633999999998);
    rr_renderer_bezier_curve_to(renderer, 114.906603, 106.99383759999998,
                                125.19859500000001, 105.20971899999998,
                                130.44609300000002, 97.76141569999997);
    rr_renderer_bezier_curve_to(renderer, 132.966021, 94.18460299999997,
                                133.96187060000003, 89.75326769999997,
                                133.2145561, 85.44223269999998);
    rr_renderer_bezier_curve_to(renderer, 132.46721110000001, 81.13116699999998,
                                130.0379509, 77.29358169999998,
                                126.46113810000001, 74.77362269999998);
    rr_renderer_line_to(renderer, 29.005328100000014, 6.113922699999975);
    rr_renderer_bezier_curve_to(renderer, 21.557025100000015, 0.866425099999975,
                                11.265033100000014, 2.6505436999999747,
                                6.017535100000014, 10.098846999999974);
    rr_renderer_bezier_curve_to(
        renderer, 0.7700375000000141, 17.547149999999974, 2.554156100000014,
        27.839141999999974, 10.002459400000014, 33.086608999999974);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 127.78307999999998, 6.3375500000000216);
    rr_renderer_bezier_curve_to(renderer, 136.733367, 8.02807120000002,
                                142.62319799999997, 16.655024000000022,
                                140.938414, 25.606380000000023);
    rr_renderer_bezier_curve_to(renderer, 140.12936249999998, 29.90496400000002,
                                137.646025, 33.70501300000002, 134.0347275,
                                36.17052800000002);
    rr_renderer_bezier_curve_to(renderer, 130.4234299, 38.636043100000016,
                                125.98000950000001, 39.56508980000002,
                                121.68191350000001, 38.75329170000002);
    rr_renderer_line_to(renderer, 33.451293500000006, 22.08834370000002);
    rr_renderer_bezier_curve_to(renderer, 24.501006500000006, 20.39782250000002,
                                18.611175500000005, 11.77086970000002,
                                20.295959500000006, 2.8195137000000194);
    rr_renderer_bezier_curve_to(renderer, 21.980743400000005, -6.13184129999998,
                                30.602172500000005, -12.017919299999981,
                                39.552459500000005, -10.327398299999981);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff1d7f2e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 43.460199999999986, 126.02510000000001);
    rr_renderer_bezier_curve_to(renderer, 48.064630999999984, 133.88417,
                                58.17064899999998, 136.52662600000002,
                                66.03264899999999, 131.9272606);
    rr_renderer_bezier_curve_to(renderer, 69.8081007, 129.71855090000003,
                                72.55059329999999, 126.10108860000001,
                                73.65673349999999, 121.87061960000001);
    rr_renderer_bezier_curve_to(renderer, 74.7629042, 117.6401816,
                                74.14214609999999, 113.14329460000002,
                                71.93102549999999, 109.36924660000001);
    rr_renderer_line_to(renderer, 26.541285499999987, 31.89579660000001);
    rr_renderer_bezier_curve_to(renderer, 21.93688489999999, 24.036726600000012,
                                11.830866499999987, 21.39424060000001,
                                3.9688674999999876, 25.99363600000001);
    rr_renderer_bezier_curve_to(renderer, -3.893132000000012, 30.59303180000001,
                                -6.533940500000012, 40.69258000000001,
                                -1.9295090000000128, 48.55161900000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 59.39431999999999, -18.855700000000013);
    rr_renderer_bezier_curve_to(renderer, 90.509188, -49.970599000000014,
                                90.509188, -100.41779000000001,
                                59.39431999999999, -131.53269);
    rr_renderer_quadratic_curve_to(renderer, 44.02743799999999, -146.899572,
                                   3.05581999999999, -136.66174900000001);
    rr_renderer_quadratic_curve_to(renderer, -37.91577000000001, -146.8995725,
                                   -53.28265000000001, -131.53269);
    rr_renderer_bezier_curve_to(renderer, -84.39754900000001, -100.417791,
                                -84.39754900000001, -49.970600000000005,
                                -53.28265000000001, -18.8557);
    rr_renderer_bezier_curve_to(
        renderer, -22.16778200000001, 12.259168000000003, 28.279419999999995,
        12.259168000000003, 59.394319999999986, -18.8557);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff29a63e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 46.14267000000001, -32.10665999999998);
    rr_renderer_bezier_curve_to(renderer, 69.93887400000001, -55.90286399999998,
                                69.93887400000001, -94.48414699999998,
                                46.14267000000001, -118.28034999999997);
    rr_renderer_quadratic_curve_to(renderer, 35.414032000000006,
                                   -129.00898799999996, 3.0558170000000118,
                                   -118.10801723999997);
    rr_renderer_quadratic_curve_to(renderer, -29.30239799999999,
                                   -129.00898723999995, -40.031035999999986,
                                   -118.28034999999997);
    rr_renderer_bezier_curve_to(
        renderer, -63.82723999999999, -94.48414599999997, -63.82723999999999,
        -55.90286299999997, -40.031035999999986, -32.10665999999998);
    rr_renderer_bezier_curve_to(
        renderer, -16.234831999999987, -8.310455999999977, 22.346466000000014,
        -8.310455999999977, 46.14267000000001, -32.10665999999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 14.007229999999993, -89.40566999999999);
    rr_renderer_bezier_curve_to(
        renderer, 14.007229999999993, -95.45397929999999, 9.104123299999992,
        -100.35708599999998, 3.0558139999999927, -100.35708599999998);
    rr_renderer_bezier_curve_to(
        renderer, 0.15133399999999275, -100.35708599999998, -2.634219000000007,
        -99.20329269999998, -4.687991000000007, -97.14949019999997);
    rr_renderer_bezier_curve_to(
        renderer, -6.741793500000007, -95.09570299999997, -7.895602000000007,
        -92.31016519999997, -7.895602000000007, -89.40567019999997);
    rr_renderer_line_to(renderer, -7.895602000000007, -10.267944199999974);
    rr_renderer_bezier_curve_to(
        renderer, -7.895602000000007, -4.219634899999974, -2.9924650000000073,
        0.6834718000000262, 3.0558139999999927, 0.6834718000000262);
    rr_renderer_bezier_curve_to(renderer, 9.104123299999992, 0.6834718000000262,
                                14.007229999999993, -4.219634899999974,
                                14.007229999999993, -10.267944199999974);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -45.539800000000014, -63.95798000000002);
    rr_renderer_bezier_curve_to(
        renderer, -48.044316600000016, -69.46145900000002, -45.614537550000016,
        -75.95605700000002, -40.112676000000015, -78.46411400000002);
    rr_renderer_bezier_curve_to(
        renderer, -37.470586200000014, -79.66855130000002, -34.45892840000001,
        -79.77374530000003, -31.740239000000017, -78.75662500000003);
    rr_renderer_bezier_curve_to(
        renderer, -29.021580600000018, -77.73950460000003, -26.818547000000017,
        -75.68332180000003, -25.615819000000016, -73.04046900000003);
    rr_renderer_line_to(renderer, -0.9264270000000145, -18.788149000000033);
    rr_renderer_bezier_curve_to(
        renderer, 1.5780895999999855, -13.284700500000032, -0.8516894500000145,
        -6.790072000000032, -6.353551000000015, -4.282015000000033);
    rr_renderer_bezier_curve_to(
        renderer, -11.855412600000015, -1.773958400000033, -18.345861000000014,
        -4.202211530000033, -20.850408000000016, -9.705660000000034);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 51.651099999999985, -63.957730000000026);
    rr_renderer_bezier_curve_to(renderer, 54.15561659999999, -69.46120900000003,
                                51.72583754999999, -75.95580700000002,
                                46.223975999999986, -78.46386400000003);
    rr_renderer_bezier_curve_to(
        renderer, 43.581886199999985, -79.66830130000002, 40.570258999999986,
        -79.77349530000004, 37.85156999999999, -78.75637500000003);
    rr_renderer_bezier_curve_to(renderer, 35.13288099999999, -77.73925460000004,
                                32.92984759999999, -75.68307180000004,
                                31.727119299999988, -73.04021900000004);
    rr_renderer_line_to(renderer, 7.037727299999986, -18.78789900000004);
    rr_renderer_bezier_curve_to(
        renderer, 4.5332106999999855, -13.284450500000037, 6.963020269999986,
        -6.789822000000038, 12.464851299999985, -4.281765000000039);
    rr_renderer_bezier_curve_to(
        renderer, 17.966712899999983, -1.773708400000039, 24.457161299999985,
        -4.201961530000039, 26.961708299999984, -9.70541000000004);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -72.28989999999999, 25.142499999999984);
    rr_renderer_bezier_curve_to(
        renderer, -113.91546499999998, 66.76807999999998, -113.91546499999998,
        134.25647999999998, -72.28989999999999, 175.88206);
    rr_renderer_quadratic_curve_to(renderer, -51.732038999999986, 196.43989,
                                   3.079880000000017, 182.743724);
    rr_renderer_quadratic_curve_to(renderer, 57.89180000000002, 196.439891,
                                   78.44966000000002, 175.88206);
    rr_renderer_bezier_curve_to(renderer, 120.07524000000002, 134.25648,
                                120.07524000000002, 66.76808, 78.44966000000002,
                                25.142499999999984);
    rr_renderer_bezier_curve_to(
        renderer, 36.82408000000002, -16.483080000000015, -30.664319999999975,
        -16.483080000000015, -72.28989999999999, 25.142499999999984);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff29a63e);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -54.561800000000005, 42.86962999999997);
    rr_renderer_bezier_curve_to(renderer, -86.39642500000001, 74.70425499999997,
                                -86.39642500000001, 126.31838999999997,
                                -54.561800000000005, 158.15304999999998);
    rr_renderer_quadratic_curve_to(renderer, -40.209017, 172.50583299999997,
                                   3.0798929999999913, 157.92245917999998);
    rr_renderer_quadratic_curve_to(renderer, 46.36883299999999,
                                   172.50583317999997, 60.721616999999995,
                                   158.15304999999998);
    rr_renderer_bezier_curve_to(renderer, 92.556242, 126.31839399999998,
                                92.556242, 74.70425999999998,
                                60.721616999999995, 42.86962999999997);
    rr_renderer_bezier_curve_to(
        renderer, 28.886960999999996, 11.035004999999973, -22.727173000000008,
        11.035004999999973, -54.56180300000001, 42.86962999999997);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -11.570920000000001, 119.52440000000001);
    rr_renderer_bezier_curve_to(renderer, -11.570920000000001,
                                127.61583100000001, -5.011533000000001,
                                134.175218, 3.0798979999999982, 134.175218);
    rr_renderer_bezier_curve_to(renderer, 6.965548599999998, 134.175218,
                                10.692049999999998, 132.6316694,
                                13.439608999999999, 129.884111);
    rr_renderer_bezier_curve_to(renderer, 16.1871676, 127.13652199999999,
                                17.730746699999997, 123.410051,
                                17.730746699999997, 119.52439999999999);
    rr_renderer_line_to(renderer, 17.730746699999997, 13.653729999999982);
    rr_renderer_bezier_curve_to(renderer, 17.730746699999997, 5.562298999999982,
                                11.171328999999997, -0.9971180000000182,
                                3.0798986999999975, -0.9971180000000182);
    rr_renderer_bezier_curve_to(
        renderer, -5.0115323000000025, -0.9971180000000182, -11.570919300000002,
        5.562299699999982, -11.570919300000002, 13.653729999999982);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 68.09125, 85.48043999999999);
    rr_renderer_bezier_curve_to(renderer, 71.4418054, 92.84295829999999,
                                68.191225586, 101.53149599999999,
                                60.830813000000006, 104.88678199999998);
    rr_renderer_bezier_curve_to(renderer, 57.29623660000001, 106.49804909999999,
                                53.267245, 106.63879619999999,
                                49.630190000000006, 105.27807839999998);
    rr_renderer_bezier_curve_to(renderer, 45.99310500000001, 103.91736059999998,
                                43.04590040000001, 101.16662839999998,
                                41.43689200000001, 97.63101439999998);
    rr_renderer_line_to(renderer, 8.407382000000005, 25.052094399999987);
    rr_renderer_bezier_curve_to(renderer, 5.056796000000006, 17.689545399999986,
                                8.307406414000006, 9.001038399999988,
                                15.667788500000006, 5.645752399999989);
    rr_renderer_bezier_curve_to(
        renderer, 23.028170500000005, 2.2904667999999884, 31.711123500000006,
        5.538971393999988, 35.06170850000001, 12.901520399999988);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff248c35);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -61.93097, 85.4801);
    rr_renderer_bezier_curve_to(renderer, -65.281556, 92.842649, -62.030945586,
                                101.531156, -54.6705635, 104.88644199999999);
    rr_renderer_bezier_curve_to(renderer, -51.1359565, 106.4977091, -47.1069649,
                                106.6384562, -43.4699105, 105.27773839999999);
    rr_renderer_bezier_curve_to(renderer, -39.8328561, 103.91702059999999,
                                -36.8856209, 101.16628839999998,
                                -35.276642499999994, 97.63067439999999);
    rr_renderer_line_to(renderer, -2.247102499999997, 25.05178439999999);
    rr_renderer_bezier_curve_to(renderer, 1.103483500000003, 17.689235399999987,
                                -2.1471269139999967, 9.00072839999999,
                                -9.507508999999997, 5.645412399999987);
    rr_renderer_bezier_curve_to(
        renderer, -16.867921599999995, 2.290126799999987, -25.550874,
        5.538661909999988, -28.901429, 12.901180399999987);
    rr_renderer_fill(renderer);
}