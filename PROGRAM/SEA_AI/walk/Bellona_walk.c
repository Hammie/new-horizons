int Bellona_walk_count;
float Bellona_walk_verts[204];
int Bellona_walk_types[68];
int Bellona_walk_graph[76];

void Bellona_walk_init()
{
        Bellona_walk_count = 68;

        Bellona_walk_verts[0] = -2.239206;
        Bellona_walk_verts[1] = 6.527476;
        Bellona_walk_verts[2] = 12.694542;
        Bellona_walk_verts[3] = -2.339238;
        Bellona_walk_verts[4] = 6.149981;
        Bellona_walk_verts[5] = 6.837351;
        Bellona_walk_verts[6] = -4.423913;
        Bellona_walk_verts[7] = 6.192481;
        Bellona_walk_verts[8] = 5.648079;
        Bellona_walk_verts[9] = -4.309927;
        Bellona_walk_verts[10] = 6.294986;
        Bellona_walk_verts[11] = -7.717034;
        Bellona_walk_verts[12] = -1.942958;
        Bellona_walk_verts[13] = 5.964986;
        Bellona_walk_verts[14] = -9.425672;
        Bellona_walk_verts[15] = 3.77617;
        Bellona_walk_verts[16] = 5.984987;
        Bellona_walk_verts[17] = -6.058651;
        Bellona_walk_verts[18] = 1.864394;
        Bellona_walk_verts[19] = 4.2;
        Bellona_walk_verts[20] = -6.280183;
        Bellona_walk_verts[21] = 4.417861;
        Bellona_walk_verts[22] = 6.032479;
        Bellona_walk_verts[23] = 5.77733;
        Bellona_walk_verts[24] = 4.36049;
        Bellona_walk_verts[25] = 5.892486;
        Bellona_walk_verts[26] = -7.805699;
        Bellona_walk_verts[27] = 2.225549;
        Bellona_walk_verts[28] = 5.919989;
        Bellona_walk_verts[29] = -9.316904;
        Bellona_walk_verts[30] = 4.345223;
        Bellona_walk_verts[31] = 6.312513;
        Bellona_walk_verts[32] = -16.760929;
        Bellona_walk_verts[33] = -1.900335;
        Bellona_walk_verts[34] = 6.245026;
        Bellona_walk_verts[35] = -16.685534;
        Bellona_walk_verts[36] = -4.344543;
        Bellona_walk_verts[37] = 6.352506;
        Bellona_walk_verts[38] = -16.675512;
        Bellona_walk_verts[39] = 2.096142;
        Bellona_walk_verts[40] = 6.397522;
        Bellona_walk_verts[41] = -16.691935;
        Bellona_walk_verts[42] = 2.334341;
        Bellona_walk_verts[43] = 6.347497;
        Bellona_walk_verts[44] = 12.79665;
        Bellona_walk_verts[45] = 2.248506;
        Bellona_walk_verts[46] = 6.099999;
        Bellona_walk_verts[47] = 6.867404;
        Bellona_walk_verts[48] = -3.787311;
        Bellona_walk_verts[49] = 6.132514;
        Bellona_walk_verts[50] = -6.073961;
        Bellona_walk_verts[51] = -1.957604;
        Bellona_walk_verts[52] = 4.2;
        Bellona_walk_verts[53] = -5.924174;
        Bellona_walk_verts[54] = -4.249765;
        Bellona_walk_verts[55] = 7.83002;
        Bellona_walk_verts[56] = -18.266996;
        Bellona_walk_verts[57] = 4.276424;
        Bellona_walk_verts[58] = 7.899996;
        Bellona_walk_verts[59] = -18.281185;
        Bellona_walk_verts[60] = -3.380115;
        Bellona_walk_verts[61] = 8.27248;
        Bellona_walk_verts[62] = -23.464428;
        Bellona_walk_verts[63] = 3.23614;
        Bellona_walk_verts[64] = 8.239967;
        Bellona_walk_verts[65] = -23.496559;
        Bellona_walk_verts[66] = -0.043636;
        Bellona_walk_verts[67] = 8.000012;
        Bellona_walk_verts[68] = -19.724649;
        Bellona_walk_verts[69] = 2.245825;
        Bellona_walk_verts[70] = 6.267466;
        Bellona_walk_verts[71] = 14.406764;
        Bellona_walk_verts[72] = 3.084286;
        Bellona_walk_verts[73] = 4.2;
        Bellona_walk_verts[74] = -2.483193;
        Bellona_walk_verts[75] = 4.085165;
        Bellona_walk_verts[76] = 5.992474;
        Bellona_walk_verts[77] = -9.673063;
        Bellona_walk_verts[78] = 3.959181;
        Bellona_walk_verts[79] = 6.179971;
        Bellona_walk_verts[80] = -12.415544;
        Bellona_walk_verts[81] = -2.184919;
        Bellona_walk_verts[82] = 6.309978;
        Bellona_walk_verts[83] = 14.283669;
        Bellona_walk_verts[84] = -3.639226;
        Bellona_walk_verts[85] = 6.29997;
        Bellona_walk_verts[86] = 10.459477;
        Bellona_walk_verts[87] = -3.702711;
        Bellona_walk_verts[88] = 6.19997;
        Bellona_walk_verts[89] = 7.304979;
        Bellona_walk_verts[90] = -4.018497;
        Bellona_walk_verts[91] = 6.227461;
        Bellona_walk_verts[92] = -9.675551;
        Bellona_walk_verts[93] = -4.052227;
        Bellona_walk_verts[94] = 6.244967;
        Bellona_walk_verts[95] = -12.450887;
        Bellona_walk_verts[96] = 3.617576;
        Bellona_walk_verts[97] = 5.834982;
        Bellona_walk_verts[98] = -8.93538;
        Bellona_walk_verts[99] = 5.997654;
        Bellona_walk_verts[100] = 5.919977;
        Bellona_walk_verts[101] = -9.654497;
        Bellona_walk_verts[102] = 0.99471;
        Bellona_walk_verts[103] = 24.420235;
        Bellona_walk_verts[104] = -7.771954;
        Bellona_walk_verts[105] = 2.088913;
        Bellona_walk_verts[106] = 6.122498;
        Bellona_walk_verts[107] = -11.777821;
        Bellona_walk_verts[108] = -1.982713;
        Bellona_walk_verts[109] = 6.039983;
        Bellona_walk_verts[110] = -11.729413;
        Bellona_walk_verts[111] = -5.940667;
        Bellona_walk_verts[112] = 6.239988;
        Bellona_walk_verts[113] = -9.06721;
        Bellona_walk_verts[114] = -3.741445;
        Bellona_walk_verts[115] = 6.289979;
        Bellona_walk_verts[116] = -8.724476;
        Bellona_walk_verts[117] = -0.874374;
        Bellona_walk_verts[118] = 24.552742;
        Bellona_walk_verts[119] = -7.81005;
        Bellona_walk_verts[120] = -5.648031;
        Bellona_walk_verts[121] = 6.224969;
        Bellona_walk_verts[122] = 9.975707;
        Bellona_walk_verts[123] = 5.376439;
        Bellona_walk_verts[124] = 6.274977;
        Bellona_walk_verts[125] = 10.867208;
        Bellona_walk_verts[126] = 1.734676;
        Bellona_walk_verts[127] = 6.304988;
        Bellona_walk_verts[128] = 10.457348;
        Bellona_walk_verts[129] = -1.675345;
        Bellona_walk_verts[130] = 6.144963;
        Bellona_walk_verts[131] = 10.464537;
        Bellona_walk_verts[132] = -0.669515;
        Bellona_walk_verts[133] = 22.147476;
        Bellona_walk_verts[134] = 13.963736;
        Bellona_walk_verts[135] = 0.890155;
        Bellona_walk_verts[136] = 22.122499;
        Bellona_walk_verts[137] = 13.371055;
        Bellona_walk_verts[138] = 1.935416;
        Bellona_walk_verts[139] = 6.354995;
        Bellona_walk_verts[140] = -13.71715;
        Bellona_walk_verts[141] = -1.726291;
        Bellona_walk_verts[142] = 6.379993;
        Bellona_walk_verts[143] = -13.663836;
        Bellona_walk_verts[144] = -3.09321;
        Bellona_walk_verts[145] = 4.2;
        Bellona_walk_verts[146] = -2.591707;
        Bellona_walk_verts[147] = -1.995862;
        Bellona_walk_verts[148] = 4.2;
        Bellona_walk_verts[149] = 5.525457;
        Bellona_walk_verts[150] = 2.764602;
        Bellona_walk_verts[151] = 4.2;
        Bellona_walk_verts[152] = 5.966051;
        Bellona_walk_verts[153] = 1.504405;
        Bellona_walk_verts[154] = 4.2;
        Bellona_walk_verts[155] = -8.730659;
        Bellona_walk_verts[156] = -1.766778;
        Bellona_walk_verts[157] = 4.2;
        Bellona_walk_verts[158] = -8.818238;
        Bellona_walk_verts[159] = -3.044526;
        Bellona_walk_verts[160] = 9.127489;
        Bellona_walk_verts[161] = -30.606407;
        Bellona_walk_verts[162] = 2.723155;
        Bellona_walk_verts[163] = 8.952492;
        Bellona_walk_verts[164] = -30.582321;
        Bellona_walk_verts[165] = -3.931329;
        Bellona_walk_verts[166] = 5.937494;
        Bellona_walk_verts[167] = -15.137913;
        Bellona_walk_verts[168] = 3.898755;
        Bellona_walk_verts[169] = 6.287498;
        Bellona_walk_verts[170] = -15.05635;
        Bellona_walk_verts[171] = 3.825163;
        Bellona_walk_verts[172] = 5.884986;
        Bellona_walk_verts[173] = 7.401224;
        Bellona_walk_verts[174] = 3.654612;
        Bellona_walk_verts[175] = 5.902486;
        Bellona_walk_verts[176] = 10.275395;
        Bellona_walk_verts[177] = -2.563128;
        Bellona_walk_verts[178] = 8.395003;
        Bellona_walk_verts[179] = -26.289528;
        Bellona_walk_verts[180] = 2.197605;
        Bellona_walk_verts[181] = 8.395003;
        Bellona_walk_verts[182] = -26.266846;
        Bellona_walk_verts[183] = -4.758916;
        Bellona_walk_verts[184] = 8.35;
        Bellona_walk_verts[185] = -24.749281;
        Bellona_walk_verts[186] = 4.953067;
        Bellona_walk_verts[187] = 8.35;
        Bellona_walk_verts[188] = -24.8053;
        Bellona_walk_verts[189] = 0.5;
        Bellona_walk_verts[190] = 22.200001;
        Bellona_walk_verts[191] = -21.749281;
        Bellona_walk_verts[192] = -0.5;
        Bellona_walk_verts[193] = 22.200001;
        Bellona_walk_verts[194] = -21.749281;
        Bellona_walk_verts[195] = 0.145505;
        Bellona_walk_verts[196] = 6.35;
        Bellona_walk_verts[197] = -13.121018;
        Bellona_walk_verts[198] = 0.141673;
        Bellona_walk_verts[199] = 4.2;
        Bellona_walk_verts[200] = -11.544656;
        Bellona_walk_verts[201] = -0.244522;
        Bellona_walk_verts[202] = 6.9;
        Bellona_walk_verts[203] = -31.58102;

        Bellona_walk_types[0] = 0;
        Bellona_walk_types[1] = 0;
        Bellona_walk_types[2] = 0;
        Bellona_walk_types[3] = 0;
        Bellona_walk_types[4] = 0;
        Bellona_walk_types[5] = 0;
        Bellona_walk_types[6] = 0;
        Bellona_walk_types[7] = 0;
        Bellona_walk_types[8] = 0;
        Bellona_walk_types[9] = 0;
        Bellona_walk_types[10] = 0;
        Bellona_walk_types[11] = 0;
        Bellona_walk_types[12] = 0;
        Bellona_walk_types[13] = 0;
        Bellona_walk_types[14] = 0;
        Bellona_walk_types[15] = 0;
        Bellona_walk_types[16] = 0;
        Bellona_walk_types[17] = 0;
        Bellona_walk_types[18] = 0;
        Bellona_walk_types[19] = 0;
        Bellona_walk_types[20] = 0;
        Bellona_walk_types[21] = 0;
        Bellona_walk_types[22] = 0;
        Bellona_walk_types[23] = 2;
        Bellona_walk_types[24] = 2;
        Bellona_walk_types[25] = 2;
        Bellona_walk_types[26] = 2;
        Bellona_walk_types[27] = 3;
        Bellona_walk_types[28] = 1;
        Bellona_walk_types[29] = 1;
        Bellona_walk_types[30] = 1;
        Bellona_walk_types[31] = 1;
        Bellona_walk_types[32] = 5;
        Bellona_walk_types[33] = 5;
        Bellona_walk_types[34] = 4;
        Bellona_walk_types[35] = 0;
        Bellona_walk_types[36] = 0;
        Bellona_walk_types[37] = 5;
        Bellona_walk_types[38] = 5;
        Bellona_walk_types[39] = 4;
        Bellona_walk_types[40] = 5;
        Bellona_walk_types[41] = 5;
        Bellona_walk_types[42] = 5;
        Bellona_walk_types[43] = 5;
        Bellona_walk_types[44] = 6;
        Bellona_walk_types[45] = 6;
        Bellona_walk_types[46] = 0;
        Bellona_walk_types[47] = 0;
        Bellona_walk_types[48] = 1;
        Bellona_walk_types[49] = 0;
        Bellona_walk_types[50] = 0;
        Bellona_walk_types[51] = 0;
        Bellona_walk_types[52] = 0;
        Bellona_walk_types[53] = 0;
        Bellona_walk_types[54] = 0;
        Bellona_walk_types[55] = 1;
        Bellona_walk_types[56] = 2;
        Bellona_walk_types[57] = 2;
        Bellona_walk_types[58] = 2;
        Bellona_walk_types[59] = 5;
        Bellona_walk_types[60] = 5;
        Bellona_walk_types[61] = 5;
        Bellona_walk_types[62] = 5;
        Bellona_walk_types[63] = 4;
        Bellona_walk_types[64] = 4;
        Bellona_walk_types[65] = 0;
        Bellona_walk_types[66] = 0;
        Bellona_walk_types[67] = 0;

        Bellona_walk_graph[0] = (1)*256 + (0);
        Bellona_walk_graph[1] = (1)*256 + (2);
        Bellona_walk_graph[2] = (2)*256 + (3);
        Bellona_walk_graph[3] = (3)*256 + (4);
        Bellona_walk_graph[4] = (9)*256 + (8);
        Bellona_walk_graph[5] = (8)*256 + (7);
        Bellona_walk_graph[6] = (6)*256 + (5);
        Bellona_walk_graph[7] = (10)*256 + (13);
        Bellona_walk_graph[8] = (12)*256 + (11);
        Bellona_walk_graph[9] = (18)*256 + (20);
        Bellona_walk_graph[10] = (19)*256 + (10);
        Bellona_walk_graph[11] = (19)*256 + (21);
        Bellona_walk_graph[12] = (27)*256 + (0);
        Bellona_walk_graph[13] = (24)*256 + (6);
        Bellona_walk_graph[14] = (33)*256 + (34);
        Bellona_walk_graph[15] = (35)*256 + (9);
        Bellona_walk_graph[16] = (35)*256 + (32);
        Bellona_walk_graph[17] = (37)*256 + (39);
        Bellona_walk_graph[18] = (37)*256 + (38);
        Bellona_walk_graph[19] = (36)*256 + (4);
        Bellona_walk_graph[20] = (41)*256 + (42);
        Bellona_walk_graph[21] = (45)*256 + (41);
        Bellona_walk_graph[22] = (44)*256 + (40);
        Bellona_walk_graph[23] = (40)*256 + (43);
        Bellona_walk_graph[24] = (16)*256 + (17);
        Bellona_walk_graph[25] = (15)*256 + (14);
        Bellona_walk_graph[26] = (36)*256 + (38);
        Bellona_walk_graph[27] = (36)*256 + (47);
        Bellona_walk_graph[28] = (46)*256 + (13);
        Bellona_walk_graph[29] = (12)*256 + (18);
        Bellona_walk_graph[30] = (21)*256 + (20);
        Bellona_walk_graph[31] = (33)*256 + (32);
        Bellona_walk_graph[32] = (18)*256 + (22);
        Bellona_walk_graph[33] = (19)*256 + (22);
        Bellona_walk_graph[34] = (11)*256 + (47);
        Bellona_walk_graph[35] = (46)*256 + (47);
        Bellona_walk_graph[36] = (35)*256 + (46);
        Bellona_walk_graph[37] = (8)*256 + (7);
        Bellona_walk_graph[38] = (7)*256 + (5);
        Bellona_walk_graph[39] = (23)*256 + (14);
        Bellona_walk_graph[40] = (16)*256 + (2);
        Bellona_walk_graph[41] = (53)*256 + (20);
        Bellona_walk_graph[42] = (54)*256 + (53);
        Bellona_walk_graph[43] = (54)*256 + (21);
        Bellona_walk_graph[44] = (17)*256 + (48);
        Bellona_walk_graph[45] = (49)*256 + (17);
        Bellona_walk_graph[46] = (49)*256 + (50);
        Bellona_walk_graph[47] = (50)*256 + (6);
        Bellona_walk_graph[48] = (6)*256 + (51);
        Bellona_walk_graph[49] = (52)*256 + (51);
        Bellona_walk_graph[50] = (52)*256 + (17);
        Bellona_walk_graph[51] = (55)*256 + (47);
        Bellona_walk_graph[52] = (46)*256 + (56);
        Bellona_walk_graph[53] = (35)*256 + (26);
        Bellona_walk_graph[54] = (4)*256 + (30);
        Bellona_walk_graph[55] = (9)*256 + (25);
        Bellona_walk_graph[56] = (31)*256 + (36);
        Bellona_walk_graph[57] = (1)*256 + (29);
        Bellona_walk_graph[58] = (1)*256 + (43);
        Bellona_walk_graph[59] = (28)*256 + (43);
        Bellona_walk_graph[60] = (7)*256 + (15);
        Bellona_walk_graph[61] = (15)*256 + (42);
        Bellona_walk_graph[62] = (15)*256 + (57);
        Bellona_walk_graph[63] = (58)*256 + (42);
        Bellona_walk_graph[64] = (63)*256 + (62);
        Bellona_walk_graph[65] = (64)*256 + (61);
        Bellona_walk_graph[66] = (62)*256 + (60);
        Bellona_walk_graph[67] = (60)*256 + (21);
        Bellona_walk_graph[68] = (61)*256 + (59);
        Bellona_walk_graph[69] = (20)*256 + (59);
        Bellona_walk_graph[70] = (65)*256 + (46);
        Bellona_walk_graph[71] = (65)*256 + (47);
        Bellona_walk_graph[72] = (65)*256 + (66);
        Bellona_walk_graph[73] = (52)*256 + (66);
        Bellona_walk_graph[74] = (51)*256 + (66);
        Bellona_walk_graph[75] = (67)*256 + (66);
}