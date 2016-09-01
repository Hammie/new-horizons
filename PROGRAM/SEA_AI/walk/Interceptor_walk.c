int Interceptor_walk_count;
float Interceptor_walk_verts[120];
int Interceptor_walk_types[40];
int Interceptor_walk_graph[55];

void Interceptor_walk_init()
{
        Interceptor_walk_count = 40;

        Interceptor_walk_verts[0] = 1.884779;
        Interceptor_walk_verts[1] = 1.919924;
        Interceptor_walk_verts[2] = 3.00457;
        Interceptor_walk_verts[3] = 1.346165;
        Interceptor_walk_verts[4] = 1.879924;
        Interceptor_walk_verts[5] = 3.950485;
        Interceptor_walk_verts[6] = 1.369171;
        Interceptor_walk_verts[7] = 1.724924;
        Interceptor_walk_verts[8] = 0.492287;
        Interceptor_walk_verts[9] = 1.725875;
        Interceptor_walk_verts[10] = 2.084927;
        Interceptor_walk_verts[11] = -2.261007;
        Interceptor_walk_verts[12] = 1.726696;
        Interceptor_walk_verts[13] = 2.79492;
        Interceptor_walk_verts[14] = -4.829662;
        Interceptor_walk_verts[15] = 0.650513;
        Interceptor_walk_verts[16] = 2.842416;
        Interceptor_walk_verts[17] = -5.261169;
        Interceptor_walk_verts[18] = -1.914084;
        Interceptor_walk_verts[19] = 1.87991;
        Interceptor_walk_verts[20] = 2.944173;
        Interceptor_walk_verts[21] = -1.29089;
        Interceptor_walk_verts[22] = 1.77491;
        Interceptor_walk_verts[23] = 3.823931;
        Interceptor_walk_verts[24] = -1.390472;
        Interceptor_walk_verts[25] = 1.742411;
        Interceptor_walk_verts[26] = 0.517363;
        Interceptor_walk_verts[27] = -1.683391;
        Interceptor_walk_verts[28] = 2.077411;
        Interceptor_walk_verts[29] = -2.251115;
        Interceptor_walk_verts[30] = -1.593569;
        Interceptor_walk_verts[31] = 2.824922;
        Interceptor_walk_verts[32] = -4.980748;
        Interceptor_walk_verts[33] = -0.637818;
        Interceptor_walk_verts[34] = 2.892557;
        Interceptor_walk_verts[35] = -5.245219;
        Interceptor_walk_verts[36] = 1.087881;
        Interceptor_walk_verts[37] = 3.380053;
        Interceptor_walk_verts[38] = -8.843966;
        Interceptor_walk_verts[39] = -0.71937;
        Interceptor_walk_verts[40] = 3.46505;
        Interceptor_walk_verts[41] = -9.459015;
        Interceptor_walk_verts[42] = 0.776929;
        Interceptor_walk_verts[43] = 3.487553;
        Interceptor_walk_verts[44] = -9.466105;
        Interceptor_walk_verts[45] = 1.753843;
        Interceptor_walk_verts[46] = 2.780065;
        Interceptor_walk_verts[47] = -3.373778;
        Interceptor_walk_verts[48] = 3.019655;
        Interceptor_walk_verts[49] = 2.34756;
        Interceptor_walk_verts[50] = -3.373187;
        Interceptor_walk_verts[51] = 0.474066;
        Interceptor_walk_verts[52] = 11.365293;
        Interceptor_walk_verts[53] = -2.101109;
        Interceptor_walk_verts[54] = -1.793311;
        Interceptor_walk_verts[55] = 2.732532;
        Interceptor_walk_verts[56] = -3.291837;
        Interceptor_walk_verts[57] = -3.174321;
        Interceptor_walk_verts[58] = 2.307526;
        Interceptor_walk_verts[59] = -3.3149;
        Interceptor_walk_verts[60] = -0.423459;
        Interceptor_walk_verts[61] = 11.390109;
        Interceptor_walk_verts[62] = -2.056573;
        Interceptor_walk_verts[63] = 0.873438;
        Interceptor_walk_verts[64] = 3.14004;
        Interceptor_walk_verts[65] = -7.854908;
        Interceptor_walk_verts[66] = 1.104747;
        Interceptor_walk_verts[67] = 3.012535;
        Interceptor_walk_verts[68] = -6.178818;
        Interceptor_walk_verts[69] = 1.509394;
        Interceptor_walk_verts[70] = 1.727523;
        Interceptor_walk_verts[71] = -0.346192;
        Interceptor_walk_verts[72] = 1.509292;
        Interceptor_walk_verts[73] = 1.797526;
        Interceptor_walk_verts[74] = 1.179205;
        Interceptor_walk_verts[75] = 1.217356;
        Interceptor_walk_verts[76] = 2.037525;
        Interceptor_walk_verts[77] = 5.400804;
        Interceptor_walk_verts[78] = -0.728489;
        Interceptor_walk_verts[79] = 3.107535;
        Interceptor_walk_verts[80] = -7.927088;
        Interceptor_walk_verts[81] = -1.08957;
        Interceptor_walk_verts[82] = 3.087537;
        Interceptor_walk_verts[83] = -6.164766;
        Interceptor_walk_verts[84] = -1.528839;
        Interceptor_walk_verts[85] = 1.772524;
        Interceptor_walk_verts[86] = -0.329415;
        Interceptor_walk_verts[87] = -1.427225;
        Interceptor_walk_verts[88] = 1.760026;
        Interceptor_walk_verts[89] = 1.192418;
        Interceptor_walk_verts[90] = -1.169112;
        Interceptor_walk_verts[91] = 2.102525;
        Interceptor_walk_verts[92] = 5.386872;
        Interceptor_walk_verts[93] = 1.041191;
        Interceptor_walk_verts[94] = 3.097543;
        Interceptor_walk_verts[95] = -7.029217;
        Interceptor_walk_verts[96] = -1.041547;
        Interceptor_walk_verts[97] = 3.36002;
        Interceptor_walk_verts[98] = -8.866973;
        Interceptor_walk_verts[99] = -1.124686;
        Interceptor_walk_verts[100] = 3.075038;
        Interceptor_walk_verts[101] = -7.028079;
        Interceptor_walk_verts[102] = 3.060606;
        Interceptor_walk_verts[103] = 2.48753;
        Interceptor_walk_verts[104] = 3.607996;
        Interceptor_walk_verts[105] = 0.37294;
        Interceptor_walk_verts[106] = 10.244936;
        Interceptor_walk_verts[107] = 5.30684;
        Interceptor_walk_verts[108] = -0.417901;
        Interceptor_walk_verts[109] = 10.19257;
        Interceptor_walk_verts[110] = 5.278782;
        Interceptor_walk_verts[111] = -3.09222;
        Interceptor_walk_verts[112] = 2.465027;
        Interceptor_walk_verts[113] = 3.500678;
        Interceptor_walk_verts[114] = 0.030774;
        Interceptor_walk_verts[115] = 1.712381;
        Interceptor_walk_verts[116] = -0.893551;
        Interceptor_walk_verts[117] = 0.024569;
        Interceptor_walk_verts[118] = 1.807384;
        Interceptor_walk_verts[119] = 2.308754;

        Interceptor_walk_types[0] = 0;
        Interceptor_walk_types[1] = 0;
        Interceptor_walk_types[2] = 0;
        Interceptor_walk_types[3] = 0;
        Interceptor_walk_types[4] = 0;
        Interceptor_walk_types[5] = 0;
        Interceptor_walk_types[6] = 0;
        Interceptor_walk_types[7] = 0;
        Interceptor_walk_types[8] = 0;
        Interceptor_walk_types[9] = 0;
        Interceptor_walk_types[10] = 0;
        Interceptor_walk_types[11] = 0;
        Interceptor_walk_types[12] = 0;
        Interceptor_walk_types[13] = 4;
        Interceptor_walk_types[14] = 4;
        Interceptor_walk_types[15] = 0;
        Interceptor_walk_types[16] = 5;
        Interceptor_walk_types[17] = 6;
        Interceptor_walk_types[18] = 0;
        Interceptor_walk_types[19] = 5;
        Interceptor_walk_types[20] = 6;
        Interceptor_walk_types[21] = 2;
        Interceptor_walk_types[22] = 2;
        Interceptor_walk_types[23] = 2;
        Interceptor_walk_types[24] = 2;
        Interceptor_walk_types[25] = 2;
        Interceptor_walk_types[26] = 1;
        Interceptor_walk_types[27] = 1;
        Interceptor_walk_types[28] = 1;
        Interceptor_walk_types[29] = 1;
        Interceptor_walk_types[30] = 1;
        Interceptor_walk_types[31] = 0;
        Interceptor_walk_types[32] = 0;
        Interceptor_walk_types[33] = 0;
        Interceptor_walk_types[34] = 5;
        Interceptor_walk_types[35] = 6;
        Interceptor_walk_types[36] = 6;
        Interceptor_walk_types[37] = 5;
        Interceptor_walk_types[38] = 0;
        Interceptor_walk_types[39] = 0;

        Interceptor_walk_graph[0] = (0)*256 + (1);
        Interceptor_walk_graph[1] = (1)*256 + (2);
        Interceptor_walk_graph[2] = (2)*256 + (3);
        Interceptor_walk_graph[3] = (3)*256 + (15);
        Interceptor_walk_graph[4] = (4)*256 + (5);
        Interceptor_walk_graph[5] = (7)*256 + (6);
        Interceptor_walk_graph[6] = (8)*256 + (7);
        Interceptor_walk_graph[7] = (9)*256 + (8);
        Interceptor_walk_graph[8] = (18)*256 + (9);
        Interceptor_walk_graph[9] = (11)*256 + (10);
        Interceptor_walk_graph[10] = (0)*256 + (6);
        Interceptor_walk_graph[11] = (5)*256 + (11);
        Interceptor_walk_graph[12] = (12)*256 + (14);
        Interceptor_walk_graph[13] = (14)*256 + (13);
        Interceptor_walk_graph[14] = (4)*256 + (15);
        Interceptor_walk_graph[15] = (16)*256 + (15);
        Interceptor_walk_graph[16] = (16)*256 + (17);
        Interceptor_walk_graph[17] = (18)*256 + (10);
        Interceptor_walk_graph[18] = (18)*256 + (19);
        Interceptor_walk_graph[19] = (20)*256 + (19);
        Interceptor_walk_graph[20] = (12)*256 + (21);
        Interceptor_walk_graph[21] = (4)*256 + (22);
        Interceptor_walk_graph[22] = (3)*256 + (23);
        Interceptor_walk_graph[23] = (2)*256 + (24);
        Interceptor_walk_graph[24] = (1)*256 + (25);
        Interceptor_walk_graph[25] = (0)*256 + (25);
        Interceptor_walk_graph[26] = (32)*256 + (26);
        Interceptor_walk_graph[27] = (10)*256 + (27);
        Interceptor_walk_graph[28] = (9)*256 + (28);
        Interceptor_walk_graph[29] = (8)*256 + (29);
        Interceptor_walk_graph[30] = (7)*256 + (30);
        Interceptor_walk_graph[31] = (6)*256 + (30);
        Interceptor_walk_graph[32] = (31)*256 + (5);
        Interceptor_walk_graph[33] = (33)*256 + (11);
        Interceptor_walk_graph[34] = (31)*256 + (21);
        Interceptor_walk_graph[35] = (33)*256 + (26);
        Interceptor_walk_graph[36] = (13)*256 + (32);
        Interceptor_walk_graph[37] = (13)*256 + (32);
        Interceptor_walk_graph[38] = (32)*256 + (32);
        Interceptor_walk_graph[39] = (32)*256 + (14);
        Interceptor_walk_graph[40] = (30)*256 + (25);
        Interceptor_walk_graph[41] = (34)*256 + (35);
        Interceptor_walk_graph[42] = (36)*256 + (37);
        Interceptor_walk_graph[43] = (6)*256 + (37);
        Interceptor_walk_graph[44] = (0)*256 + (34);
        Interceptor_walk_graph[45] = (6)*256 + (39);
        Interceptor_walk_graph[46] = (31)*256 + (22);
        Interceptor_walk_graph[47] = (29)*256 + (39);
        Interceptor_walk_graph[48] = (0)*256 + (39);
        Interceptor_walk_graph[49] = (24)*256 + (39);
        Interceptor_walk_graph[50] = (38)*256 + (3);
        Interceptor_walk_graph[51] = (38)*256 + (9);
        Interceptor_walk_graph[52] = (38)*256 + (23);
        Interceptor_walk_graph[53] = (38)*256 + (28);
        Interceptor_walk_graph[54] = (33)*256 + (27);
}