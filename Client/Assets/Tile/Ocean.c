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

void rr_oc_tile_1_draw(struct rr_renderer *renderer)
{
    rr_renderer_set_fill(renderer, 0xff165d76);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -128, -128);
    rr_renderer_line_to(renderer, 128, -128);
    rr_renderer_line_to(renderer, 128, 128);
    rr_renderer_line_to(renderer, -128, 128);
    rr_renderer_line_to(renderer, -128, -128);
    rr_renderer_fill(renderer);
    rr_renderer_clip(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.4393, -146.927248);
    rr_renderer_bezier_curve_to(renderer, 72.23582400000001, -138.468635,
                                60.737213000000004, -127.286598,
                                49.871520000000004, -109.07974399999999);
    rr_renderer_bezier_curve_to(renderer, 39.00582800000001, -90.872892,
                                43.568968700000006, -56.17969399999999,
                                24.245131000000004, -37.686128);
    rr_renderer_bezier_curve_to(
        renderer, 4.9212780000000045, -19.192559999999997, -42.703849000000005,
        -16.898621999999996, -66.071535, 1.8816590000000062);
    rr_renderer_bezier_curve_to(renderer, -89.439218, 20.661932000000007,
                                -98.75773799999999, 57.79230400000001,
                                -115.960981, 74.99554900000001);
    rr_renderer_bezier_curve_to(renderer, -133.164221, 92.19878100000001,
                                -163.843435, 90.765218, -169.290979,
                                105.10109400000002);
    rr_renderer_bezier_curve_to(renderer, -174.738523, 119.43697000000002,
                                -166.279676, 154.55966600000002, -148.646251,
                                161.01080800000003);
    rr_renderer_bezier_curve_to(renderer, -131.012824, 167.46198000000004,
                                -85.28106100000001, 159.29077630000003,
                                -63.49041100000001, 143.80804900000004);
    rr_renderer_bezier_curve_to(
        renderer, -41.69976900000001, 128.32532200000003, -43.13379800000001,
        88.47151600000004, -17.902361000000006, 68.11442900000004);
    rr_renderer_bezier_curve_to(renderer, 7.3290769999999945, 47.75734300000005,
                                65.133569, 45.320407000000046, 87.898199,
                                21.66554600000004);
    rr_renderer_bezier_curve_to(
        renderer, 110.66283200000001, -1.9893239999999572, 105.66927100000001,
        -53.743913999999954, 118.68543, -73.81475399999997);
    rr_renderer_bezier_curve_to(renderer, 131.701574, -93.88558899999997,
                                160.26065599999998, -84.42336599999996,
                                165.995153, -98.75947699999996);
    rr_renderer_bezier_curve_to(renderer, 171.72965, -113.09558799999996,
                                165.85168987, -151.80346399999996, 153.092382,
                                -159.83142199999998);
    rr_renderer_bezier_curve_to(
        renderer, 140.33307399999998, -167.85938399999998, 106.64278199999998,
        -155.38585599999996, 89.43930599999999, -146.92724099999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.43959000000001, -403.75314);
    rr_renderer_bezier_curve_to(renderer, 72.23611400000001, -395.294522,
                                60.73750300000001, -384.112484,
                                49.87181000000001, -365.90563599999996);
    rr_renderer_bezier_curve_to(renderer, 39.006118000000015, -347.698788,
                                43.56925870000001, -313.00559599999997,
                                24.24540600000001, -294.51201999999995);
    rr_renderer_bezier_curve_to(
        renderer, 4.921569000000009, -276.01845999999995, -42.703568999999995,
        -273.72452999999996, -66.07125399999998, -254.94424799999996);
    rr_renderer_bezier_curve_to(
        renderer, -89.43894099999999, -236.16396699999996, -98.75745699999999,
        -199.03359599999996, -115.96069999999997, -181.83035799999996);
    rr_renderer_bezier_curve_to(
        renderer, -133.16394099999997, -164.62711499999995, -165.27671999999998,
        -167.86144399999995, -169.29069999999996, -151.72480199999995);
    rr_renderer_bezier_curve_to(
        renderer, -173.30467699999997, -135.58816199999995, -157.67800799999995,
        -91.46166799999995, -140.04458299999996, -85.01050799999996);
    rr_renderer_bezier_curve_to(
        renderer, -122.41115599999996, -78.55935139999995, -83.84721799999997,
        -95.73436599999997, -63.49014299999996, -113.01785699999996);
    rr_renderer_bezier_curve_to(
        renderer, -43.13306399999996, -130.30134999999996, -43.133529999999965,
        -168.35438199999996, -17.902092999999958, -188.71145699999997);
    rr_renderer_bezier_curve_to(
        renderer, 7.3293370000000415, -209.06853899999996, 65.13384100000005,
        -211.50548199999997, 87.89847700000004, -235.16035199999996);
    rr_renderer_bezier_curve_to(renderer, 110.66309500000004, -258.815206,
                                105.66953400000004, -310.56981199999996,
                                118.68569300000004, -330.64064199999996);
    rr_renderer_bezier_curve_to(
        renderer, 131.70186700000005, -350.71147299999996, 160.26094900000004,
        -341.24925399999995, 165.99541600000003, -355.585359);
    rr_renderer_bezier_curve_to(renderer, 171.72991300000004, -369.92148,
                                165.85195287000005, -408.629349,
                                153.09264500000003, -416.65730399999995);
    rr_renderer_bezier_curve_to(renderer, 140.33333700000003, -424.685258,
                                106.64306000000003, -412.2117474,
                                89.43958500000002, -403.75312899999994);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 101.49843999999999, 94.38637);
    rr_renderer_bezier_curve_to(renderer, 84.294964, 102.844988,
                                72.79635299999998, 114.027026,
                                61.93065999999999, 132.23389);
    rr_renderer_bezier_curve_to(renderer, 51.06496799999999, 150.440738,
                                55.62810869999999, 185.133914,
                                36.304270999999986, 203.62750599999998);
    rr_renderer_bezier_curve_to(
        renderer, 16.980417999999986, 222.12106599999998, -30.64470900000002,
        224.41498199999998, -54.01239500000001, 243.19528599999998);
    rr_renderer_bezier_curve_to(renderer, -77.38008200000002, 261.975559,
                                -86.69860200000002, 299.105931,
                                -103.90184100000002, 316.309176);
    rr_renderer_bezier_curve_to(renderer, -121.10508200000001, 333.512393,
                                -153.21785800000004, 330.278079,
                                -157.23184100000003, 346.41470599999997);
    rr_renderer_bezier_curve_to(renderer, -161.24582400000003, 362.551364,
                                -145.61915300000004, 406.67785899999996,
                                -127.98572600000003, 413.12903099999994);
    rr_renderer_bezier_curve_to(
        renderer, -110.35229900000003, 419.58014199999997, -71.78836100000004,
        402.4051539999999, -51.43128600000003, 385.12164599999994);
    rr_renderer_bezier_curve_to(
        renderer, -31.07420700000003, 367.83816799999994, -31.07467300000003,
        329.7851289999999, -5.843236000000026, 309.42804599999994);
    rr_renderer_bezier_curve_to(
        renderer, 19.388201999999975, 289.07098999999994, 77.19269399999996,
        286.6340399999999, 99.95732399999997, 262.9791629999999);
    rr_renderer_bezier_curve_to(
        renderer, 122.72195699999997, 239.32431699999992, 117.72839599999998,
        187.56970899999993, 130.74455499999996, 167.4988769999999);
    rr_renderer_bezier_curve_to(renderer, 143.76069899999996, 147.4280459999999,
                                172.31978099999998, 156.8902649999999,
                                178.05427799999995, 142.5541439999999);
    rr_renderer_bezier_curve_to(renderer, 183.78877499999996, 128.2180229999999,
                                177.91081486999997, 89.5101679999999,
                                165.15150699999995, 81.4821989999999);
    rr_renderer_bezier_curve_to(renderer, 152.39219899999995, 73.4542449999999,
                                118.70190699999995, 85.9277709999999,
                                101.49843099999995, 94.38637399999989);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -69.1168, -44.29921);
    rr_renderer_bezier_curve_to(renderer, -69.1168, -55.388398, -60.127245,
                                -64.377953, -49.038056999999995, -64.377953);
    rr_renderer_bezier_curve_to(renderer, -43.7128464, -64.377953,
                                -38.60573699999999, -62.262520300000006,
                                -34.84025, -58.49702500000001);
    rr_renderer_bezier_curve_to(
        renderer, -31.074754699999996, -54.73152970000001, -28.959321999999997,
        -49.62442800000001, -28.959321999999997, -44.29921000000001);
    rr_renderer_bezier_curve_to(
        renderer, -28.959321999999997, -33.21003000000001, -37.948876999999996,
        -24.220475000000008, -49.038056999999995, -24.220475000000008);
    rr_renderer_bezier_curve_to(renderer, -60.127244999999995,
                                -24.220475000000008, -69.1168, -33.21003,
                                -69.1168, -44.29921000000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -61.038055, -44.29921);
    rr_renderer_bezier_curve_to(renderer, -61.038055, -50.9266285, -55.6654735,
                                -56.29921, -49.038055, -56.29921);
    rr_renderer_bezier_curve_to(renderer, -45.8554607, -56.29921, -42.8032146,
                                -55.034927800000006, -40.55278,
                                -52.784493000000005);
    rr_renderer_bezier_curve_to(renderer, -38.3023375, -50.5340581,
                                -37.038055299999996, -47.481812000000005,
                                -37.038055299999996, -44.29921);
    rr_renderer_bezier_curve_to(renderer, -37.038055299999996, -37.671799,
                                -42.410644299999994, -32.29921,
                                -49.038055299999996, -32.29921);
    rr_renderer_bezier_curve_to(renderer, -55.665473799999994, -32.29921,
                                -61.038055299999996, -37.671799,
                                -61.038055299999996, -44.29921);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -91.35827, 67.38583);
    rr_renderer_bezier_curve_to(renderer, -91.35827, 56.296642, -82.368711,
                                47.30708, -71.279527, 47.30708);
    rr_renderer_bezier_curve_to(renderer, -65.9543164, 47.30708, -60.847207,
                                49.4225127, -57.081712, 53.1880157);
    rr_renderer_bezier_curve_to(renderer, -53.3162243, 56.9535034, -51.2007916,
                                62.0606047, -51.2007916, 67.3858307);
    rr_renderer_bezier_curve_to(renderer, -51.2007916, 78.4750027, -60.1903466,
                                87.46456570000001, -71.2795266,
                                87.46456570000001);
    rr_renderer_bezier_curve_to(renderer, -82.3687106, 87.46456570000001,
                                -91.3582696, 78.4750027, -91.3582696,
                                67.38583070000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -83.279526, 67.38583);
    rr_renderer_bezier_curve_to(renderer, -83.279526, 60.758404,
                                -77.90694450000001, 55.38583, -71.279526,
                                55.38583);
    rr_renderer_bezier_curve_to(renderer, -68.0969317, 55.38583,
                                -65.04468200000001, 56.650112199999995,
                                -62.794243, 58.9005395);
    rr_renderer_bezier_curve_to(renderer, -60.5438081, 61.150982,
                                -59.279526000000004, 64.2032281,
                                -59.279526000000004, 67.3858305);
    rr_renderer_bezier_curve_to(renderer, -59.279526000000004,
                                74.01324149999999, -64.6521113, 79.3858305,
                                -71.279526, 79.3858305);
    rr_renderer_bezier_curve_to(renderer, -77.90694450000001, 79.3858305,
                                -83.279526, 74.01324149999999, -83.279526,
                                67.3858305);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 70.6916, -13.998689999999996);
    rr_renderer_bezier_curve_to(renderer, 70.6916, -25.087869999999995,
                                79.681148, -34.077433, 90.77033499999999,
                                -34.077433);
    rr_renderer_bezier_curve_to(renderer, 96.0955456, -34.077433,
                                101.20266199999999, -31.9620003, 104.96815,
                                -28.196505);
    rr_renderer_bezier_curve_to(
        renderer, 108.73363769999999, -24.431009699999997, 110.84907039999999,
        -19.323901, 110.84907039999999, -13.998689999999998);
    rr_renderer_bezier_curve_to(
        renderer, 110.84907039999999, -2.9095099999999974, 101.85952239999999,
        6.080045000000004, 90.7703354, 6.080045000000004);
    rr_renderer_bezier_curve_to(renderer, 79.68114739999999, 6.080045000000004,
                                70.6916004, -2.9095099999999956, 70.6916004,
                                -13.998689999999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 78.77034, -13.998689999999996);
    rr_renderer_bezier_curve_to(renderer, 78.77034, -20.626108499999997,
                                84.14292900000001, -25.998689999999996,
                                90.77034, -25.998689999999996);
    rr_renderer_bezier_curve_to(
        renderer, 93.95294200000001, -25.998689999999996, 97.005188,
        -24.734407799999996, 99.255615, -22.483972999999995);
    rr_renderer_bezier_curve_to(
        renderer, 101.50605750000001, -20.233538099999997, 102.77033970000001,
        -17.181284399999996, 102.77033970000001, -13.998689999999995);
    rr_renderer_bezier_curve_to(
        renderer, 102.77033970000001, -7.371271499999994, 97.3977507,
        -1.9986899999999945, 90.77033970000001, -1.9986899999999945);
    rr_renderer_bezier_curve_to(
        renderer, 84.14292870000001, -1.9986899999999945, 78.77033970000001,
        -7.371271499999994, 78.77033970000001, -13.998689999999995);
    rr_renderer_fill(renderer);
}

void rr_oc_tile_2_draw(struct rr_renderer *renderer)
{
    rr_renderer_set_fill(renderer, 0xff165d76);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -128, -128);
    rr_renderer_line_to(renderer, 128, -128);
    rr_renderer_line_to(renderer, 128, 128);
    rr_renderer_line_to(renderer, -128, 128);
    rr_renderer_line_to(renderer, -128, -128);
    rr_renderer_fill(renderer);
    rr_renderer_clip(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.4393, -146.927248);
    rr_renderer_bezier_curve_to(renderer, 72.23582400000001, -138.468635,
                                60.737213000000004, -127.286598,
                                49.871520000000004, -109.07974399999999);
    rr_renderer_bezier_curve_to(renderer, 39.00582800000001, -90.872892,
                                43.568968700000006, -56.17969399999999,
                                24.245131000000004, -37.686128);
    rr_renderer_bezier_curve_to(
        renderer, 4.9212780000000045, -19.192559999999997, -42.703849000000005,
        -16.898621999999996, -66.071535, 1.8816590000000062);
    rr_renderer_bezier_curve_to(renderer, -89.439218, 20.661932000000007,
                                -98.75773799999999, 57.79230400000001,
                                -115.960981, 74.99554900000001);
    rr_renderer_bezier_curve_to(renderer, -133.164221, 92.19878100000001,
                                -163.843435, 90.765218, -169.290979,
                                105.10109400000002);
    rr_renderer_bezier_curve_to(renderer, -174.738523, 119.43697000000002,
                                -166.279676, 154.55966600000002, -148.646251,
                                161.01080800000003);
    rr_renderer_bezier_curve_to(renderer, -131.012824, 167.46198000000004,
                                -85.28106100000001, 159.29077630000003,
                                -63.49041100000001, 143.80804900000004);
    rr_renderer_bezier_curve_to(
        renderer, -41.69976900000001, 128.32532200000003, -43.13379800000001,
        88.47151600000004, -17.902361000000006, 68.11442900000004);
    rr_renderer_bezier_curve_to(renderer, 7.3290769999999945, 47.75734300000005,
                                65.133569, 45.320407000000046, 87.898199,
                                21.66554600000004);
    rr_renderer_bezier_curve_to(
        renderer, 110.66283200000001, -1.9893239999999572, 105.66927100000001,
        -53.743913999999954, 118.68543, -73.81475399999997);
    rr_renderer_bezier_curve_to(renderer, 131.701574, -93.88558899999997,
                                160.26065599999998, -84.42336599999996,
                                165.995153, -98.75947699999996);
    rr_renderer_bezier_curve_to(renderer, 171.72965, -113.09558799999996,
                                165.85168987, -151.80346399999996, 153.092382,
                                -159.83142199999998);
    rr_renderer_bezier_curve_to(
        renderer, 140.33307399999998, -167.85938399999998, 106.64278199999998,
        -155.38585599999996, 89.43930599999999, -146.92724099999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.43959000000001, -403.75314);
    rr_renderer_bezier_curve_to(renderer, 72.23611400000001, -395.294522,
                                60.73750300000001, -384.112484,
                                49.87181000000001, -365.90563599999996);
    rr_renderer_bezier_curve_to(renderer, 39.006118000000015, -347.698788,
                                43.56925870000001, -313.00559599999997,
                                24.24540600000001, -294.51201999999995);
    rr_renderer_bezier_curve_to(
        renderer, 4.921569000000009, -276.01845999999995, -42.703568999999995,
        -273.72452999999996, -66.07125399999998, -254.94424799999996);
    rr_renderer_bezier_curve_to(
        renderer, -89.43894099999999, -236.16396699999996, -98.75745699999999,
        -199.03359599999996, -115.96069999999997, -181.83035799999996);
    rr_renderer_bezier_curve_to(
        renderer, -133.16394099999997, -164.62711499999995, -165.27671999999998,
        -167.86144399999995, -169.29069999999996, -151.72480199999995);
    rr_renderer_bezier_curve_to(
        renderer, -173.30467699999997, -135.58816199999995, -157.67800799999995,
        -91.46166799999995, -140.04458299999996, -85.01050799999996);
    rr_renderer_bezier_curve_to(
        renderer, -122.41115599999996, -78.55935139999995, -83.84721799999997,
        -95.73436599999997, -63.49014299999996, -113.01785699999996);
    rr_renderer_bezier_curve_to(
        renderer, -43.13306399999996, -130.30134999999996, -43.133529999999965,
        -168.35438199999996, -17.902092999999958, -188.71145699999997);
    rr_renderer_bezier_curve_to(
        renderer, 7.3293370000000415, -209.06853899999996, 65.13384100000005,
        -211.50548199999997, 87.89847700000004, -235.16035199999996);
    rr_renderer_bezier_curve_to(renderer, 110.66309500000004, -258.815206,
                                105.66953400000004, -310.56981199999996,
                                118.68569300000004, -330.64064199999996);
    rr_renderer_bezier_curve_to(
        renderer, 131.70186700000005, -350.71147299999996, 160.26094900000004,
        -341.24925399999995, 165.99541600000003, -355.585359);
    rr_renderer_bezier_curve_to(renderer, 171.72991300000004, -369.92148,
                                165.85195287000005, -408.629349,
                                153.09264500000003, -416.65730399999995);
    rr_renderer_bezier_curve_to(renderer, 140.33333700000003, -424.685258,
                                106.64306000000003, -412.2117474,
                                89.43958500000002, -403.75312899999994);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 101.49843999999999, 94.38637);
    rr_renderer_bezier_curve_to(renderer, 84.294964, 102.844988,
                                72.79635299999998, 114.027026,
                                61.93065999999999, 132.23389);
    rr_renderer_bezier_curve_to(renderer, 51.06496799999999, 150.440738,
                                55.62810869999999, 185.133914,
                                36.304270999999986, 203.62750599999998);
    rr_renderer_bezier_curve_to(
        renderer, 16.980417999999986, 222.12106599999998, -30.64470900000002,
        224.41498199999998, -54.01239500000001, 243.19528599999998);
    rr_renderer_bezier_curve_to(renderer, -77.38008200000002, 261.975559,
                                -86.69860200000002, 299.105931,
                                -103.90184100000002, 316.309176);
    rr_renderer_bezier_curve_to(renderer, -121.10508200000001, 333.512393,
                                -153.21785800000004, 330.278079,
                                -157.23184100000003, 346.41470599999997);
    rr_renderer_bezier_curve_to(renderer, -161.24582400000003, 362.551364,
                                -145.61915300000004, 406.67785899999996,
                                -127.98572600000003, 413.12903099999994);
    rr_renderer_bezier_curve_to(
        renderer, -110.35229900000003, 419.58014199999997, -71.78836100000004,
        402.4051539999999, -51.43128600000003, 385.12164599999994);
    rr_renderer_bezier_curve_to(
        renderer, -31.07420700000003, 367.83816799999994, -31.07467300000003,
        329.7851289999999, -5.843236000000026, 309.42804599999994);
    rr_renderer_bezier_curve_to(
        renderer, 19.388201999999975, 289.07098999999994, 77.19269399999996,
        286.6340399999999, 99.95732399999997, 262.9791629999999);
    rr_renderer_bezier_curve_to(
        renderer, 122.72195699999997, 239.32431699999992, 117.72839599999998,
        187.56970899999993, 130.74455499999996, 167.4988769999999);
    rr_renderer_bezier_curve_to(renderer, 143.76069899999996, 147.4280459999999,
                                172.31978099999998, 156.8902649999999,
                                178.05427799999995, 142.5541439999999);
    rr_renderer_bezier_curve_to(renderer, 183.78877499999996, 128.2180229999999,
                                177.91081486999997, 89.5101679999999,
                                165.15150699999995, 81.4821989999999);
    rr_renderer_bezier_curve_to(renderer, 152.39219899999995, 73.4542449999999,
                                118.70190699999995, 85.9277709999999,
                                101.49843099999995, 94.38637399999989);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -18.885530000000003, 32.922650000000004);
    rr_renderer_line_to(renderer, 0.7158039999999986, 24.466519000000005);
    rr_renderer_line_to(renderer, 22.767654, 24.704876540000004);
    rr_renderer_line_to(renderer, 31.823776000000002, 3.2935305400000026);
    rr_renderer_line_to(renderer, 18.779114, -19.592814459999996);
    rr_renderer_line_to(renderer, -7.569191, -25.109301459999998);
    rr_renderer_line_to(renderer, -27.607651, -8.95814046);
    rr_renderer_line_to(renderer, -31.2539523, 14.591397539999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -5.804689999999994, -3.947029999999998);
    rr_renderer_bezier_curve_to(renderer, -1.4945549999999939, -9.3878946,
                                5.963437000000006, -11.200730299999998,
                                12.290159000000006, -8.3454065);
    rr_renderer_line_to(renderer, 9.176282700000007, -1.4457940999999996);
    rr_renderer_bezier_curve_to(
        renderer, 6.012922100000007, -2.8734521999999996, 2.2839182000000067,
        -1.9670343299999997, 0.12885870000000743, 0.7534018000000002);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 12.290159999999986, -8.345460000000003);
    rr_renderer_bezier_curve_to(
        renderer, 18.270659299999984, -5.646386200000003, 21.356764999999985,
        1.0391989999999964, 19.531385999999987, 7.341520999999997);
    rr_renderer_line_to(renderer, 12.229032999999987, 5.226500199999997);
    rr_renderer_bezier_curve_to(renderer, 13.001966959999987, 2.557829499999997,
                                11.695188999999987, -0.2731031000000037,
                                9.162809899999987, -1.4160018000000036);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -9.202354, 11.902899999999988);
    rr_renderer_bezier_curve_to(renderer, -10.5199581, 6.347662999999988,
                                -9.25363879, 0.49454399999998877,
                                -5.757590799999999, -4.019257000000012);
    rr_renderer_line_to(renderer, 0.2554632000000012, 0.6379924999999877);
    rr_renderer_bezier_curve_to(
        renderer, -1.8325799999999988, 3.3339153999999875, -2.5889047999999986,
        6.829734499999987, -1.801955599999999, 10.147666499999989);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 0.5512200000000007, 26.71593999999999);
    rr_renderer_bezier_curve_to(
        renderer, -4.3258399999999995, 22.94169379999999, -7.770961999999999,
        17.61799399999999, -9.215992, 11.62278499999999);
    rr_renderer_line_to(renderer, -1.8289530000000003, 9.84228269999999);
    rr_renderer_bezier_curve_to(
        renderer, -0.7887919000000003, 14.15774269999999, 1.6910817999999996,
        17.98986569999999, 5.2016865999999995, 20.70663169999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 14.262499999999989, 9.844069999999988);
    rr_renderer_bezier_curve_to(renderer, 12.36662599999999, 8.988448659999987,
                                11.523333699999988, 6.757903599999988,
                                12.378970299999988, 4.862029599999988);
    rr_renderer_bezier_curve_to(renderer, 12.789858969999989, 3.951613949999988,
                                13.545580999999988, 3.241683499999988,
                                14.479891899999988, 2.888457799999988);
    rr_renderer_bezier_curve_to(renderer, 15.414202799999988, 2.535232099999988,
                                16.45057979999999, 2.567626499999988,
                                17.361010699999987, 2.9785151699999877);
    rr_renderer_bezier_curve_to(
        renderer, 19.256884699999986, 3.8341365099999876, 20.100161699999987,
        6.064681569999988, 19.244525099999986, 7.960540169999987);
    rr_renderer_bezier_curve_to(renderer, 18.388903759999987, 9.856414169999987,
                                16.158373999999988, 10.699706469999988,
                                14.262500099999986, 9.844069869999988);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 21.71642, 28.04549);
    rr_renderer_bezier_curve_to(renderer, 15.012456, 31.9854314,
                                6.578800999999999, 31.4134404,
                                0.4682050000000011, 26.6043737);
    rr_renderer_line_to(renderer, 5.172001400000001, 20.627551699999998);
    rr_renderer_bezier_curve_to(renderer, 8.821613800000002, 23.499805099999996,
                                13.8586924, 23.841434099999997,
                                17.862705400000003, 21.488269499999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 34.47910999999999, -0.34553499999999815);
    rr_renderer_bezier_curve_to(renderer, 36.61395199999999, 10.875092000000002,
                                31.48992849999999, 22.230637,
                                21.664137999999994, 28.054199);
    rr_renderer_line_to(renderer, 17.789900999999993, 21.517395);
    rr_renderer_bezier_curve_to(renderer, 24.862700699999994, 17.325485,
                                28.551069999999996, 9.151535,
                                27.014372999999992, 1.074707);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -22.3681, 34.64183);
    rr_renderer_bezier_curve_to(renderer, -34.517995, 24.831924,
                                -38.794988000000004, 8.21408, -32.89063,
                                -6.2425);
    rr_renderer_bezier_curve_to(renderer, -26.986272, -20.699081,
                                -12.298597000000001, -29.571388,
                                3.2449669999999955, -28.070724);
    rr_renderer_bezier_curve_to(
        renderer, 18.788515999999994, -26.570067899999998, 31.507570999999995,
        -15.051772999999999, 34.537234, 0.2673500000000004);
    rr_renderer_line_to(renderer, 27.067659999999997, 1.7445991000000005);
    rr_renderer_bezier_curve_to(renderer, 24.690355999999998, -10.2760079,
                                14.709962999999997, -19.314184899999997,
                                2.5132469999999962, -20.491720899999997);
    rr_renderer_bezier_curve_to(
        renderer, -9.683477000000003, -21.669256899999997, -21.208601000000005,
        -14.707342899999997, -25.841634000000003, -3.363546899999996);
    rr_renderer_bezier_curve_to(
        renderer, -30.474660000000004, 7.980241100000004, -27.118596300000004,
        21.019929100000006, -17.584813000000004, 28.717576100000002);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 3.9428299999999865, 24.263049999999993);
    rr_renderer_bezier_curve_to(
        renderer, -0.10217600000001337, 33.18422299999999, -9.781062000000013,
        38.120211999999995, -19.377437000000015, 36.15578099999999);
    rr_renderer_line_to(renderer, -17.818980600000014, 28.542606599999992);
    rr_renderer_bezier_curve_to(
        renderer, -11.776339900000014, 29.77957559999999, -5.681735600000014,
        26.671482299999994, -3.134677600000014, 21.054004899999992);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -21.013664000000006, 35.78172000000001);
    rr_renderer_bezier_curve_to(
        renderer, -22.909538000000005, 34.92608340000001, -23.752815000000005,
        32.695553600000004, -22.897186000000005, 30.799679600000008);
    rr_renderer_bezier_curve_to(
        renderer, -22.486297330000006, 29.889248700000007, -21.730575300000005,
        29.17933350000001, -20.796264400000005, 28.82610780000001);
    rr_renderer_bezier_curve_to(
        renderer, -19.861945860000006, 28.47288210000001, -18.825584200000005,
        28.50526124000001, -17.915153300000007, 28.91614991400001);
    rr_renderer_bezier_curve_to(
        renderer, -16.019279300000008, 29.77178651400001, -15.175994700000007,
        32.00231631400001, -16.031623600000007, 33.89819031400001);
    rr_renderer_bezier_curve_to(
        renderer, -16.887260200000007, 35.79406431400001, -19.117790000000007,
        36.63734131400001, -21.013664000000006, 35.78172001400001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -73.30052599999999, -103.278215);
    rr_renderer_bezier_curve_to(renderer, -73.30052599999999, -114.367397,
                                -64.31096699999999, -123.356955,
                                -53.221785999999994, -123.356955);
    rr_renderer_bezier_curve_to(renderer, -47.896567999999995, -123.356955,
                                -42.78946599999999, -121.2415223,
                                -39.023970999999996, -117.476028);
    rr_renderer_bezier_curve_to(renderer, -35.2584757, -113.7105337, -33.143043,
                                -108.603427, -33.143043, -103.278215);
    rr_renderer_bezier_curve_to(renderer, -33.143043, -92.18903300000001,
                                -42.132605999999996, -83.19947400000001,
                                -53.221785999999994, -83.19947400000001);
    rr_renderer_bezier_curve_to(renderer, -64.310966, -83.19947400000001,
                                -73.30052599999999, -92.18903300000001,
                                -73.30052599999999, -103.27821500000002);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -65.22178600000001, -103.278215);
    rr_renderer_bezier_curve_to(renderer, -65.22178600000001, -109.9056316,
                                -59.849204500000006, -115.278215,
                                -53.22178600000001, -115.278215);
    rr_renderer_bezier_curve_to(renderer, -50.039184000000006, -115.278215,
                                -46.98693800000001, -114.0139328,
                                -44.736503000000006, -111.763496);
    rr_renderer_bezier_curve_to(renderer, -42.486068100000004, -109.5130592,
                                -41.22178600000001, -106.460813,
                                -41.22178600000001, -103.278215);
    rr_renderer_bezier_curve_to(renderer, -41.22178600000001, -96.6507984,
                                -46.59436750000001, -91.27821300000001,
                                -53.22178600000001, -91.27821300000001);
    rr_renderer_bezier_curve_to(renderer, -59.849204500000006,
                                -91.27821300000001, -65.22178600000001,
                                -96.6507983, -65.22178600000001, -103.278215);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 38.90944999999999, 78.26247000000001);
    rr_renderer_bezier_curve_to(renderer, 38.90944999999999, 67.173282,
                                47.89899799999999, 58.183735000000006,
                                58.988184999999994, 58.183735000000006);
    rr_renderer_bezier_curve_to(renderer, 64.31339559999999, 58.183735000000006,
                                69.420497, 60.299167700000005,
                                73.18599999999999, 64.0646554);
    rr_renderer_bezier_curve_to(renderer, 76.95148769999999, 67.8301584,
                                79.06692039999999, 72.9372594,
                                79.06692039999999, 78.26247040000001);
    rr_renderer_bezier_curve_to(renderer, 79.06692039999999, 89.35165840000002,
                                70.07737239999999, 98.3412054,
                                58.988185399999985, 98.3412054);
    rr_renderer_bezier_curve_to(renderer, 47.898997399999985, 98.3412054,
                                38.90945039999998, 89.35165740000001,
                                38.90945039999998, 78.26247040000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 46.98819, 78.26247000000001);
    rr_renderer_bezier_curve_to(renderer, 46.98819, 71.63505900000001,
                                52.360779, 66.26247000000001, 58.98819,
                                66.26247000000001);
    rr_renderer_bezier_curve_to(renderer, 62.170792000000006, 66.26247000000001,
                                65.223038, 67.5267522, 67.473465,
                                69.77719470000001);
    rr_renderer_bezier_curve_to(renderer, 69.72390750000001, 72.02762190000001,
                                70.9881897, 75.079868, 70.9881897,
                                78.26246970000001);
    rr_renderer_bezier_curve_to(renderer, 70.9881897, 84.8898807, 65.6156007,
                                90.26246970000001, 58.98818970000001,
                                90.26246970000001);
    rr_renderer_bezier_curve_to(renderer, 52.360778700000004, 90.26246970000001,
                                46.98818970000001, 84.8898807,
                                46.98818970000001, 78.26246970000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 23.841199999999986, -93.47638);
    rr_renderer_bezier_curve_to(renderer, 23.841199999999986, -104.56556,
                                32.83076299999999, -113.55512,
                                43.919949999999986, -113.55512);
    rr_renderer_bezier_curve_to(renderer, 49.245160599999984, -113.55512,
                                54.35226199999998, -111.4396873,
                                58.117764999999984, -107.674192);
    rr_renderer_bezier_curve_to(
        renderer, 61.883252699999986, -103.90869860000001, 63.998685399999985,
        -98.80159300000001, 63.998685399999985, -93.476381);
    rr_renderer_bezier_curve_to(renderer, 63.998685399999985, -82.387197,
                                55.00912239999998, -73.397638,
                                43.91995039999998, -73.397638);
    rr_renderer_bezier_curve_to(renderer, 32.83076239999998, -73.397638,
                                23.841200399999984, -82.387197,
                                23.841200399999984, -93.476381);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 31.91995, -93.47638);
    rr_renderer_bezier_curve_to(renderer, 31.91995, -100.10379470000001,
                                37.292524, -105.47637800000001, 43.91995,
                                -105.47637800000001);
    rr_renderer_bezier_curve_to(renderer, 47.1025367, -105.47637800000001,
                                50.154783, -104.21209580000001, 52.405225,
                                -101.96165900000001);
    rr_renderer_bezier_curve_to(renderer, 54.6556675, -99.71122410000001,
                                55.919949700000004, -96.65897600000001,
                                55.919949700000004, -93.47638);
    rr_renderer_bezier_curve_to(renderer, 55.919949700000004, -86.8489615,
                                50.547360700000006, -81.47638,
                                43.919949700000004, -81.47638);
    rr_renderer_bezier_curve_to(renderer, 37.292523700000004, -81.47638,
                                31.919949700000004, -86.8489615,
                                31.919949700000004, -93.47638);
    rr_renderer_fill(renderer);
}
void rr_oc_tile_3_draw(struct rr_renderer *renderer)
{
    rr_renderer_set_fill(renderer, 0xff165d76);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -128, -128);
    rr_renderer_line_to(renderer, 128, -128);
    rr_renderer_line_to(renderer, 128, 128);
    rr_renderer_line_to(renderer, -128, 128);
    rr_renderer_line_to(renderer, -128, -128);
    rr_renderer_fill(renderer);
    rr_renderer_clip(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.4393, -146.927248);
    rr_renderer_bezier_curve_to(renderer, 72.23582400000001, -138.468635,
                                60.737213000000004, -127.286598,
                                49.871520000000004, -109.07974399999999);
    rr_renderer_bezier_curve_to(renderer, 39.00582800000001, -90.872892,
                                43.568968700000006, -56.17969399999999,
                                24.245131000000004, -37.686128);
    rr_renderer_bezier_curve_to(
        renderer, 4.9212780000000045, -19.192559999999997, -42.703849000000005,
        -16.898621999999996, -66.071535, 1.8816590000000062);
    rr_renderer_bezier_curve_to(renderer, -89.439218, 20.661932000000007,
                                -98.75773799999999, 57.79230400000001,
                                -115.960981, 74.99554900000001);
    rr_renderer_bezier_curve_to(renderer, -133.164221, 92.19878100000001,
                                -163.843435, 90.765218, -169.290979,
                                105.10109400000002);
    rr_renderer_bezier_curve_to(renderer, -174.738523, 119.43697000000002,
                                -166.279676, 154.55966600000002, -148.646251,
                                161.01080800000003);
    rr_renderer_bezier_curve_to(renderer, -131.012824, 167.46198000000004,
                                -85.28106100000001, 159.29077630000003,
                                -63.49041100000001, 143.80804900000004);
    rr_renderer_bezier_curve_to(
        renderer, -41.69976900000001, 128.32532200000003, -43.13379800000001,
        88.47151600000004, -17.902361000000006, 68.11442900000004);
    rr_renderer_bezier_curve_to(renderer, 7.3290769999999945, 47.75734300000005,
                                65.133569, 45.320407000000046, 87.898199,
                                21.66554600000004);
    rr_renderer_bezier_curve_to(
        renderer, 110.66283200000001, -1.9893239999999572, 105.66927100000001,
        -53.743913999999954, 118.68543, -73.81475399999997);
    rr_renderer_bezier_curve_to(renderer, 131.701574, -93.88558899999997,
                                160.26065599999998, -84.42336599999996,
                                165.995153, -98.75947699999996);
    rr_renderer_bezier_curve_to(renderer, 171.72965, -113.09558799999996,
                                165.85168987, -151.80346399999996, 153.092382,
                                -159.83142199999998);
    rr_renderer_bezier_curve_to(
        renderer, 140.33307399999998, -167.85938399999998, 106.64278199999998,
        -155.38585599999996, 89.43930599999999, -146.92724099999998);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 89.43959000000001, -403.75314);
    rr_renderer_bezier_curve_to(renderer, 72.23611400000001, -395.294522,
                                60.73750300000001, -384.112484,
                                49.87181000000001, -365.90563599999996);
    rr_renderer_bezier_curve_to(renderer, 39.006118000000015, -347.698788,
                                43.56925870000001, -313.00559599999997,
                                24.24540600000001, -294.51201999999995);
    rr_renderer_bezier_curve_to(
        renderer, 4.921569000000009, -276.01845999999995, -42.703568999999995,
        -273.72452999999996, -66.07125399999998, -254.94424799999996);
    rr_renderer_bezier_curve_to(
        renderer, -89.43894099999999, -236.16396699999996, -98.75745699999999,
        -199.03359599999996, -115.96069999999997, -181.83035799999996);
    rr_renderer_bezier_curve_to(
        renderer, -133.16394099999997, -164.62711499999995, -165.27671999999998,
        -167.86144399999995, -169.29069999999996, -151.72480199999995);
    rr_renderer_bezier_curve_to(
        renderer, -173.30467699999997, -135.58816199999995, -157.67800799999995,
        -91.46166799999995, -140.04458299999996, -85.01050799999996);
    rr_renderer_bezier_curve_to(
        renderer, -122.41115599999996, -78.55935139999995, -83.84721799999997,
        -95.73436599999997, -63.49014299999996, -113.01785699999996);
    rr_renderer_bezier_curve_to(
        renderer, -43.13306399999996, -130.30134999999996, -43.133529999999965,
        -168.35438199999996, -17.902092999999958, -188.71145699999997);
    rr_renderer_bezier_curve_to(
        renderer, 7.3293370000000415, -209.06853899999996, 65.13384100000005,
        -211.50548199999997, 87.89847700000004, -235.16035199999996);
    rr_renderer_bezier_curve_to(renderer, 110.66309500000004, -258.815206,
                                105.66953400000004, -310.56981199999996,
                                118.68569300000004, -330.64064199999996);
    rr_renderer_bezier_curve_to(
        renderer, 131.70186700000005, -350.71147299999996, 160.26094900000004,
        -341.24925399999995, 165.99541600000003, -355.585359);
    rr_renderer_bezier_curve_to(renderer, 171.72991300000004, -369.92148,
                                165.85195287000005, -408.629349,
                                153.09264500000003, -416.65730399999995);
    rr_renderer_bezier_curve_to(renderer, 140.33333700000003, -424.685258,
                                106.64306000000003, -412.2117474,
                                89.43958500000002, -403.75312899999994);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff10485b);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 101.49843999999999, 94.38637);
    rr_renderer_bezier_curve_to(renderer, 84.294964, 102.844988,
                                72.79635299999998, 114.027026,
                                61.93065999999999, 132.23389);
    rr_renderer_bezier_curve_to(renderer, 51.06496799999999, 150.440738,
                                55.62810869999999, 185.133914,
                                36.304270999999986, 203.62750599999998);
    rr_renderer_bezier_curve_to(
        renderer, 16.980417999999986, 222.12106599999998, -30.64470900000002,
        224.41498199999998, -54.01239500000001, 243.19528599999998);
    rr_renderer_bezier_curve_to(renderer, -77.38008200000002, 261.975559,
                                -86.69860200000002, 299.105931,
                                -103.90184100000002, 316.309176);
    rr_renderer_bezier_curve_to(renderer, -121.10508200000001, 333.512393,
                                -153.21785800000004, 330.278079,
                                -157.23184100000003, 346.41470599999997);
    rr_renderer_bezier_curve_to(renderer, -161.24582400000003, 362.551364,
                                -145.61915300000004, 406.67785899999996,
                                -127.98572600000003, 413.12903099999994);
    rr_renderer_bezier_curve_to(
        renderer, -110.35229900000003, 419.58014199999997, -71.78836100000004,
        402.4051539999999, -51.43128600000003, 385.12164599999994);
    rr_renderer_bezier_curve_to(
        renderer, -31.07420700000003, 367.83816799999994, -31.07467300000003,
        329.7851289999999, -5.843236000000026, 309.42804599999994);
    rr_renderer_bezier_curve_to(
        renderer, 19.388201999999975, 289.07098999999994, 77.19269399999996,
        286.6340399999999, 99.95732399999997, 262.9791629999999);
    rr_renderer_bezier_curve_to(
        renderer, 122.72195699999997, 239.32431699999992, 117.72839599999998,
        187.56970899999993, 130.74455499999996, 167.4988769999999);
    rr_renderer_bezier_curve_to(renderer, 143.76069899999996, 147.4280459999999,
                                172.31978099999998, 156.8902649999999,
                                178.05427799999995, 142.5541439999999);
    rr_renderer_bezier_curve_to(renderer, 183.78877499999996, 128.2180229999999,
                                177.91081486999997, 89.5101679999999,
                                165.15150699999995, 81.4821989999999);
    rr_renderer_bezier_curve_to(renderer, 152.39219899999995, 73.4542449999999,
                                118.70190699999995, 85.9277709999999,
                                101.49843099999995, 94.38637399999989);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -67.008892, -21.03797);
    rr_renderer_line_to(renderer, -47.40754700000001, -29.494109);
    rr_renderer_line_to(renderer, -25.35571300000001, -29.25574383);
    rr_renderer_line_to(renderer, -16.29957600000001, -50.66709783);
    rr_renderer_line_to(renderer, -29.34424600000001, -73.55343883);
    rr_renderer_line_to(renderer, -55.69255100000001, -79.06992983);
    rr_renderer_line_to(renderer, -75.73101100000001, -62.918768830000005);
    rr_renderer_line_to(renderer, -79.37731230000001, -39.36923883);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -53.92805, -57.90766000000001);
    rr_renderer_bezier_curve_to(
        renderer, -49.617914999999996, -63.348524600000005, -42.159923,
        -65.16136030000001, -35.833201, -62.306036500000005);
    rr_renderer_line_to(renderer, -38.947085, -55.406416500000006);
    rr_renderer_bezier_curve_to(renderer, -42.1104456, -56.834082200000005,
                                -45.839442, -55.92766436000001, -47.994509,
                                -53.207228300000004);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -35.833206000000004, -62.30609);
    rr_renderer_bezier_curve_to(renderer, -29.852706700000006, -59.6070162,
                                -26.766586000000004, -52.921439,
                                -28.591972000000005, -46.619108999999995);
    rr_renderer_line_to(renderer, -35.89432500000001, -48.734137399999994);
    rr_renderer_bezier_curve_to(
        renderer, -35.121383400000006, -51.40279279999999, -36.42816900000001,
        -54.233732999999994, -38.96055580000001, -55.376631399999994);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -57.325714000000005, -42.05773000000001);
    rr_renderer_bezier_curve_to(renderer, -58.6433181, -47.612967000000005,
                                -57.37699879, -53.466086000000004,
                                -53.88095080000001, -57.979887000000005);
    rr_renderer_line_to(renderer, -47.86789680000001, -53.32264500000001);
    rr_renderer_bezier_curve_to(
        renderer, -49.95594000000001, -50.62672980000001, -50.712264800000014,
        -47.13089540000001, -49.92531560000001, -43.812971000000005);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -47.57213, -27.244690000000006);
    rr_renderer_bezier_curve_to(renderer, -52.449197600000005,
                                -31.018928600000006, -55.894319,
                                -36.342636000000006, -57.33935, -42.337845);
    rr_renderer_line_to(renderer, -49.952311, -44.1183473);
    rr_renderer_bezier_curve_to(renderer, -48.9121499, -39.8028793, -46.4322838,
                                -35.97077230000001, -42.9216714,
                                -33.253990300000005);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -33.860870000000006, -44.116553999999994);
    rr_renderer_bezier_curve_to(
        renderer, -35.756744000000005, -44.97218296999999, -36.600021000000005,
        -47.2027204, -35.744392000000005, -49.098594399999996);
    rr_renderer_bezier_curve_to(renderer, -35.333503330000006, -50.0090253,
                                -34.577781300000005, -50.718940499999995,
                                -33.64346270000001, -51.0721662);
    rr_renderer_bezier_curve_to(renderer, -32.70915180000001, -51.42539954,
                                -31.672790100000007, -51.39300513,
                                -30.762359200000006, -50.98211646);
    rr_renderer_bezier_curve_to(renderer, -28.866485200000007, -50.12648749,
                                -28.023200600000006, -47.89595006,
                                -28.878829500000005, -46.00008346);
    rr_renderer_bezier_curve_to(renderer, -29.734458470000007, -44.10420946,
                                -31.964995900000005, -43.260924859999996,
                                -33.860869900000004, -44.11655376);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -26.406943999999996, -25.915145999999993);
    rr_renderer_bezier_curve_to(
        renderer, -33.110915999999996, -21.975196999999994, -41.544563,
        -22.54718799999999, -47.655151, -27.356254699999994);
    rr_renderer_line_to(renderer, -42.951354599999995, -33.333084199999995);
    rr_renderer_bezier_curve_to(
        renderer, -39.30174219999999, -30.460823199999993, -34.26466359999999,
        -30.119194199999995, -30.260650599999995, -32.47236639999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -13.644239999999996, -54.306169999999995);
    rr_renderer_bezier_curve_to(
        renderer, -11.509405699999997, -43.085542999999994, -16.633429099999997,
        -31.729997999999995, -26.459211999999994, -25.906435999999996);
    rr_renderer_line_to(renderer, -30.333456699999992, -32.443232599999995);
    rr_renderer_bezier_curve_to(
        renderer, -23.260664699999992, -36.635149999999996, -19.57228769999999,
        -44.809100599999994, -21.108984699999993, -52.8859286);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -70.49146300000001, -19.318793999999997);
    rr_renderer_bezier_curve_to(renderer, -82.64136200000002,
                                -29.128699999999995, -86.91834700000001,
                                -45.746551, -81.01399300000001, -60.203134);
    rr_renderer_bezier_curve_to(renderer, -75.10963500000001, -74.659715,
                                -60.42196000000001, -83.532018,
                                -44.87840300000001, -82.031358);
    rr_renderer_bezier_curve_to(renderer, -29.334839000000013, -80.5307019,
                                -16.615784000000012, -69.01240299999999,
                                -13.586136000000014, -53.693284);
    rr_renderer_line_to(renderer, -21.055702300000014, -52.2160349);
    rr_renderer_bezier_curve_to(
        renderer, -23.433006300000013, -64.23663789999999, -33.413399300000016,
        -73.2748149, -45.61011530000002, -74.45235489999999);
    rr_renderer_bezier_curve_to(
        renderer, -57.80683930000002, -75.62989089999999, -69.33196330000001,
        -68.6679729, -73.96499230000002, -57.32418089999999);
    rr_renderer_bezier_curve_to(
        renderer, -78.59802610000003, -45.980392899999984, -75.24195840000002,
        -32.94069689999999, -65.70817530000002, -25.24305789999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -44.180533999999994, -29.697580000000002);
    rr_renderer_bezier_curve_to(
        renderer, -48.225539999999995, -20.776407000000003, -57.904425999999994,
        -15.840425000000002, -67.500801, -17.804849000000004);
    rr_renderer_line_to(renderer, -65.9423446, -25.418023400000003);
    rr_renderer_bezier_curve_to(renderer, -59.8997039, -24.181062000000004,
                                -53.8050996, -27.2891477, -51.2580416,
                                -32.9066327);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -69.137024, -18.178910000000002);
    rr_renderer_bezier_curve_to(renderer, -71.0328942, -19.034538970000003,
                                -71.87617879999999, -21.2650764, -71.020546,
                                -23.160943000000003);
    rr_renderer_bezier_curve_to(renderer, -70.60966114, -24.071373900000005,
                                -69.85393529999999, -24.781289100000002,
                                -68.9196206, -25.1345224);
    rr_renderer_bezier_curve_to(renderer, -67.9853059, -25.4877481, -66.9489404,
                                -25.455361330000002, -66.0385133, -25.04447266);
    rr_renderer_bezier_curve_to(renderer, -64.1426393, -24.18884369,
                                -63.2993547, -21.95830626, -64.1549875,
                                -20.06243226);
    rr_renderer_bezier_curve_to(renderer, -65.01061647, -18.166565860000002,
                                -67.2411501, -17.32328126, -69.1370241,
                                -18.178910260000002);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 47.95146, 25.893200000000007);
    rr_renderer_line_to(renderer, 27.573269999999997, 32.24004750000001);
    rr_renderer_line_to(renderer, 5.672772999999996, 29.68453600000001);
    rr_renderer_line_to(renderer, -5.582682000000004, 50.02111400000001);
    rr_renderer_line_to(renderer, 4.981030999999996, 74.14793000000002);
    rr_renderer_line_to(renderer, 30.598462999999995, 82.40307200000001);
    rr_renderer_line_to(renderer, 52.220304, 68.45122900000001);
    rr_renderer_line_to(renderer, 58.321714, 45.41991800000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 31.069060000000007, 61.176469999999995);
    rr_renderer_bezier_curve_to(renderer, 26.211546600000005, 66.13301299999999,
                                18.605666000000006, 67.151339,
                                12.615370000000006, 63.647173099999996);
    rr_renderer_line_to(renderer, 16.436857400000005, 57.11445809999999);
    rr_renderer_bezier_curve_to(
        renderer, 19.431989800000004, 58.866548599999994, 23.234937800000004,
        58.35737799999999, 25.663694400000004, 55.87910649999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 12.615370000000013, 63.64723000000001);
    rr_renderer_bezier_curve_to(renderer, 6.952894400000013, 60.334821600000005,
                                4.587370000000012, 53.36305000000001,
                                7.064924400000013, 47.28872500000001);
    rr_renderer_line_to(renderer, 14.103101900000013, 50.159406800000006);
    rr_renderer_bezier_curve_to(renderer, 13.053999100000013, 52.73151980000001,
                                14.055662325000013, 55.683652800000004,
                                16.453382700000013, 57.08625620000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 36.11372, 45.774519999999995);
    rr_renderer_bezier_curve_to(renderer, 36.83970267, 51.436491999999994,
                                34.9652367, 57.122938999999995, 31.0146294,
                                61.243331);
    rr_renderer_line_to(renderer, 25.5256614, 55.980543999999995);
    rr_renderer_bezier_curve_to(renderer, 27.8852042, 53.519606499999995,
                                29.0047416, 50.123304999999995, 28.5711479,
                                46.741637);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 27.973420000000004, 30.02081000000001);
    rr_renderer_bezier_curve_to(renderer, 32.425736300000004, 34.28622140000001,
                                35.291398, 39.94164700000001, 36.097825,
                                46.05447000000001);
    rr_renderer_line_to(renderer, 28.5658884, 47.04810710000001);
    rr_renderer_bezier_curve_to(renderer, 27.985413549999997, 42.64797610000001,
                                25.9226389, 38.57708310000001, 22.7177744,
                                35.50675610000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 12.566769999999991, 45.354479999999995);
    rr_renderer_bezier_curve_to(
        renderer, 14.361829199999992, 46.404544099999995, 14.96575679999999,
        48.710970999999994, 13.915707999999992, 50.50603029999999);
    rr_renderer_bezier_curve_to(renderer, 13.411450799999992, 51.36804509999999,
                                12.585400999999992, 51.994433599999994,
                                11.619305999999991, 52.24740909999999);
    rr_renderer_bezier_curve_to(renderer, 10.653195799999992, 52.50038455999999,
                                9.626172499999992, 52.35921024999999,
                                8.764157699999991, 51.85495304999999);
    rr_renderer_bezier_curve_to(renderer, 6.969098499999991, 50.80488894999999,
                                6.365170899999992, 48.49846204999999,
                                7.415234999999991, 46.70341804999999);
    rr_renderer_bezier_curve_to(renderer, 8.465283799999991, 44.90835884999999,
                                10.77171079999999, 44.304416049999986,
                                12.566769999999991, 45.35448004999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 7.069209999999998, 26.47359);
    rr_renderer_bezier_curve_to(renderer, 14.149043999999998, 23.2610503,
                                22.474255, 24.7164794, 28.044231, 30.1404754);
    rr_renderer_line_to(renderer, 22.738979, 35.5885194);
    rr_renderer_bezier_curve_to(renderer, 19.4122425, 32.3489869,
                                14.439922000000001, 31.479724400000002,
                                10.211437, 33.3984407);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -8.605419999999995, 53.360180000000014);
    rr_renderer_bezier_curve_to(
        renderer, -9.548298699999995, 41.979351000000015, -3.259693999999995,
        31.227566000000014, 7.1221040000000055, 26.470425000000013);
    rr_renderer_line_to(renderer, 10.286883700000006, 33.37711750000001);
    rr_renderer_bezier_curve_to(renderer, 2.813861200000006, 36.80140350000001,
                                -1.7128032999999938, 44.54075250000001,
                                -1.034092299999994, 52.73290750000001);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 51.59483, 24.550029999999992);
    rr_renderer_bezier_curve_to(renderer, 62.643750000000004, 35.58118799999999,
                                65.14906, 52.55356999999999, 57.758557,
                                66.30659);
    rr_renderer_bezier_curve_to(renderer, 50.368054, 80.059611,
                                34.831647000000004, 87.336863, 19.534877,
                                84.210551);
    rr_renderer_bezier_curve_to(renderer, 4.238094000000002, 81.0842387,
                                -7.197109999999999, 68.29462699999999,
                                -8.598766999999999, 52.744685);
    rr_renderer_line_to(renderer, -1.0166519999999988, 52.061243839999996);
    rr_renderer_bezier_curve_to(renderer, 0.08320150000000126, 64.26296484,
                                9.056178000000001, 74.29873183999999,
                                21.059245000000004, 76.75187183999999);
    rr_renderer_bezier_curve_to(renderer, 33.062327, 79.20502733999999,
                                45.253428, 73.49471544, 51.05260700000001,
                                62.702997839999995);
    rr_renderer_bezier_curve_to(renderer, 56.85178600000001, 51.91127983999999,
                                54.885935200000006, 38.59339383999999,
                                46.21605900000001, 29.937464839999997);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 24.343349999999987, 32.10307);
    rr_renderer_bezier_curve_to(renderer, 29.303158299999986, 23.658276,
                                39.44559899999999, 19.768185000000003,
                                48.78048399999999, 22.730313000000002);
    rr_renderer_line_to(renderer, 46.43050839999999, 30.136044000000002);
    rr_renderer_bezier_curve_to(renderer, 40.55251769999999, 28.2708401,
                                34.16602739999999, 30.720348800000004,
                                31.042935399999987, 36.037869);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 50.36801, 23.274259999999998);
    rr_renderer_bezier_curve_to(renderer, 52.163053999999995, 24.3243241,
                                52.7669968, 26.630750999999997, 51.7169327,
                                28.4258103);
    rr_renderer_bezier_curve_to(renderer, 51.2126755, 29.2878251, 50.386641,
                                29.9142136, 49.4205307, 30.167189099999998);
    rr_renderer_bezier_curve_to(renderer, 48.4544357, 30.420164559999996,
                                47.4274124, 30.27899025, 46.5653977,
                                29.77473305);
    rr_renderer_bezier_curve_to(renderer, 44.7703385, 28.72468425,
                                44.166395699999995, 26.418257249999996,
                                45.2164597, 24.62319805);
    rr_renderer_bezier_curve_to(renderer, 46.2665238, 22.82813885, 48.5729507,
                                22.22421125, 50.36801, 23.27426005);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -8.883200000000002, -95.37008);
    rr_renderer_bezier_curve_to(renderer, -8.883200000000002, -106.459262,
                                0.10635499999999709, -115.44882,
                                11.195542999999997, -115.44882);
    rr_renderer_bezier_curve_to(renderer, 16.5207536, -115.44882,
                                21.627854999999997, -113.3333873, 25.393358,
                                -109.567893);
    rr_renderer_bezier_curve_to(renderer, 29.1588457, -105.8023996, 31.2742784,
                                -100.695292, 31.2742784, -95.37008);
    rr_renderer_bezier_curve_to(renderer, 31.2742784, -84.280896, 22.2847154,
                                -75.29134, 11.195543399999998, -75.29134);
    rr_renderer_bezier_curve_to(renderer, 0.10635539999999821, -75.29134,
                                -8.883199600000001, -84.280895,
                                -8.883199600000001, -95.37008);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -0.804460000000006, -95.37008);
    rr_renderer_bezier_curve_to(renderer, -0.804460000000006, -101.9974966,
                                4.568113999999994, -107.37008,
                                11.195539999999994, -107.37008);
    rr_renderer_bezier_curve_to(renderer, 14.378141999999993, -107.37008,
                                17.430387999999994, -106.1057978,
                                19.680814999999996, -103.855361);
    rr_renderer_bezier_curve_to(renderer, 21.931257499999994, -101.6049242,
                                23.195539699999994, -98.552678,
                                23.195539699999994, -95.37008);
    rr_renderer_bezier_curve_to(renderer, 23.195539699999994, -88.7426615,
                                17.822950699999993, -83.37008,
                                11.195539699999994, -83.37008);
    rr_renderer_bezier_curve_to(renderer, 4.568113699999994, -83.37008,
                                -0.8044603000000059, -88.7426615,
                                -0.8044603000000059, -95.37008);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -107.497375, 66.13123999999999);
    rr_renderer_bezier_curve_to(renderer, -107.497375, 55.04205199999999,
                                -98.507816, 46.05248999999999,
                                -87.41863500000001, 46.05248999999999);
    rr_renderer_bezier_curve_to(renderer, -82.0934206, 46.05248999999999,
                                -76.986315, 48.16792269999999, -73.22082,
                                51.933425699999994);
    rr_renderer_bezier_curve_to(renderer, -69.4553247, 55.698913399999995,
                                -67.339892, 60.80601469999999, -67.339892,
                                66.13124069999999);
    rr_renderer_bezier_curve_to(renderer, -67.339892, 77.2204127, -76.329451,
                                86.2099757, -87.41863500000001, 86.2099757);
    rr_renderer_bezier_curve_to(renderer, -98.50781500000001, 86.2099757,
                                -107.497375, 77.2204127, -107.497375,
                                66.1312407);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, -99.418634, 66.13123999999999);
    rr_renderer_bezier_curve_to(renderer, -99.418634, 59.50381399999999,
                                -94.0460506, 54.13123999999999,
                                -87.41863599999999, 54.13123999999999);
    rr_renderer_bezier_curve_to(renderer, -84.236038, 54.13123999999999,
                                -81.183792, 55.39552219999999, -78.933353,
                                57.64594949999999);
    rr_renderer_bezier_curve_to(renderer, -76.6829181, 59.89639199999999,
                                -75.41863599999999, 62.9486381,
                                -75.41863599999999, 66.13124049999999);
    rr_renderer_bezier_curve_to(renderer, -75.41863599999999, 72.75865149999998,
                                -80.79121749999999, 78.13124049999999,
                                -87.41863599999999, 78.13124049999999);
    rr_renderer_bezier_curve_to(renderer, -94.0460507, 78.13124049999999,
                                -99.418634, 72.75865149999998, -99.418634,
                                66.13124049999999);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff567a87);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 77.22703999999999, -40.35302);
    rr_renderer_bezier_curve_to(renderer, 77.22703999999999, -51.4422,
                                86.21660299999999, -60.431755,
                                97.30577499999998, -60.431755);
    rr_renderer_bezier_curve_to(renderer, 102.63098559999999, -60.431755,
                                107.73810199999998, -58.3163223,
                                111.50358999999999, -54.5508346);
    rr_renderer_bezier_curve_to(renderer, 115.26909299999998,
                                -50.785339300000004, 117.38452569999998,
                                -45.6782306, 117.38452569999998, -40.3530196);
    rr_renderer_bezier_curve_to(
        renderer, 117.38452569999998, -29.263839600000004, 108.39496269999998,
        -20.274276600000004, 97.30577569999998, -20.274276600000004);
    rr_renderer_bezier_curve_to(
        renderer, 86.21660369999998, -20.274276600000004, 77.22704069999998,
        -29.263839600000004, 77.22704069999998, -40.3530196);
    rr_renderer_fill(renderer);
    rr_renderer_set_fill(renderer, 0xff65909f);
    rr_renderer_begin_path(renderer);
    rr_renderer_move_to(renderer, 85.30577, -40.35302);
    rr_renderer_bezier_curve_to(renderer, 85.30577, -46.9804385, 90.678359,
                                -52.35302, 97.30577, -52.35302);
    rr_renderer_bezier_curve_to(renderer, 100.488372, -52.35302, 103.540618,
                                -51.088737800000004, 105.791061, -48.838303);
    rr_renderer_bezier_curve_to(renderer, 108.0414882, -46.587860500000005,
                                109.3057705, -43.5356144, 109.3057705,
                                -40.35302);
    rr_renderer_bezier_curve_to(renderer, 109.3057705, -33.7256015, 103.9331965,
                                -28.35302, 97.3057705, -28.35302);
    rr_renderer_bezier_curve_to(renderer, 90.6783595, -28.35302, 85.3057705,
                                -33.7256015, 85.3057705, -40.35302);
    rr_renderer_fill(renderer);
}