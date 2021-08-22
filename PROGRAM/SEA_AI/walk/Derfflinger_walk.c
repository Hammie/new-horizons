int Derfflinger_walk_count;
float Derfflinger_walk_verts[96];
int Derfflinger_walk_types[32];
int Derfflinger_walk_graph[35];

void Derfflinger_walk_init()
{
        Derfflinger_walk_count = 32;

        Derfflinger_walk_verts[0] = -1.7;
        Derfflinger_walk_verts[1] = 2.618;
        Derfflinger_walk_verts[2] = 5;
        Derfflinger_walk_verts[3] = -1.7;
        Derfflinger_walk_verts[4] = 2.729;
        Derfflinger_walk_verts[5] = 3.731;
        Derfflinger_walk_verts[6] = 1.7;
        Derfflinger_walk_verts[7] = 2.618;
        Derfflinger_walk_verts[8] = 5;
        Derfflinger_walk_verts[9] = 1.7;
        Derfflinger_walk_verts[10] = 2.729;
        Derfflinger_walk_verts[11] = 3.731;
        Derfflinger_walk_verts[12] = 1.187;
        Derfflinger_walk_verts[13] = 2.834;
        Derfflinger_walk_verts[14] = -5.86;
        Derfflinger_walk_verts[15] = 0.192;
        Derfflinger_walk_verts[16] = 2.937;
        Derfflinger_walk_verts[17] = -8.638;
        Derfflinger_walk_verts[18] = 1.145;
        Derfflinger_walk_verts[19] = 2.963;
        Derfflinger_walk_verts[20] = -9.5;
        Derfflinger_walk_verts[21] = 1.145;
        Derfflinger_walk_verts[22] = 5.257;
        Derfflinger_walk_verts[23] = -10.82;
        Derfflinger_walk_verts[24] = 1;
        Derfflinger_walk_verts[25] = 5.214;
        Derfflinger_walk_verts[26] = -12.6;
        Derfflinger_walk_verts[27] = -1;
        Derfflinger_walk_verts[28] = 5.214;
        Derfflinger_walk_verts[29] = -12.6;
        Derfflinger_walk_verts[30] = -0.6;
        Derfflinger_walk_verts[31] = 5.23;
        Derfflinger_walk_verts[32] = -8.67;
        Derfflinger_walk_verts[33] = -0.6;
        Derfflinger_walk_verts[34] = 5.23;
        Derfflinger_walk_verts[35] = -7;
        Derfflinger_walk_verts[36] = -1.6;
        Derfflinger_walk_verts[37] = 5.1;
        Derfflinger_walk_verts[38] = -5.8;
        Derfflinger_walk_verts[39] = 0.6;
        Derfflinger_walk_verts[40] = 5.23;
        Derfflinger_walk_verts[41] = -8.67;
        Derfflinger_walk_verts[42] = 0.6;
        Derfflinger_walk_verts[43] = 5.23;
        Derfflinger_walk_verts[44] = -7;
        Derfflinger_walk_verts[45] = 1.6;
        Derfflinger_walk_verts[46] = 5.1;
        Derfflinger_walk_verts[47] = -5.8;
        Derfflinger_walk_verts[48] = -2;
        Derfflinger_walk_verts[49] = 2.63;
        Derfflinger_walk_verts[50] = 5.55;
        Derfflinger_walk_verts[51] = -2;
        Derfflinger_walk_verts[52] = 4.64;
        Derfflinger_walk_verts[53] = 5.87;
        Derfflinger_walk_verts[54] = -1.66;
        Derfflinger_walk_verts[55] = 4.68;
        Derfflinger_walk_verts[56] = 7;
        Derfflinger_walk_verts[57] = -1.66;
        Derfflinger_walk_verts[58] = 5;
        Derfflinger_walk_verts[59] = 11.45;
        Derfflinger_walk_verts[60] = 2;
        Derfflinger_walk_verts[61] = 2.63;
        Derfflinger_walk_verts[62] = 5.55;
        Derfflinger_walk_verts[63] = 2;
        Derfflinger_walk_verts[64] = 4.64;
        Derfflinger_walk_verts[65] = 5.87;
        Derfflinger_walk_verts[66] = 1.66;
        Derfflinger_walk_verts[67] = 4.68;
        Derfflinger_walk_verts[68] = 7;
        Derfflinger_walk_verts[69] = 1.66;
        Derfflinger_walk_verts[70] = 5;
        Derfflinger_walk_verts[71] = 11.45;
        Derfflinger_walk_verts[72] = -3.015;
        Derfflinger_walk_verts[73] = 4.76;
        Derfflinger_walk_verts[74] = 8.57;
        Derfflinger_walk_verts[75] = -0.3;
        Derfflinger_walk_verts[76] = 15.6;
        Derfflinger_walk_verts[77] = 10.71;
        Derfflinger_walk_verts[78] = 3.015;
        Derfflinger_walk_verts[79] = 4.76;
        Derfflinger_walk_verts[80] = 8.57;
        Derfflinger_walk_verts[81] = 0.3;
        Derfflinger_walk_verts[82] = 15.6;
        Derfflinger_walk_verts[83] = 10.71;
        Derfflinger_walk_verts[84] = -2.96;
        Derfflinger_walk_verts[85] = 5.12;
        Derfflinger_walk_verts[86] = -5.93;
        Derfflinger_walk_verts[87] = -0.35;
        Derfflinger_walk_verts[88] = 16.37;
        Derfflinger_walk_verts[89] = -3.2;
        Derfflinger_walk_verts[90] = 2.96;
        Derfflinger_walk_verts[91] = 5.12;
        Derfflinger_walk_verts[92] = -5.93;
        Derfflinger_walk_verts[93] = 0.35;
        Derfflinger_walk_verts[94] = 16.37;
        Derfflinger_walk_verts[95] = -3.2;

        Derfflinger_walk_types[0] = 0;
        Derfflinger_walk_types[1] = 0;
        Derfflinger_walk_types[2] = 0;
        Derfflinger_walk_types[3] = 0;
        Derfflinger_walk_types[4] = 0;
        Derfflinger_walk_types[5] = 0;
        Derfflinger_walk_types[6] = 0;
        Derfflinger_walk_types[7] = 0;
        Derfflinger_walk_types[8] = 0;
        Derfflinger_walk_types[9] = 0;
        Derfflinger_walk_types[10] = 0;
        Derfflinger_walk_types[11] = 0;
        Derfflinger_walk_types[12] = 0;
        Derfflinger_walk_types[13] = 0;
        Derfflinger_walk_types[14] = 0;
        Derfflinger_walk_types[15] = 0;
        Derfflinger_walk_types[16] = 0;
        Derfflinger_walk_types[17] = 0;
        Derfflinger_walk_types[18] = 0;
        Derfflinger_walk_types[19] = 0;
        Derfflinger_walk_types[20] = 0;
        Derfflinger_walk_types[21] = 0;
        Derfflinger_walk_types[22] = 0;
        Derfflinger_walk_types[23] = 0;
        Derfflinger_walk_types[24] = 5;
        Derfflinger_walk_types[25] = 6;
        Derfflinger_walk_types[26] = 5;
        Derfflinger_walk_types[27] = 6;
        Derfflinger_walk_types[28] = 5;
        Derfflinger_walk_types[29] = 4;
        Derfflinger_walk_types[30] = 5;
        Derfflinger_walk_types[31] = 4;

        Derfflinger_walk_graph[0] = (0)*256 + (1);
        Derfflinger_walk_graph[1] = (2)*256 + (3);
        Derfflinger_walk_graph[2] = (0)*256 + (2);
        Derfflinger_walk_graph[3] = (1)*256 + (3);
        Derfflinger_walk_graph[4] = (3)*256 + (4);
        Derfflinger_walk_graph[5] = (4)*256 + (5);
        Derfflinger_walk_graph[6] = (5)*256 + (6);
        Derfflinger_walk_graph[7] = (6)*256 + (7);
        Derfflinger_walk_graph[8] = (7)*256 + (8);
        Derfflinger_walk_graph[9] = (8)*256 + (9);
        Derfflinger_walk_graph[10] = (9)*256 + (10);
        Derfflinger_walk_graph[11] = (10)*256 + (11);
        Derfflinger_walk_graph[12] = (11)*256 + (12);
        Derfflinger_walk_graph[13] = (12)*256 + (13);
        Derfflinger_walk_graph[14] = (13)*256 + (14);
        Derfflinger_walk_graph[15] = (14)*256 + (15);
        Derfflinger_walk_graph[16] = (15)*256 + (10);
        Derfflinger_walk_graph[17] = (0)*256 + (16);
        Derfflinger_walk_graph[18] = (16)*256 + (17);
        Derfflinger_walk_graph[19] = (17)*256 + (18);
        Derfflinger_walk_graph[20] = (18)*256 + (19);
        Derfflinger_walk_graph[21] = (2)*256 + (20);
        Derfflinger_walk_graph[22] = (20)*256 + (21);
        Derfflinger_walk_graph[23] = (21)*256 + (22);
        Derfflinger_walk_graph[24] = (22)*256 + (23);
        Derfflinger_walk_graph[25] = (19)*256 + (23);
        Derfflinger_walk_graph[26] = (18)*256 + (22);
        Derfflinger_walk_graph[27] = (18)*256 + (24);
        Derfflinger_walk_graph[28] = (24)*256 + (25);
        Derfflinger_walk_graph[29] = (22)*256 + (26);
        Derfflinger_walk_graph[30] = (26)*256 + (27);
        Derfflinger_walk_graph[31] = (12)*256 + (28);
        Derfflinger_walk_graph[32] = (28)*256 + (29);
        Derfflinger_walk_graph[33] = (13)*256 + (30);
        Derfflinger_walk_graph[34] = (30)*256 + (31);
}
