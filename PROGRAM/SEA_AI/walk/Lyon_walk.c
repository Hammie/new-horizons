int Lyon_walk_count;
float Lyon_walk_verts[96];
int Lyon_walk_types[32];
int Lyon_walk_graph[42];

void Lyon_walk_init()
{
        Lyon_walk_count = 32;

        Lyon_walk_verts[0] = 0.259663;
        Lyon_walk_verts[1] = 3.717409;
        Lyon_walk_verts[2] = -9.833102;
        Lyon_walk_verts[3] = 1.381927;
        Lyon_walk_verts[4] = 3.654905;
        Lyon_walk_verts[5] = -8.187766;
        Lyon_walk_verts[6] = -1.535354;
        Lyon_walk_verts[7] = 3.579907;
        Lyon_walk_verts[8] = -8.371343;
        Lyon_walk_verts[9] = 1.639669;
        Lyon_walk_verts[10] = 3.382405;
        Lyon_walk_verts[11] = -6.744547;
        Lyon_walk_verts[12] = 1.77075;
        Lyon_walk_verts[13] = 1.787397;
        Lyon_walk_verts[14] = -5.514953;
        Lyon_walk_verts[15] = 0.721501;
        Lyon_walk_verts[16] = 1.734893;
        Lyon_walk_verts[17] = -4.317814;
        Lyon_walk_verts[18] = -0.648658;
        Lyon_walk_verts[19] = 1.7874;
        Lyon_walk_verts[20] = -4.281189;
        Lyon_walk_verts[21] = 0.723755;
        Lyon_walk_verts[22] = 1.8299;
        Lyon_walk_verts[23] = -1.640434;
        Lyon_walk_verts[24] = -0.802183;
        Lyon_walk_verts[25] = 1.767401;
        Lyon_walk_verts[26] = -1.634429;
        Lyon_walk_verts[27] = 0.814778;
        Lyon_walk_verts[28] = 1.789895;
        Lyon_walk_verts[29] = 0.229753;
        Lyon_walk_verts[30] = -0.803464;
        Lyon_walk_verts[31] = 1.669895;
        Lyon_walk_verts[32] = 0.221137;
        Lyon_walk_verts[33] = 2.068239;
        Lyon_walk_verts[34] = 1.554892;
        Lyon_walk_verts[35] = 1.535723;
        Lyon_walk_verts[36] = -2.298184;
        Lyon_walk_verts[37] = 1.509893;
        Lyon_walk_verts[38] = 1.432718;
        Lyon_walk_verts[39] = -0.84279;
        Lyon_walk_verts[40] = 1.624901;
        Lyon_walk_verts[41] = 4.549099;
        Lyon_walk_verts[42] = 0.827072;
        Lyon_walk_verts[43] = 1.567402;
        Lyon_walk_verts[44] = 4.558108;
        Lyon_walk_verts[45] = -2.268143;
        Lyon_walk_verts[46] = 1.624898;
        Lyon_walk_verts[47] = 6.360182;
        Lyon_walk_verts[48] = 2.279601;
        Lyon_walk_verts[49] = 1.672399;
        Lyon_walk_verts[50] = 6.307778;
        Lyon_walk_verts[51] = -2.04858;
        Lyon_walk_verts[52] = 2.557395;
        Lyon_walk_verts[53] = 7.172665;
        Lyon_walk_verts[54] = 1.98475;
        Lyon_walk_verts[55] = 2.574899;
        Lyon_walk_verts[56] = 7.290108;
        Lyon_walk_verts[57] = -0.557816;
        Lyon_walk_verts[58] = 2.724904;
        Lyon_walk_verts[59] = 8.369704;
        Lyon_walk_verts[60] = 1.278092;
        Lyon_walk_verts[61] = 1.742405;
        Lyon_walk_verts[62] = -4.321445;
        Lyon_walk_verts[63] = 1.338025;
        Lyon_walk_verts[64] = 1.767403;
        Lyon_walk_verts[65] = 0.150719;
        Lyon_walk_verts[66] = 1.37965;
        Lyon_walk_verts[67] = 1.697402;
        Lyon_walk_verts[68] = 4.554066;
        Lyon_walk_verts[69] = -1.180614;
        Lyon_walk_verts[70] = 1.814892;
        Lyon_walk_verts[71] = -4.312483;
        Lyon_walk_verts[72] = -1.366061;
        Lyon_walk_verts[73] = 1.7374;
        Lyon_walk_verts[74] = 0.095363;
        Lyon_walk_verts[75] = -1.301162;
        Lyon_walk_verts[76] = 1.792397;
        Lyon_walk_verts[77] = 4.609543;
        Lyon_walk_verts[78] = 3.554754;
        Lyon_walk_verts[79] = 2.034903;
        Lyon_walk_verts[80] = 1.696605;
        Lyon_walk_verts[81] = 3.537681;
        Lyon_walk_verts[82] = 1.994896;
        Lyon_walk_verts[83] = 3.210323;
        Lyon_walk_verts[84] = 0.782934;
        Lyon_walk_verts[85] = 17.60993;
        Lyon_walk_verts[86] = 0.870846;
        Lyon_walk_verts[87] = -0.836041;
        Lyon_walk_verts[88] = 17.617416;
        Lyon_walk_verts[89] = 0.876768;
        Lyon_walk_verts[90] = -3.573151;
        Lyon_walk_verts[91] = 2.019863;
        Lyon_walk_verts[92] = 1.714795;
        Lyon_walk_verts[93] = -3.619368;
        Lyon_walk_verts[94] = 2.094865;
        Lyon_walk_verts[95] = 3.438465;

        Lyon_walk_types[0] = 0;
        Lyon_walk_types[1] = 0;
        Lyon_walk_types[2] = 0;
        Lyon_walk_types[3] = 0;
        Lyon_walk_types[4] = 0;
        Lyon_walk_types[5] = 0;
        Lyon_walk_types[6] = 0;
        Lyon_walk_types[7] = 0;
        Lyon_walk_types[8] = 0;
        Lyon_walk_types[9] = 0;
        Lyon_walk_types[10] = 0;
        Lyon_walk_types[11] = 0;
        Lyon_walk_types[12] = 0;
        Lyon_walk_types[13] = 0;
        Lyon_walk_types[14] = 0;
        Lyon_walk_types[15] = 0;
        Lyon_walk_types[16] = 0;
        Lyon_walk_types[17] = 0;
        Lyon_walk_types[18] = 0;
        Lyon_walk_types[19] = 0;
        Lyon_walk_types[20] = 2;
        Lyon_walk_types[21] = 2;
        Lyon_walk_types[22] = 2;
        Lyon_walk_types[23] = 1;
        Lyon_walk_types[24] = 0;
        Lyon_walk_types[25] = 0;
        Lyon_walk_types[26] = 5;
        Lyon_walk_types[27] = 5;
        Lyon_walk_types[28] = 6;
        Lyon_walk_types[29] = 6;
        Lyon_walk_types[30] = 5;
        Lyon_walk_types[31] = 5;

        Lyon_walk_graph[0] = (10)*256 + (8);
        Lyon_walk_graph[1] = (0)*256 + (2);
        Lyon_walk_graph[2] = (3)*256 + (2);
        Lyon_walk_graph[3] = (6)*256 + (23);
        Lyon_walk_graph[4] = (1)*256 + (0);
        Lyon_walk_graph[5] = (7)*256 + (9);
        Lyon_walk_graph[6] = (6)*256 + (5);
        Lyon_walk_graph[7] = (7)*256 + (5);
        Lyon_walk_graph[8] = (20)*256 + (5);
        Lyon_walk_graph[9] = (4)*256 + (5);
        Lyon_walk_graph[10] = (3)*256 + (4);
        Lyon_walk_graph[11] = (6)*256 + (5);
        Lyon_walk_graph[12] = (1)*256 + (3);
        Lyon_walk_graph[13] = (8)*256 + (6);
        Lyon_walk_graph[14] = (11)*256 + (9);
        Lyon_walk_graph[15] = (21)*256 + (9);
        Lyon_walk_graph[16] = (10)*256 + (9);
        Lyon_walk_graph[17] = (10)*256 + (24);
        Lyon_walk_graph[18] = (7)*256 + (8);
        Lyon_walk_graph[19] = (12)*256 + (10);
        Lyon_walk_graph[20] = (14)*256 + (11);
        Lyon_walk_graph[21] = (13)*256 + (12);
        Lyon_walk_graph[22] = (15)*256 + (13);
        Lyon_walk_graph[23] = (15)*256 + (17);
        Lyon_walk_graph[24] = (25)*256 + (13);
        Lyon_walk_graph[25] = (14)*256 + (13);
        Lyon_walk_graph[26] = (16)*256 + (14);
        Lyon_walk_graph[27] = (22)*256 + (14);
        Lyon_walk_graph[28] = (18)*256 + (16);
        Lyon_walk_graph[29] = (26)*256 + (11);
        Lyon_walk_graph[30] = (26)*256 + (27);
        Lyon_walk_graph[31] = (26)*256 + (27);
        Lyon_walk_graph[32] = (14)*256 + (27);
        Lyon_walk_graph[33] = (28)*256 + (27);
        Lyon_walk_graph[34] = (28)*256 + (26);
        Lyon_walk_graph[35] = (19)*256 + (18);
        Lyon_walk_graph[36] = (17)*256 + (19);
        Lyon_walk_graph[37] = (30)*256 + (12);
        Lyon_walk_graph[38] = (31)*256 + (13);
        Lyon_walk_graph[39] = (30)*256 + (31);
        Lyon_walk_graph[40] = (29)*256 + (31);
        Lyon_walk_graph[41] = (30)*256 + (29);
}
