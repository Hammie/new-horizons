int resolution_walk_count;
float resolution_walk_verts[198];
int resolution_walk_types[66];
int resolution_walk_graph[73];

void Resolution_walk_init()
{
        resolution_walk_count = 66;

        resolution_walk_verts[0] = 2.102857;
        resolution_walk_verts[1] = 5.482489;
        resolution_walk_verts[2] = -7.104004;
        resolution_walk_verts[3] = -2.666262;
        resolution_walk_verts[4] = 5.417493;
        resolution_walk_verts[5] = -6.979768;
        resolution_walk_verts[6] = 0.764886;
        resolution_walk_verts[7] = 5.64999;
        resolution_walk_verts[8] = -9.831192;
        resolution_walk_verts[9] = -1.111594;
        resolution_walk_verts[10] = 5.67249;
        resolution_walk_verts[11] = -9.799912;
        resolution_walk_verts[12] = 0.90876;
        resolution_walk_verts[13] = 5.897489;
        resolution_walk_verts[14] = -13.712401;
        resolution_walk_verts[15] = -1.00972;
        resolution_walk_verts[16] = 5.872493;
        resolution_walk_verts[17] = -13.638357;
        resolution_walk_verts[18] = -1.412594;
        resolution_walk_verts[19] = 5.814989;
        resolution_walk_verts[20] = -16.022015;
        resolution_walk_verts[21] = 1.447169;
        resolution_walk_verts[22] = 5.822489;
        resolution_walk_verts[23] = -16.29866;
        resolution_walk_verts[24] = 3.595473;
        resolution_walk_verts[25] = 5.344987;
        resolution_walk_verts[26] = -4.919994;
        resolution_walk_verts[27] = -3.746978;
        resolution_walk_verts[28] = 5.312489;
        resolution_walk_verts[29] = -4.881309;
        resolution_walk_verts[30] = 3.835591;
        resolution_walk_verts[31] = 4.999983;
        resolution_walk_verts[32] = -1.405676;
        resolution_walk_verts[33] = -3.866962;
        resolution_walk_verts[34] = 5.002486;
        resolution_walk_verts[35] = -1.366534;
        resolution_walk_verts[36] = 2.827748;
        resolution_walk_verts[37] = 3.43248;
        resolution_walk_verts[38] = -0.154403;
        resolution_walk_verts[39] = -2.971048;
        resolution_walk_verts[40] = 3.469986;
        resolution_walk_verts[41] = -0.149572;
        resolution_walk_verts[42] = 1.772701;
        resolution_walk_verts[43] = 3.437485;
        resolution_walk_verts[44] = -4.247013;
        resolution_walk_verts[45] = -1.893849;
        resolution_walk_verts[46] = 3.462487;
        resolution_walk_verts[47] = -4.178857;
        resolution_walk_verts[48] = -3.789527;
        resolution_walk_verts[49] = 5.00499;
        resolution_walk_verts[50] = -4.358662;
        resolution_walk_verts[51] = 3.711264;
        resolution_walk_verts[52] = 4.984985;
        resolution_walk_verts[53] = -4.321367;
        resolution_walk_verts[54] = 1.482323;
        resolution_walk_verts[55] = 3.597479;
        resolution_walk_verts[56] = 2.010895;
        resolution_walk_verts[57] = -1.658896;
        resolution_walk_verts[58] = 3.609979;
        resolution_walk_verts[59] = 2.080782;
        resolution_walk_verts[60] = 1.430472;
        resolution_walk_verts[61] = 3.522482;
        resolution_walk_verts[62] = 4.094897;
        resolution_walk_verts[63] = -1.595875;
        resolution_walk_verts[64] = 3.524979;
        resolution_walk_verts[65] = 4.18414;
        resolution_walk_verts[66] = 2.697508;
        resolution_walk_verts[67] = 3.489977;
        resolution_walk_verts[68] = 5.689403;
        resolution_walk_verts[69] = -2.640183;
        resolution_walk_verts[70] = 3.509987;
        resolution_walk_verts[71] = 5.571383;
        resolution_walk_verts[72] = 3.635596;
        resolution_walk_verts[73] = 5.064989;
        resolution_walk_verts[74] = 6.794184;
        resolution_walk_verts[75] = -3.572277;
        resolution_walk_verts[76] = 5.042488;
        resolution_walk_verts[77] = 6.824593;
        resolution_walk_verts[78] = 3.432838;
        resolution_walk_verts[79] = 5.114989;
        resolution_walk_verts[80] = 9.639534;
        resolution_walk_verts[81] = -3.517962;
        resolution_walk_verts[82] = 5.057486;
        resolution_walk_verts[83] = 9.581755;
        resolution_walk_verts[84] = -3.499927;
        resolution_walk_verts[85] = 5.38499;
        resolution_walk_verts[86] = 10.216795;
        resolution_walk_verts[87] = 3.401763;
        resolution_walk_verts[88] = 5.43749;
        resolution_walk_verts[89] = 10.15309;
        resolution_walk_verts[90] = -1.538;
        resolution_walk_verts[91] = 3.762482;
        resolution_walk_verts[92] = 8.719629;
        resolution_walk_verts[93] = 1.506439;
        resolution_walk_verts[94] = 3.692485;
        resolution_walk_verts[95] = 8.715345;
        resolution_walk_verts[96] = 2.584555;
        resolution_walk_verts[97] = 5.504984;
        resolution_walk_verts[98] = 12.375438;
        resolution_walk_verts[99] = -2.552099;
        resolution_walk_verts[100] = 5.517489;
        resolution_walk_verts[101] = 12.420109;
        resolution_walk_verts[102] = -2.483063;
        resolution_walk_verts[103] = 5.732491;
        resolution_walk_verts[104] = 15.081047;
        resolution_walk_verts[105] = 2.311426;
        resolution_walk_verts[106] = 5.714985;
        resolution_walk_verts[107] = 15.149386;
        resolution_walk_verts[108] = -4.271152;
        resolution_walk_verts[109] = 6.389995;
        resolution_walk_verts[110] = -17.391794;
        resolution_walk_verts[111] = -5.058561;
        resolution_walk_verts[112] = 5.502492;
        resolution_walk_verts[113] = -5.909971;
        resolution_walk_verts[114] = -4.703236;
        resolution_walk_verts[115] = 5.914992;
        resolution_walk_verts[116] = 13.776051;
        resolution_walk_verts[117] = -1.239409;
        resolution_walk_verts[118] = 18.270117;
        resolution_walk_verts[119] = 16.564026;
        resolution_walk_verts[120] = -1.460929;
        resolution_walk_verts[121] = 19.882616;
        resolution_walk_verts[122] = -3.379464;
        resolution_walk_verts[123] = -1.03932;
        resolution_walk_verts[124] = 17.317656;
        resolution_walk_verts[125] = -16.763388;
        resolution_walk_verts[126] = 4.271152;
        resolution_walk_verts[127] = 6.389995;
        resolution_walk_verts[128] = -17.391794;
        resolution_walk_verts[129] = 5.058561;
        resolution_walk_verts[130] = 5.502492;
        resolution_walk_verts[131] = -5.909971;
        resolution_walk_verts[132] = 4.703236;
        resolution_walk_verts[133] = 5.914992;
        resolution_walk_verts[134] = 13.776051;
        resolution_walk_verts[135] = 1.239409;
        resolution_walk_verts[136] = 18.270117;
        resolution_walk_verts[137] = 16.564026;
        resolution_walk_verts[138] = 1.460929;
        resolution_walk_verts[139] = 19.882616;
        resolution_walk_verts[140] = -3.379464;
        resolution_walk_verts[141] = 0.867084;
        resolution_walk_verts[142] = 17.317656;
        resolution_walk_verts[143] = -16.772936;
        resolution_walk_verts[144] = -2.046181;
        resolution_walk_verts[145] = 5.789989;
        resolution_walk_verts[146] = 16.624447;
        resolution_walk_verts[147] = 2.046181;
        resolution_walk_verts[148] = 5.789989;
        resolution_walk_verts[149] = 16.624447;
        resolution_walk_verts[150] = -2.388127;
        resolution_walk_verts[151] = 3.477482;
        resolution_walk_verts[152] = -1.367382;
        resolution_walk_verts[153] = -2.206027;
        resolution_walk_verts[154] = 3.472481;
        resolution_walk_verts[155] = 1.605068;
        resolution_walk_verts[156] = -1.967656;
        resolution_walk_verts[157] = 3.542481;
        resolution_walk_verts[158] = 4.218207;
        resolution_walk_verts[159] = -2.147936;
        resolution_walk_verts[160] = 3.499982;
        resolution_walk_verts[161] = 8.21226;
        resolution_walk_verts[162] = 2.388127;
        resolution_walk_verts[163] = 3.477482;
        resolution_walk_verts[164] = -1.367382;
        resolution_walk_verts[165] = 2.206027;
        resolution_walk_verts[166] = 3.472481;
        resolution_walk_verts[167] = 1.605068;
        resolution_walk_verts[168] = 1.967656;
        resolution_walk_verts[169] = 3.542481;
        resolution_walk_verts[170] = 4.218207;
        resolution_walk_verts[171] = 2.147936;
        resolution_walk_verts[172] = 3.499982;
        resolution_walk_verts[173] = 8.21226;
        resolution_walk_verts[174] = -1.541024;
        resolution_walk_verts[175] = 5.672488;
        resolution_walk_verts[176] = -10.04822;
        resolution_walk_verts[177] = -1.725422;
        resolution_walk_verts[178] = 5.719989;
        resolution_walk_verts[179] = -11.840373;
        resolution_walk_verts[180] = -1.259948;
        resolution_walk_verts[181] = 5.847489;
        resolution_walk_verts[182] = -13.742375;
        resolution_walk_verts[183] = -1.500085;
        resolution_walk_verts[184] = 5.774993;
        resolution_walk_verts[185] = -15.266323;
        resolution_walk_verts[186] = 1.541024;
        resolution_walk_verts[187] = 5.672488;
        resolution_walk_verts[188] = -10.04822;
        resolution_walk_verts[189] = 1.725422;
        resolution_walk_verts[190] = 5.719989;
        resolution_walk_verts[191] = -11.840373;
        resolution_walk_verts[192] = 1.259948;
        resolution_walk_verts[193] = 5.847489;
        resolution_walk_verts[194] = -13.742375;
        resolution_walk_verts[195] = 1.500085;
        resolution_walk_verts[196] = 5.774993;
        resolution_walk_verts[197] = -15.266323;

        resolution_walk_types[0] = 0;
        resolution_walk_types[1] = 0;
        resolution_walk_types[2] = 0;
        resolution_walk_types[3] = 0;
        resolution_walk_types[4] = 0;
        resolution_walk_types[5] = 0;
        resolution_walk_types[6] = 0;
        resolution_walk_types[7] = 0;
        resolution_walk_types[8] = 0;
        resolution_walk_types[9] = 0;
        resolution_walk_types[10] = 5;
        resolution_walk_types[11] = 5;
        resolution_walk_types[12] = 5;
        resolution_walk_types[13] = 5;
        resolution_walk_types[14] = 0;
        resolution_walk_types[15] = 0;
        resolution_walk_types[16] = 0;
        resolution_walk_types[17] = 0;
        resolution_walk_types[18] = 0;
        resolution_walk_types[19] = 0;
        resolution_walk_types[20] = 0;
        resolution_walk_types[21] = 0;
        resolution_walk_types[22] = 5;
        resolution_walk_types[23] = 5;
        resolution_walk_types[24] = 5;
        resolution_walk_types[25] = 5;
        resolution_walk_types[26] = 0;
        resolution_walk_types[27] = 0;
        resolution_walk_types[28] = 0;
        resolution_walk_types[29] = 0;
        resolution_walk_types[30] = 0;
        resolution_walk_types[31] = 0;
        resolution_walk_types[32] = 0;
        resolution_walk_types[33] = 0;
        resolution_walk_types[34] = 0;
        resolution_walk_types[35] = 0;
        resolution_walk_types[36] = 5;
        resolution_walk_types[37] = 5;
        resolution_walk_types[38] = 5;
        resolution_walk_types[39] = 6;
        resolution_walk_types[40] = 4;
        resolution_walk_types[41] = 4;
        resolution_walk_types[42] = 5;
        resolution_walk_types[43] = 5;
        resolution_walk_types[44] = 5;
        resolution_walk_types[45] = 6;
        resolution_walk_types[46] = 4;
        resolution_walk_types[47] = 4;
        resolution_walk_types[48] = 3;
        resolution_walk_types[49] = 3;
        resolution_walk_types[50] = 1;
        resolution_walk_types[51] = 1;
        resolution_walk_types[52] = 1;
        resolution_walk_types[53] = 1;
        resolution_walk_types[54] = 2;
        resolution_walk_types[55] = 2;
        resolution_walk_types[56] = 2;
        resolution_walk_types[57] = 2;
        resolution_walk_types[58] = 1;
        resolution_walk_types[59] = 1;
        resolution_walk_types[60] = 1;
        resolution_walk_types[61] = 1;
        resolution_walk_types[62] = 2;
        resolution_walk_types[63] = 2;
        resolution_walk_types[64] = 2;
        resolution_walk_types[65] = 2;

        resolution_walk_graph[0] = (1)*256 + (0);
        resolution_walk_graph[1] = (2)*256 + (0);
        resolution_walk_graph[2] = (3)*256 + (1);
        resolution_walk_graph[3] = (4)*256 + (2);
        resolution_walk_graph[4] = (5)*256 + (3);
        resolution_walk_graph[5] = (2)*256 + (3);
        resolution_walk_graph[6] = (4)*256 + (5);
        resolution_walk_graph[7] = (6)*256 + (5);
        resolution_walk_graph[8] = (7)*256 + (4);
        resolution_walk_graph[9] = (0)*256 + (8);
        resolution_walk_graph[10] = (1)*256 + (9);
        resolution_walk_graph[11] = (9)*256 + (16);
        resolution_walk_graph[12] = (17)*256 + (8);
        resolution_walk_graph[13] = (10)*256 + (12);
        resolution_walk_graph[14] = (11)*256 + (13);
        resolution_walk_graph[15] = (12)*256 + (13);
        resolution_walk_graph[16] = (12)*256 + (14);
        resolution_walk_graph[17] = (13)*256 + (15);
        resolution_walk_graph[18] = (14)*256 + (15);
        resolution_walk_graph[19] = (17)*256 + (10);
        resolution_walk_graph[20] = (16)*256 + (11);
        resolution_walk_graph[21] = (19)*256 + (13);
        resolution_walk_graph[22] = (21)*256 + (19);
        resolution_walk_graph[23] = (12)*256 + (18);
        resolution_walk_graph[24] = (20)*256 + (18);
        resolution_walk_graph[25] = (20)*256 + (21);
        resolution_walk_graph[26] = (21)*256 + (23);
        resolution_walk_graph[27] = (20)*256 + (22);
        resolution_walk_graph[28] = (22)*256 + (24);
        resolution_walk_graph[29] = (23)*256 + (25);
        resolution_walk_graph[30] = (24)*256 + (26);
        resolution_walk_graph[31] = (25)*256 + (27);
        resolution_walk_graph[32] = (26)*256 + (29);
        resolution_walk_graph[33] = (27)*256 + (28);
        resolution_walk_graph[34] = (21)*256 + (30);
        resolution_walk_graph[35] = (20)*256 + (31);
        resolution_walk_graph[36] = (30)*256 + (31);
        resolution_walk_graph[37] = (28)*256 + (33);
        resolution_walk_graph[38] = (29)*256 + (32);
        resolution_walk_graph[39] = (32)*256 + (33);
        resolution_walk_graph[40] = (34)*256 + (33);
        resolution_walk_graph[41] = (35)*256 + (34);
        resolution_walk_graph[42] = (35)*256 + (32);
        resolution_walk_graph[43] = (1)*256 + (37);
        resolution_walk_graph[44] = (6)*256 + (36);
        resolution_walk_graph[45] = (33)*256 + (38);
        resolution_walk_graph[46] = (39)*256 + (38);
        resolution_walk_graph[47] = (40)*256 + (37);
        resolution_walk_graph[48] = (41)*256 + (36);
        resolution_walk_graph[49] = (47)*256 + (42);
        resolution_walk_graph[50] = (46)*256 + (43);
        resolution_walk_graph[51] = (45)*256 + (44);
        resolution_walk_graph[52] = (35)*256 + (44);
        resolution_walk_graph[53] = (42)*256 + (7);
        resolution_walk_graph[54] = (43)*256 + (0);
        resolution_walk_graph[55] = (34)*256 + (48);
        resolution_walk_graph[56] = (35)*256 + (49);
        resolution_walk_graph[57] = (19)*256 + (50);
        resolution_walk_graph[58] = (19)*256 + (51);
        resolution_walk_graph[59] = (21)*256 + (52);
        resolution_walk_graph[60] = (30)*256 + (53);
        resolution_walk_graph[61] = (18)*256 + (55);
        resolution_walk_graph[62] = (18)*256 + (54);
        resolution_walk_graph[63] = (20)*256 + (56);
        resolution_walk_graph[64] = (31)*256 + (57);
        resolution_walk_graph[65] = (3)*256 + (58);
        resolution_walk_graph[66] = (3)*256 + (59);
        resolution_walk_graph[67] = (5)*256 + (60);
        resolution_walk_graph[68] = (5)*256 + (61);
        resolution_walk_graph[69] = (2)*256 + (62);
        resolution_walk_graph[70] = (2)*256 + (63);
        resolution_walk_graph[71] = (4)*256 + (64);
        resolution_walk_graph[72] = (4)*256 + (65);
}