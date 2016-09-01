int CaravelR_walk_count;
float CaravelR_walk_verts[111];
int CaravelR_walk_types[37];
int CaravelR_walk_graph[41];

void CaravelR_walk_init()
{
        CaravelR_walk_count = 37;

        CaravelR_walk_verts[0] = -2.1;
        CaravelR_walk_verts[1] = 2.029;
        CaravelR_walk_verts[2] = 2.3;
        CaravelR_walk_verts[3] = -2.1;
        CaravelR_walk_verts[4] = 1.88;
        CaravelR_walk_verts[5] = -2.6;
        CaravelR_walk_verts[6] = -2.1;
        CaravelR_walk_verts[7] = 1.909;
        CaravelR_walk_verts[8] = -6.2;
        CaravelR_walk_verts[9] = -2.1;
        CaravelR_walk_verts[10] = 2.034;
        CaravelR_walk_verts[11] = -8.9;
        CaravelR_walk_verts[12] = 2.1;
        CaravelR_walk_verts[13] = 2.029;
        CaravelR_walk_verts[14] = 2.3;
        CaravelR_walk_verts[15] = 2.1;
        CaravelR_walk_verts[16] = 1.88;
        CaravelR_walk_verts[17] = -2.6;
        CaravelR_walk_verts[18] = 2.1;
        CaravelR_walk_verts[19] = 1.909;
        CaravelR_walk_verts[20] = -6.2;
        CaravelR_walk_verts[21] = 2.1;
        CaravelR_walk_verts[22] = 2.034;
        CaravelR_walk_verts[23] = -8.9;
        CaravelR_walk_verts[24] = 0;
        CaravelR_walk_verts[25] = 0;
        CaravelR_walk_verts[26] = 0;
        CaravelR_walk_verts[27] = -2.941;
        CaravelR_walk_verts[28] = 4.185;
        CaravelR_walk_verts[29] = -4.656;
        CaravelR_walk_verts[30] = -2.2;
        CaravelR_walk_verts[31] = 4.19;
        CaravelR_walk_verts[32] = -5.61;
        CaravelR_walk_verts[33] = -1.9;
        CaravelR_walk_verts[34] = 4.33;
        CaravelR_walk_verts[35] = -10.25;
        CaravelR_walk_verts[36] = 0;
        CaravelR_walk_verts[37] = 4.347;
        CaravelR_walk_verts[38] = -8.85;
        CaravelR_walk_verts[39] = 0;
        CaravelR_walk_verts[40] = 0;
        CaravelR_walk_verts[41] = 0;
        CaravelR_walk_verts[42] = 2.941;
        CaravelR_walk_verts[43] = 4.185;
        CaravelR_walk_verts[44] = -4.656;
        CaravelR_walk_verts[45] = 2.2;
        CaravelR_walk_verts[46] = 4.19;
        CaravelR_walk_verts[47] = -5.61;
        CaravelR_walk_verts[48] = 1.9;
        CaravelR_walk_verts[49] = 4.33;
        CaravelR_walk_verts[50] = -10.25;
        CaravelR_walk_verts[51] = -2.97;
        CaravelR_walk_verts[52] = 2.04;
        CaravelR_walk_verts[53] = 2.75;
        CaravelR_walk_verts[54] = -2.97;
        CaravelR_walk_verts[55] = 4.46;
        CaravelR_walk_verts[56] = 4.02;
        CaravelR_walk_verts[57] = -2.47;
        CaravelR_walk_verts[58] = 4.54;
        CaravelR_walk_verts[59] = 4.97;
        CaravelR_walk_verts[60] = -1.3;
        CaravelR_walk_verts[61] = 4.94;
        CaravelR_walk_verts[62] = 9.32;
        CaravelR_walk_verts[63] = 2.97;
        CaravelR_walk_verts[64] = 2.04;
        CaravelR_walk_verts[65] = 2.75;
        CaravelR_walk_verts[66] = 2.97;
        CaravelR_walk_verts[67] = 4.46;
        CaravelR_walk_verts[68] = 4.02;
        CaravelR_walk_verts[69] = 2.47;
        CaravelR_walk_verts[70] = 4.54;
        CaravelR_walk_verts[71] = 4.97;
        CaravelR_walk_verts[72] = 1.3;
        CaravelR_walk_verts[73] = 4.94;
        CaravelR_walk_verts[74] = 9.32;
        CaravelR_walk_verts[75] = -4.11;
        CaravelR_walk_verts[76] = 4.5;
        CaravelR_walk_verts[77] = 5.13;
        CaravelR_walk_verts[78] = -0.35;
        CaravelR_walk_verts[79] = 17.55;
        CaravelR_walk_verts[80] = 6.33;
        CaravelR_walk_verts[81] = 4.11;
        CaravelR_walk_verts[82] = 4.5;
        CaravelR_walk_verts[83] = 5.13;
        CaravelR_walk_verts[84] = 0.35;
        CaravelR_walk_verts[85] = 17.55;
        CaravelR_walk_verts[86] = 6.33;
        CaravelR_walk_verts[87] = -2.8;
        CaravelR_walk_verts[88] = 1.931;
        CaravelR_walk_verts[89] = 0.702;
        CaravelR_walk_verts[90] = -2.8;
        CaravelR_walk_verts[91] = 1.88;
        CaravelR_walk_verts[92] = -2.62;
        CaravelR_walk_verts[93] = -2.8;
        CaravelR_walk_verts[94] = 1.874;
        CaravelR_walk_verts[95] = -5.875;
        CaravelR_walk_verts[96] = -2.123;
        CaravelR_walk_verts[97] = 2.08;
        CaravelR_walk_verts[98] = -9.82;
        CaravelR_walk_verts[99] = 2.8;
        CaravelR_walk_verts[100] = 1.931;
        CaravelR_walk_verts[101] = 0.702;
        CaravelR_walk_verts[102] = 2.8;
        CaravelR_walk_verts[103] = 1.88;
        CaravelR_walk_verts[104] = -2.62;
        CaravelR_walk_verts[105] = 2.8;
        CaravelR_walk_verts[106] = 1.874;
        CaravelR_walk_verts[107] = -5.875;
        CaravelR_walk_verts[108] = 2.123;
        CaravelR_walk_verts[109] = 2.08;
        CaravelR_walk_verts[110] = -9.82;

        CaravelR_walk_types[0] = 0;
        CaravelR_walk_types[1] = 0;
        CaravelR_walk_types[2] = 0;
        CaravelR_walk_types[3] = 0;
        CaravelR_walk_types[4] = 0;
        CaravelR_walk_types[5] = 0;
        CaravelR_walk_types[6] = 0;
        CaravelR_walk_types[7] = 0;
        CaravelR_walk_types[8] = 0;
        CaravelR_walk_types[9] = 0;
        CaravelR_walk_types[10] = 0;
        CaravelR_walk_types[11] = 0;
        CaravelR_walk_types[12] = 0;
        CaravelR_walk_types[13] = 0;
        CaravelR_walk_types[14] = 0;
        CaravelR_walk_types[15] = 0;
        CaravelR_walk_types[16] = 0;
        CaravelR_walk_types[17] = 0;
        CaravelR_walk_types[18] = 0;
        CaravelR_walk_types[19] = 0;
        CaravelR_walk_types[20] = 0;
        CaravelR_walk_types[21] = 0;
        CaravelR_walk_types[22] = 0;
        CaravelR_walk_types[23] = 0;
        CaravelR_walk_types[24] = 0;
        CaravelR_walk_types[25] = 5;
        CaravelR_walk_types[26] = 6;
        CaravelR_walk_types[27] = 5;
        CaravelR_walk_types[28] = 6;
        CaravelR_walk_types[29] = 1;
        CaravelR_walk_types[30] = 1;
        CaravelR_walk_types[31] = 1;
        CaravelR_walk_types[32] = 1;
        CaravelR_walk_types[33] = 2;
        CaravelR_walk_types[34] = 2;
        CaravelR_walk_types[35] = 2;
        CaravelR_walk_types[36] = 2;

        CaravelR_walk_graph[0] = (0)*256 + (1);
        CaravelR_walk_graph[1] = (1)*256 + (2);
        CaravelR_walk_graph[2] = (2)*256 + (3);
        CaravelR_walk_graph[3] = (4)*256 + (5);
        CaravelR_walk_graph[4] = (5)*256 + (6);
        CaravelR_walk_graph[5] = (6)*256 + (7);
        CaravelR_walk_graph[6] = (0)*256 + (4);
        CaravelR_walk_graph[7] = (3)*256 + (7);
        CaravelR_walk_graph[8] = (1)*256 + (8);
        CaravelR_walk_graph[9] = (8)*256 + (9);
        CaravelR_walk_graph[10] = (9)*256 + (10);
        CaravelR_walk_graph[11] = (10)*256 + (11);
        CaravelR_walk_graph[12] = (11)*256 + (12);
        CaravelR_walk_graph[13] = (5)*256 + (13);
        CaravelR_walk_graph[14] = (13)*256 + (14);
        CaravelR_walk_graph[15] = (14)*256 + (15);
        CaravelR_walk_graph[16] = (16)*256 + (12);
        CaravelR_walk_graph[17] = (10)*256 + (15);
        CaravelR_walk_graph[18] = (15)*256 + (16);
        CaravelR_walk_graph[19] = (0)*256 + (17);
        CaravelR_walk_graph[20] = (17)*256 + (18);
        CaravelR_walk_graph[21] = (18)*256 + (19);
        CaravelR_walk_graph[22] = (19)*256 + (20);
        CaravelR_walk_graph[23] = (4)*256 + (21);
        CaravelR_walk_graph[24] = (21)*256 + (22);
        CaravelR_walk_graph[25] = (22)*256 + (23);
        CaravelR_walk_graph[26] = (23)*256 + (24);
        CaravelR_walk_graph[27] = (19)*256 + (23);
        CaravelR_walk_graph[28] = (20)*256 + (24);
        CaravelR_walk_graph[29] = (19)*256 + (25);
        CaravelR_walk_graph[30] = (25)*256 + (26);
        CaravelR_walk_graph[31] = (23)*256 + (27);
        CaravelR_walk_graph[32] = (27)*256 + (28);
        CaravelR_walk_graph[33] = (0)*256 + (29);
        CaravelR_walk_graph[34] = (1)*256 + (30);
        CaravelR_walk_graph[35] = (2)*256 + (31);
        CaravelR_walk_graph[36] = (3)*256 + (32);
        CaravelR_walk_graph[37] = (4)*256 + (33);
        CaravelR_walk_graph[38] = (5)*256 + (34);
        CaravelR_walk_graph[39] = (6)*256 + (35);
        CaravelR_walk_graph[40] = (7)*256 + (36);
}