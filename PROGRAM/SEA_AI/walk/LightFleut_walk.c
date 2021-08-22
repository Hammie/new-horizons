int LightFleut_walk_count;
float LightFleut_walk_verts[99];
int LightFleut_walk_types[33];
int LightFleut_walk_graph[37];

void LightFleut_walk_init()
{
        LightFleut_walk_count = 33;

        LightFleut_walk_verts[0] = -1.858811;
        LightFleut_walk_verts[1] = 6.11492;
        LightFleut_walk_verts[2] = 10.983388;
        LightFleut_walk_verts[3] = 1.968979;
        LightFleut_walk_verts[4] = 6.132417;
        LightFleut_walk_verts[5] = 10.884274;
        LightFleut_walk_verts[6] = -2.527701;
        LightFleut_walk_verts[7] = 5.862414;
        LightFleut_walk_verts[8] = 8.451942;
        LightFleut_walk_verts[9] = 2.471318;
        LightFleut_walk_verts[10] = 5.779912;
        LightFleut_walk_verts[11] = 8.614511;
        LightFleut_walk_verts[12] = -2.501412;
        LightFleut_walk_verts[13] = 3.469908;
        LightFleut_walk_verts[14] = 5.877752;
        LightFleut_walk_verts[15] = 2.807874;
        LightFleut_walk_verts[16] = 3.454905;
        LightFleut_walk_verts[17] = 5.893762;
        LightFleut_walk_verts[18] = -2.468636;
        LightFleut_walk_verts[19] = 3.377408;
        LightFleut_walk_verts[20] = -2.207004;
        LightFleut_walk_verts[21] = 2.584001;
        LightFleut_walk_verts[22] = 3.464908;
        LightFleut_walk_verts[23] = -2.052583;
        LightFleut_walk_verts[24] = -2.209429;
        LightFleut_walk_verts[25] = 5.632431;
        LightFleut_walk_verts[26] = -5.10821;
        LightFleut_walk_verts[27] = 2.29718;
        LightFleut_walk_verts[28] = 5.640038;
        LightFleut_walk_verts[29] = -5.040602;
        LightFleut_walk_verts[30] = -1.867064;
        LightFleut_walk_verts[31] = 3.525052;
        LightFleut_walk_verts[32] = 0.149803;
        LightFleut_walk_verts[33] = 1.828424;
        LightFleut_walk_verts[34] = 3.417553;
        LightFleut_walk_verts[35] = 0.30988;
        LightFleut_walk_verts[36] = -1.835745;
        LightFleut_walk_verts[37] = 5.832542;
        LightFleut_walk_verts[38] = -6.700201;
        LightFleut_walk_verts[39] = 1.800255;
        LightFleut_walk_verts[40] = 5.715041;
        LightFleut_walk_verts[41] = -6.720252;
        LightFleut_walk_verts[42] = 1.055943;
        LightFleut_walk_verts[43] = 6.030022;
        LightFleut_walk_verts[44] = -9.772162;
        LightFleut_walk_verts[45] = -1.368882;
        LightFleut_walk_verts[46] = 6.000015;
        LightFleut_walk_verts[47] = -8.904387;
        LightFleut_walk_verts[48] = 0.849445;
        LightFleut_walk_verts[49] = 8.235014;
        LightFleut_walk_verts[50] = -14.309363;
        LightFleut_walk_verts[51] = -1.321119;
        LightFleut_walk_verts[52] = 7.272505;
        LightFleut_walk_verts[53] = -10.96118;
        LightFleut_walk_verts[54] = -1.783682;
        LightFleut_walk_verts[55] = 3.410022;
        LightFleut_walk_verts[56] = 3.358717;
        LightFleut_walk_verts[57] = 1.856266;
        LightFleut_walk_verts[58] = 3.445021;
        LightFleut_walk_verts[59] = 3.364239;
        LightFleut_walk_verts[60] = 3.855596;
        LightFleut_walk_verts[61] = 5.612523;
        LightFleut_walk_verts[62] = -5.650172;
        LightFleut_walk_verts[63] = -3.745808;
        LightFleut_walk_verts[64] = 5.490013;
        LightFleut_walk_verts[65] = -5.176689;
        LightFleut_walk_verts[66] = 4.148349;
        LightFleut_walk_verts[67] = 5.490014;
        LightFleut_walk_verts[68] = -4.505495;
        LightFleut_walk_verts[69] = -4.099087;
        LightFleut_walk_verts[70] = 5.447512;
        LightFleut_walk_verts[71] = -4.490498;
        LightFleut_walk_verts[72] = 0.769238;
        LightFleut_walk_verts[73] = 16.752466;
        LightFleut_walk_verts[74] = -4.000011;
        LightFleut_walk_verts[75] = -0.795697;
        LightFleut_walk_verts[76] = 16.787462;
        LightFleut_walk_verts[77] = -4.135403;
        LightFleut_walk_verts[78] = 0.376598;
        LightFleut_walk_verts[79] = 6.200009;
        LightFleut_walk_verts[80] = 11.665795;
        LightFleut_walk_verts[81] = -0.814466;
        LightFleut_walk_verts[82] = 8.267516;
        LightFleut_walk_verts[83] = -14.354046;
        LightFleut_walk_verts[84] = -0.053747;
        LightFleut_walk_verts[85] = 9.099993;
        LightFleut_walk_verts[86] = -17.592953;
        LightFleut_walk_verts[87] = 4.143236;
        LightFleut_walk_verts[88] = 5.997497;
        LightFleut_walk_verts[89] = 9.412475;
        LightFleut_walk_verts[90] = -4.080392;
        LightFleut_walk_verts[91] = 5.959995;
        LightFleut_walk_verts[92] = 9.365332;
        LightFleut_walk_verts[93] = -0.641883;
        LightFleut_walk_verts[94] = 15.032485;
        LightFleut_walk_verts[95] = 9.820092;
        LightFleut_walk_verts[96] = 0.835117;
        LightFleut_walk_verts[97] = 14.934978;
        LightFleut_walk_verts[98] = 9.870185;

        LightFleut_walk_types[0] = 3;
        LightFleut_walk_types[1] = 3;
        LightFleut_walk_types[2] = 0;
        LightFleut_walk_types[3] = 0;
        LightFleut_walk_types[4] = 0;
        LightFleut_walk_types[5] = 0;
        LightFleut_walk_types[6] = 0;
        LightFleut_walk_types[7] = 0;
        LightFleut_walk_types[8] = 0;
        LightFleut_walk_types[9] = 0;
        LightFleut_walk_types[10] = 0;
        LightFleut_walk_types[11] = 0;
        LightFleut_walk_types[12] = 0;
        LightFleut_walk_types[13] = 0;
        LightFleut_walk_types[14] = 0;
        LightFleut_walk_types[15] = 0;
        LightFleut_walk_types[16] = 0;
        LightFleut_walk_types[17] = 0;
        LightFleut_walk_types[18] = 0;
        LightFleut_walk_types[19] = 0;
        LightFleut_walk_types[20] = 5;
        LightFleut_walk_types[21] = 5;
        LightFleut_walk_types[22] = 5;
        LightFleut_walk_types[23] = 5;
        LightFleut_walk_types[24] = 4;
        LightFleut_walk_types[25] = 4;
        LightFleut_walk_types[26] = 0;
        LightFleut_walk_types[27] = 0;
        LightFleut_walk_types[28] = 0;
        LightFleut_walk_types[29] = 5;
        LightFleut_walk_types[30] = 5;
        LightFleut_walk_types[31] = 6;
        LightFleut_walk_types[32] = 6;

        LightFleut_walk_graph[0] = (0)*256 + (2);
        LightFleut_walk_graph[1] = (1)*256 + (3);
        LightFleut_walk_graph[2] = (3)*256 + (5);
        LightFleut_walk_graph[3] = (19)*256 + (5);
        LightFleut_walk_graph[4] = (19)*256 + (11);
        LightFleut_walk_graph[5] = (9)*256 + (7);
        LightFleut_walk_graph[6] = (9)*256 + (13);
        LightFleut_walk_graph[7] = (14)*256 + (13);
        LightFleut_walk_graph[8] = (15)*256 + (17);
        LightFleut_walk_graph[9] = (15)*256 + (12);
        LightFleut_walk_graph[10] = (8)*256 + (12);
        LightFleut_walk_graph[11] = (8)*256 + (6);
        LightFleut_walk_graph[12] = (10)*256 + (6);
        LightFleut_walk_graph[13] = (18)*256 + (4);
        LightFleut_walk_graph[14] = (2)*256 + (4);
        LightFleut_walk_graph[15] = (0)*256 + (26);
        LightFleut_walk_graph[16] = (1)*256 + (26);
        LightFleut_walk_graph[17] = (10)*256 + (11);
        LightFleut_walk_graph[18] = (18)*256 + (19);
        LightFleut_walk_graph[19] = (10)*256 + (18);
        LightFleut_walk_graph[20] = (13)*256 + (20);
        LightFleut_walk_graph[21] = (12)*256 + (21);
        LightFleut_walk_graph[22] = (21)*256 + (23);
        LightFleut_walk_graph[23] = (20)*256 + (22);
        LightFleut_walk_graph[24] = (24)*256 + (22);
        LightFleut_walk_graph[25] = (25)*256 + (23);
        LightFleut_walk_graph[26] = (7)*256 + (11);
        LightFleut_walk_graph[27] = (15)*256 + (13);
        LightFleut_walk_graph[28] = (27)*256 + (17);
        LightFleut_walk_graph[29] = (27)*256 + (28);
        LightFleut_walk_graph[30] = (16)*256 + (28);
        LightFleut_walk_graph[31] = (16)*256 + (27);
        LightFleut_walk_graph[32] = (16)*256 + (27);
        LightFleut_walk_graph[33] = (30)*256 + (2);
        LightFleut_walk_graph[34] = (30)*256 + (31);
        LightFleut_walk_graph[35] = (29)*256 + (3);
        LightFleut_walk_graph[36] = (29)*256 + (32);
}
