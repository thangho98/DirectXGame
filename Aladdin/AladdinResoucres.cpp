﻿#include "AladdinResoucres.h"
#include "Define.h"


void AladdinResoucres::LoadTextures()
{
	textures->Add(ID_TEX_BBOX, L"resources\\textures\\bbox.png", D3DCOLOR_XRGB(255, 255, 255));
	textures->Add(ID_TEX_ALADDIN_GO_RIGHT, L"resources\\textures\\aladdinGoRight.png", D3DCOLOR_XRGB(255, 0, 255));
	textures->Add(ID_TEX_ALADDIN_GO_LEFT, L"resources\\textures\\aladdinGoLeft.png", D3DCOLOR_XRGB(255, 0, 255));

	//item
	textures->Add(ID_TEX_ITEM_1, L"resources\\textures\\aladdingenesis_aladdin_state_full.png", D3DCOLOR_XRGB(106, 148, 189));
	textures->Add(ID_TEX_ITEM_2, L"resources\\textures\\Items.png", D3DCOLOR_XRGB(248, 0, 248));

	//map
	textures->Add(ID_TEX_MAP_ONE, L"resources\\mapread\\lv1\\lv1.png", D3DCOLOR_XRGB(163, 73, 164));
}

void AladdinResoucres::LoadSprites()
{
	LPDIRECT3DTEXTURE9 texAladdinGoRight = textures->Get(ID_TEX_ALADDIN_GO_RIGHT);
	LPDIRECT3DTEXTURE9 texAladdinGoLeft = textures->Get(ID_TEX_ALADDIN_GO_LEFT);

	sprites->Add(10001, 3, 9, 41, 59, texAladdinGoRight);		// idle right

	sprites->Add(10002, 6, 57, 46, 134, texAladdinGoRight);		// standing idle right
	sprites->Add(10003, 51, 57, 112, 134, texAladdinGoRight);
	sprites->Add(10004, 116, 57, 178, 134, texAladdinGoRight);
	sprites->Add(10005, 180, 57, 221, 134, texAladdinGoRight);
	sprites->Add(10006, 228, 57, 267, 134, texAladdinGoRight);
	sprites->Add(10007, 275, 57, 311, 134, texAladdinGoRight);
	sprites->Add(10008, 319, 57, 359, 134, texAladdinGoRight);
	sprites->Add(10009, 366, 57, 407, 134, texAladdinGoRight);
	sprites->Add(10010, 417, 57, 454, 134, texAladdinGoRight);
	sprites->Add(10011, 465, 57, 503, 134, texAladdinGoRight);
	sprites->Add(10012, 516, 57, 554, 134, texAladdinGoRight);
	sprites->Add(10013, 568, 57, 608, 134, texAladdinGoRight);
	sprites->Add(10014, 619, 57, 660, 134, texAladdinGoRight);
	sprites->Add(10015, 668, 57, 708, 134, texAladdinGoRight);
	sprites->Add(10016, 715, 57, 754, 134, texAladdinGoRight);

	sprites->Add(10021, 205, 500, 247, 551, texAladdinGoRight);		// sitting down right
	sprites->Add(10022, 258, 500, 306, 551, texAladdinGoRight);
	sprites->Add(10023, 315, 500, 369, 551, texAladdinGoRight);
	sprites->Add(10024, 378, 500, 431, 551, texAladdinGoRight);

	sprites->Add(10031, 11, 490, 50, 549, texAladdinGoRight);		// looking up right
	sprites->Add(10032, 59, 490, 104, 549, texAladdinGoRight);
	sprites->Add(10033, 111, 490, 160, 549, texAladdinGoRight);

	sprites->Add(10101, 14, 1215, 54, 1273, texAladdinGoRight);		// walk	right
	sprites->Add(10102, 66, 1215, 109, 1273, texAladdinGoRight);
	sprites->Add(10103, 120, 1215, 161, 1273, texAladdinGoRight);
	sprites->Add(10104, 171, 1215, 212, 1273, texAladdinGoRight);
	sprites->Add(10105, 220, 1215, 272, 1273, texAladdinGoRight);
	sprites->Add(10106, 279, 1215, 325, 1273, texAladdinGoRight);
	sprites->Add(10107, 334, 1215, 376, 1273, texAladdinGoRight);
	sprites->Add(10108, 386, 1215, 427, 1273, texAladdinGoRight);
	sprites->Add(10109, 440, 1215, 475, 1273, texAladdinGoRight);
	sprites->Add(10110, 488, 1215, 537, 1273, texAladdinGoRight);
	sprites->Add(10111, 547, 1215, 602, 1273, texAladdinGoRight);
	sprites->Add(10112, 611, 1215, 666, 1273, texAladdinGoRight);
	sprites->Add(10113, 679, 1215, 723, 1273, texAladdinGoRight);

	sprites->Add(10121, 11, 1283, 68, 1352, texAladdinGoRight);		// stop	right
	sprites->Add(10122, 83, 1283, 127, 1352, texAladdinGoRight);
	sprites->Add(10123, 134, 1283, 185, 1352, texAladdinGoRight);
	sprites->Add(10124, 200, 1283, 246, 1352, texAladdinGoRight);
	sprites->Add(10125, 256, 1283, 298, 1352, texAladdinGoRight);
	sprites->Add(10126, 309, 1283, 364, 1352, texAladdinGoRight);
	sprites->Add(10127, 376, 1283, 428, 1352, texAladdinGoRight);
	sprites->Add(10128, 437, 1283, 483, 1352, texAladdinGoRight);
	sprites->Add(10129, 498, 1283, 549, 1352, texAladdinGoRight);

	sprites->Add(10201, 8, 808, 67, 905, texAladdinGoRight);		// jump	right
	sprites->Add(10202, 75, 808, 127, 905, texAladdinGoRight);
	sprites->Add(10203, 137, 808, 191, 905, texAladdinGoRight);
	sprites->Add(10204, 203, 808, 257, 905, texAladdinGoRight);
	sprites->Add(10205, 269, 808, 320, 905, texAladdinGoRight);
	sprites->Add(10206, 336, 808, 374, 905, texAladdinGoRight);
	sprites->Add(10207, 390, 808, 425, 905, texAladdinGoRight);
	sprites->Add(10208, 448, 808, 482, 905, texAladdinGoRight);
	sprites->Add(10209, 504, 808, 538, 905, texAladdinGoRight);
	sprites->Add(10210, 564, 808, 598, 905, texAladdinGoRight);

	sprites->Add(10221, 10, 680, 51, 765, texAladdinGoRight);		// run jump	right
	sprites->Add(10222, 66, 680, 111, 765, texAladdinGoRight);
	sprites->Add(10223, 124, 680, 181, 765, texAladdinGoRight);
	sprites->Add(10224, 199, 680, 257, 765, texAladdinGoRight);
	sprites->Add(10225, 273, 680, 334, 765, texAladdinGoRight);
	sprites->Add(10226, 350, 680, 408, 765, texAladdinGoRight);
	sprites->Add(10227, 419, 680, 472, 765, texAladdinGoRight);
	sprites->Add(10228, 491, 680, 541, 765, texAladdinGoRight);
	sprites->Add(10229, 560, 680, 719, 765, texAladdinGoRight);

	sprites->Add(10301, 5, 314, 50, 388, texAladdinGoRight);		// standing slash right
	sprites->Add(10302, 54, 314, 105, 388, texAladdinGoRight);
	sprites->Add(10303, 115, 314, 160, 388, texAladdinGoRight);
	sprites->Add(10304, 171, 314, 253, 388, texAladdinGoRight);
	sprites->Add(10305, 260, 314, 311, 388, texAladdinGoRight);

	sprites->Add(10311, 9, 639, 56, 673, texAladdinGoRight);		// sitting slash right
	sprites->Add(10312, 64, 639, 109, 673, texAladdinGoRight);
	sprites->Add(10313, 115, 639, 186, 673, texAladdinGoRight);
	sprites->Add(10314, 193, 639, 285, 673, texAladdinGoRight);
	sprites->Add(10315, 298, 639, 382, 673, texAladdinGoRight);
	sprites->Add(10316, 392, 639, 463, 673, texAladdinGoRight);
	sprites->Add(10317, 475, 639, 520, 673, texAladdinGoRight);

	sprites->Add(10321, 11, 386, 53, 473, texAladdinGoRight);		// looking up slash right
	sprites->Add(10322, 66, 386, 104, 473, texAladdinGoRight);
	sprites->Add(10323, 111, 386, 176, 473, texAladdinGoRight);
	sprites->Add(10324, 193, 386, 240, 473, texAladdinGoRight);
	sprites->Add(10325, 249, 386, 296, 473, texAladdinGoRight);
	sprites->Add(10326, 298, 386, 352, 473, texAladdinGoRight);
	sprites->Add(10327, 363, 386, 437, 473, texAladdinGoRight);
	sprites->Add(10328, 452, 386, 506, 473, texAladdinGoRight);
	sprites->Add(10329, 520, 386, 569, 473, texAladdinGoRight);
	sprites->Add(10330, 584, 386, 635, 473, texAladdinGoRight);
	sprites->Add(10331, 644, 386, 697, 473, texAladdinGoRight);
	sprites->Add(10332, 704, 386, 750, 473, texAladdinGoRight);

	sprites->Add(10341, 13, 1067, 65, 1142, texAladdinGoRight);		// jumping slash right
	sprites->Add(10342, 75, 1067, 125, 1142, texAladdinGoRight);
	sprites->Add(10343, 140, 1067, 187, 1142, texAladdinGoRight);
	sprites->Add(10344, 199, 1067, 151, 1142, texAladdinGoRight);
	sprites->Add(10345, 266, 1067, 349, 1142, texAladdinGoRight);
	sprites->Add(10346, 361, 1067, 408, 1142, texAladdinGoRight);

	sprites->Add(10401, 7, 231, 50, 291, texAladdinGoRight);		// throw apple right
	sprites->Add(10402, 57, 231, 98, 291, texAladdinGoRight);
	sprites->Add(10403, 109, 231, 147, 291, texAladdinGoRight);
	sprites->Add(10404, 163, 231, 209, 291, texAladdinGoRight);
	sprites->Add(10405, 221, 231, 258, 291, texAladdinGoRight);
	sprites->Add(10406, 268, 231, 320, 291, texAladdinGoRight);

	sprites->Add(10411, 9, 567, 484, 619, texAladdinGoRight);		// sitting throw apple right
	sprites->Add(10412, 58, 567, 95, 619, texAladdinGoRight);
	sprites->Add(10413, 107, 567, 157, 619, texAladdinGoRight);
	sprites->Add(10414, 164, 567, 246, 619, texAladdinGoRight);
	sprites->Add(10415, 256, 567, 313, 619, texAladdinGoRight);

	sprites->Add(10421, 19, 1005, 68, 1064, texAladdinGoRight);		// jumping throw apple right
	sprites->Add(10422, 77, 1005, 120, 1064, texAladdinGoRight);
	sprites->Add(10423, 132, 1005, 171, 1064, texAladdinGoRight);
	sprites->Add(10424, 185, 1005, 237, 1064, texAladdinGoRight);
	sprites->Add(10425, 253, 1005, 293, 1064, texAladdinGoRight);

	sprites->Add(10501, 11, 1358, 40, 1450, texAladdinGoRight);		// climbing
	sprites->Add(10502, 53, 1358, 81, 1450, texAladdinGoRight);
	sprites->Add(10503, 94, 1358, 122, 1450, texAladdinGoRight);
	sprites->Add(10504, 133, 1358, 175, 1450, texAladdinGoRight);
	sprites->Add(10505, 186, 1358, 217, 1450, texAladdinGoRight);
	sprites->Add(10506, 231, 1358, 260, 1450, texAladdinGoRight);
	sprites->Add(10507, 274, 1358, 302, 1450, texAladdinGoRight);
	sprites->Add(10508, 314, 1358, 346, 1450, texAladdinGoRight);
	sprites->Add(10509, 356, 1358, 398, 1450, texAladdinGoRight);
	sprites->Add(10510, 406, 1358, 434, 1450, texAladdinGoRight);

	sprites->Add(10521, 10, 1866, 44, 1950, texAladdinGoRight);	// falling after climbing
	sprites->Add(10522, 65, 1866, 90, 1950, texAladdinGoRight);
	sprites->Add(10523, 100, 1866, 136, 1950, texAladdinGoRight);
	sprites->Add(10524, 144, 1866, 192, 1950, texAladdinGoRight);
	sprites->Add(10525, 204, 1866, 263, 1950, texAladdinGoRight);
	sprites->Add(10526, 281, 1866, 340, 1950, texAladdinGoRight);
	sprites->Add(10527, 354, 1866, 406, 1950, texAladdinGoRight);
	sprites->Add(10528, 422, 1866, 469, 1950, texAladdinGoRight);
	sprites->Add(10529, 482, 1866, 527, 1950, texAladdinGoRight);

	sprites->Add(10531, 1058, 1769, 1106, 1864, texAladdinGoLeft);	// climbing slash right
	sprites->Add(10532, 988, 1769, 1040, 1864, texAladdinGoLeft);
	sprites->Add(10533, 914, 1769, 975, 1864, texAladdinGoLeft);
	sprites->Add(10534, 821, 1769, 874, 1864, texAladdinGoLeft);
	sprites->Add(10535, 739, 1769, 794, 1864, texAladdinGoLeft);
	sprites->Add(10536, 646, 1769, 718, 1864, texAladdinGoLeft);
	sprites->Add(10537, 574, 1769, 622, 1864, texAladdinGoLeft);

	sprites->Add(10541, 1071, 1664, 1108, 1753, texAladdinGoLeft);	// climbing throw apple right
	sprites->Add(10542, 1015, 1664, 1056, 1753, texAladdinGoLeft);
	sprites->Add(10543, 945, 1664, 996, 1753, texAladdinGoLeft);
	sprites->Add(10544, 898, 1664, 929, 1753, texAladdinGoLeft);
	sprites->Add(10545, 828, 1664, 885, 1753, texAladdinGoLeft);

	sprites->Add(10601, 9, 2107, 61, 2149, texAladdinGoRight);	// ride the carpet right
	sprites->Add(10602, 68, 2107, 120, 2149, texAladdinGoRight);
	sprites->Add(10603, 129, 2107, 181, 2149, texAladdinGoRight);
	sprites->Add(10604, 190, 2107, 242, 2149, texAladdinGoRight);
	sprites->Add(10605, 259, 2107, 63, 2149, texAladdinGoRight);
	sprites->Add(10606, 333, 2107, 388, 2149, texAladdinGoRight);


	//left

	sprites->Add(11001, 1081, 9, 1118, 59, texAladdinGoLeft);	// idle left	

	sprites->Add(11002, 1075, 57, 1115, 134, texAladdinGoLeft);		// standing left
	sprites->Add(11003, 1009, 57, 1070, 134, texAladdinGoLeft);
	sprites->Add(11004, 943, 57, 1005, 134, texAladdinGoLeft);
	sprites->Add(11005, 900, 57, 941, 134, texAladdinGoLeft);
	sprites->Add(11006, 854, 57, 893, 134, texAladdinGoLeft);
	sprites->Add(11007, 810, 57, 846, 134, texAladdinGoLeft);
	sprites->Add(11008, 762, 57, 802, 134, texAladdinGoLeft);
	sprites->Add(11009, 720, 57, 755, 134, texAladdinGoLeft);
	sprites->Add(11010, 667, 57, 704, 134, texAladdinGoLeft);
	sprites->Add(11011, 618, 57, 656, 134, texAladdinGoLeft);
	sprites->Add(10012, 567, 57, 605, 134, texAladdinGoLeft);
	sprites->Add(11013, 513, 57, 553, 134, texAladdinGoLeft);
	sprites->Add(11014, 461, 57, 502, 134, texAladdinGoLeft);
	sprites->Add(11015, 413, 57, 453, 134, texAladdinGoLeft);
	sprites->Add(11016, 367, 57, 406, 134, texAladdinGoLeft);

	sprites->Add(11021, 874, 500, 916, 551, texAladdinGoLeft);		// sitting down left
	sprites->Add(11022, 815, 500, 863, 551, texAladdinGoLeft);
	sprites->Add(11023, 752, 500, 806, 551, texAladdinGoLeft);
	sprites->Add(11024, 690, 500, 743, 551, texAladdinGoLeft);

	sprites->Add(11031, 1071, 490, 1110, 549, texAladdinGoLeft);		// looking up left
	sprites->Add(11032, 1017, 490, 1062, 549, texAladdinGoLeft);
	sprites->Add(11033, 961, 490, 1010, 549, texAladdinGoLeft);

	sprites->Add(11101, 1067, 1215, 1107, 1273, texAladdinGoLeft);		// walk	left
	sprites->Add(11102, 1012, 1215, 1055, 1273, texAladdinGoLeft);
	sprites->Add(11103, 960, 1215, 1001, 1273, texAladdinGoLeft);
	sprites->Add(11104, 909, 1215, 950, 1273, texAladdinGoLeft);
	sprites->Add(11105, 849, 1215, 901, 1273, texAladdinGoLeft);
	sprites->Add(11106, 796, 1215, 842, 1273, texAladdinGoLeft);
	sprites->Add(11107, 745, 1215, 787, 1273, texAladdinGoLeft);
	sprites->Add(11108, 694, 1215, 735, 1273, texAladdinGoLeft);
	sprites->Add(11109, 646, 1215, 681, 1273, texAladdinGoLeft);
	sprites->Add(11110, 584, 1215, 633, 1273, texAladdinGoLeft);
	sprites->Add(11111, 519, 1215, 574, 1273, texAladdinGoLeft);
	sprites->Add(11112, 455, 1215, 510, 1273, texAladdinGoLeft);
	sprites->Add(11113, 398, 1215, 442, 1273, texAladdinGoLeft);

	sprites->Add(11121, 1053, 1283, 1110, 1352, texAladdinGoLeft);		// stop	left
	sprites->Add(11122, 994, 1283, 1038, 1352, texAladdinGoLeft);
	sprites->Add(11123, 936, 1283, 987, 1352, texAladdinGoLeft);
	sprites->Add(11124, 875, 1283, 921, 1352, texAladdinGoLeft);
	sprites->Add(11125, 823, 1283, 865, 1352, texAladdinGoLeft);
	sprites->Add(11126, 757, 1283, 812, 1352, texAladdinGoLeft);
	sprites->Add(11127, 693, 1283, 745, 1352, texAladdinGoLeft);
	sprites->Add(11128, 638, 1283, 684, 1352, texAladdinGoLeft);
	sprites->Add(11129, 572, 1283, 623, 1352, texAladdinGoLeft);

	sprites->Add(11201, 1054, 808, 1113, 905, texAladdinGoLeft);		// jump	left
	sprites->Add(11202, 994, 808, 1046, 905, texAladdinGoLeft);
	sprites->Add(11203, 930, 808, 984, 905, texAladdinGoLeft);
	sprites->Add(11204, 864, 808, 918, 905, texAladdinGoLeft);
	sprites->Add(11205, 801, 808, 852, 905, texAladdinGoLeft);
	sprites->Add(11206, 747, 808, 785, 905, texAladdinGoLeft);
	sprites->Add(11207, 696, 808, 731, 905, texAladdinGoLeft);
	sprites->Add(11208, 639, 808, 673, 905, texAladdinGoLeft);
	sprites->Add(11209, 583, 808, 617, 905, texAladdinGoLeft);
	sprites->Add(11210, 523, 808, 557, 905, texAladdinGoLeft);

	sprites->Add(11221, 1070, 680, 1111, 765, texAladdinGoLeft);		// run jump	left
	sprites->Add(11222, 1010, 680, 1055, 765, texAladdinGoLeft);
	sprites->Add(11223, 940, 680, 957, 765, texAladdinGoLeft);
	sprites->Add(11224, 864, 680, 922, 765, texAladdinGoLeft);
	sprites->Add(11225, 787, 680, 848, 765, texAladdinGoLeft);
	sprites->Add(11226, 713, 680, 771, 765, texAladdinGoLeft);
	sprites->Add(11227, 649, 680, 702, 765, texAladdinGoLeft);
	sprites->Add(11228, 580, 680, 630, 765, texAladdinGoLeft);
	sprites->Add(11229, 502, 680, 561, 765, texAladdinGoLeft);

	sprites->Add(11301, 1071, 314, 1116, 388, texAladdinGoLeft);		// standing slash left
	sprites->Add(11302, 1016, 314, 1067, 388, texAladdinGoLeft);
	sprites->Add(11303, 961, 314, 1006, 388, texAladdinGoLeft);
	sprites->Add(11304, 868, 314, 950, 388, texAladdinGoLeft);
	sprites->Add(11305, 810, 314, 861, 388, texAladdinGoLeft);

	sprites->Add(11311, 1065, 639, 1112, 673, texAladdinGoLeft);		// sitting slash left
	sprites->Add(11312, 1012, 639, 1057, 673, texAladdinGoLeft);
	sprites->Add(11313, 935, 639, 1006, 673, texAladdinGoLeft);
	sprites->Add(11314, 836, 639, 928, 673, texAladdinGoLeft);
	sprites->Add(11315, 739, 639, 823, 673, texAladdinGoLeft);
	sprites->Add(11316, 658, 639, 729, 673, texAladdinGoLeft);
	sprites->Add(11317, 601, 639, 646, 673, texAladdinGoLeft);

	sprites->Add(11321, 1068, 386, 1110, 473, texAladdinGoLeft);		// looking up slash left
	sprites->Add(11322, 1017, 386, 104, 473, texAladdinGoLeft);
	sprites->Add(11323, 945, 386, 1010, 473, texAladdinGoLeft);
	sprites->Add(11324, 881, 386, 928, 473, texAladdinGoLeft);
	sprites->Add(11325, 825, 386, 872, 473, texAladdinGoLeft);
	sprites->Add(11326, 769, 386, 823, 473, texAladdinGoLeft);
	sprites->Add(11327, 684, 386, 758, 473, texAladdinGoLeft);
	sprites->Add(11328, 615, 386, 669, 473, texAladdinGoLeft);
	sprites->Add(11329, 552, 386, 601, 473, texAladdinGoLeft);
	sprites->Add(11330, 486, 386, 537, 473, texAladdinGoLeft);
	sprites->Add(11331, 424, 386, 477, 473, texAladdinGoLeft);
	sprites->Add(11332, 371, 386, 417, 473, texAladdinGoLeft);

	sprites->Add(11341, 1056, 1067, 1108, 1142, texAladdinGoLeft);		// jumping slash left
	sprites->Add(11342, 996, 1067, 1046, 1142, texAladdinGoLeft);
	sprites->Add(11343, 934, 1067, 981, 1142, texAladdinGoLeft);
	sprites->Add(11344, 870, 1067, 922, 1142, texAladdinGoLeft);
	sprites->Add(11345, 772, 1067, 855, 1142, texAladdinGoLeft);
	sprites->Add(11346, 713, 1067, 760, 1142, texAladdinGoLeft);

	sprites->Add(11401, 1071, 231, 1114, 291, texAladdinGoLeft);		// throw apple left
	sprites->Add(11402, 1023, 231, 1064, 291, texAladdinGoLeft);
	sprites->Add(11403, 974, 231, 1012, 291, texAladdinGoLeft);
	sprites->Add(11404, 912, 231, 958, 291, texAladdinGoLeft);
	sprites->Add(114015, 863, 231, 900, 291, texAladdinGoLeft);
	sprites->Add(11406, 814, 231, 853, 291, texAladdinGoLeft);

	sprites->Add(11411, 1075, 567, 112, 619, texAladdinGoLeft);		// sitting throw apple left
	sprites->Add(11412, 1026, 567, 1063, 619, texAladdinGoLeft);
	sprites->Add(11413, 964, 567, 1014, 619, texAladdinGoLeft);
	sprites->Add(11414, 875, 567, 957, 619, texAladdinGoLeft);
	sprites->Add(11415, 808, 567, 865, 619, texAladdinGoLeft);

	sprites->Add(11421, 1053, 1005, 1102, 1064, texAladdinGoLeft);		// jumping throw apple left
	sprites->Add(11422, 1001, 1005, 1044, 1064, texAladdinGoLeft);
	sprites->Add(11423, 950, 1005, 989, 1064, texAladdinGoLeft);
	sprites->Add(11424, 884, 1005, 936, 1064, texAladdinGoLeft);
	sprites->Add(11425, 828, 1005, 868, 1064, texAladdinGoLeft);

	sprites->Add(11531, 15, 1769, 63, 1864, texAladdinGoRight);	// climbing slash left
	sprites->Add(11532, 81, 1769, 133, 1864, texAladdinGoRight);
	sprites->Add(11533, 146, 1769, 207, 1864, texAladdinGoRight);
	sprites->Add(11534, 247, 1769, 300, 1864, texAladdinGoRight);
	sprites->Add(11535, 327, 1769, 382, 1864, texAladdinGoRight);
	sprites->Add(11536, 403, 1769, 475, 1864, texAladdinGoRight);
	sprites->Add(11537, 499, 1769, 547, 1864, texAladdinGoRight);

	sprites->Add(11541, 13, 1664, 50, 1753, texAladdinGoRight);	// climbing throw apple left
	sprites->Add(11542, 65, 1664, 106, 1753, texAladdinGoRight);
	sprites->Add(11543, 125, 1664, 176, 1753, texAladdinGoRight);
	sprites->Add(11544, 192, 1664, 223, 1753, texAladdinGoRight);
	sprites->Add(11545, 236, 1664, 293, 1753, texAladdinGoRight);

	sprites->Add(11601, 1060, 2107, 1112, 2149, texAladdinGoRight);	// ride the carpet left
	sprites->Add(11602, 1001, 2107, 1053, 2149, texAladdinGoRight);
	sprites->Add(11603, 940, 2107, 992, 2149, texAladdinGoRight);
	sprites->Add(11604, 879, 2107, 931, 2149, texAladdinGoRight);
	sprites->Add(11605, 799, 2107, 862, 2149, texAladdinGoRight);
	sprites->Add(11606, 733, 2107, 788, 2149, texAladdinGoRight);

	LPDIRECT3DTEXTURE9 textMapOne = textures->Get(ID_TEX_MAP_ONE);
	sprites->Add(ID_SPRITE_MAP_ONE, 0, 0, 2144, 1024, textMapOne);


	//item
	LPDIRECT3DTEXTURE9 texItem1 = textures->Get(ID_TEX_ITEM_1);
	LPDIRECT3DTEXTURE9 texItem2 = textures->Get(ID_TEX_ITEM_2);
	
	// item hp
	sprites->AddByWidthHeight(20000, 17, 3007, 120, 32, texItem1); //hp aladdin 1
	sprites->AddByWidthHeight(20001, 147, 3007, 120, 32, texItem1);
	sprites->AddByWidthHeight(20002, 277, 3007, 119, 32, texItem1);
	sprites->AddByWidthHeight(20003, 406, 3007, 119, 32, texItem1);
							  
	sprites->AddByWidthHeight(20010, 17, 3054, 112, 32, texItem1); //hp aladdin 2
	sprites->AddByWidthHeight(20011, 139, 3054, 112, 32, texItem1);
	sprites->AddByWidthHeight(20012, 261, 3054, 111, 32, texItem1);
	sprites->AddByWidthHeight(20013, 382, 3054, 111, 32, texItem1);
							  
	sprites->AddByWidthHeight(20020, 17, 3101, 104, 32, texItem1); //hp aladdin 3
	sprites->AddByWidthHeight(20021, 131, 3101, 104, 32, texItem1);
	sprites->AddByWidthHeight(20022, 245, 3101, 103, 32, texItem1);
	sprites->AddByWidthHeight(20023, 358, 3101, 103, 32, texItem1);
							  
	sprites->AddByWidthHeight(20030, 17, 3148, 96, 32, texItem1); //hp aladdin 4
	sprites->AddByWidthHeight(20031, 123, 3148, 96, 32, texItem1);
	sprites->AddByWidthHeight(20032, 229, 3148, 95, 32, texItem1);
	sprites->AddByWidthHeight(20033, 334, 3148, 95, 32, texItem1);
							  
	sprites->AddByWidthHeight(20040, 17, 3195, 88, 32, texItem1); //hp aladdin 5
	sprites->AddByWidthHeight(20041, 116, 3195, 88, 32, texItem1);
	sprites->AddByWidthHeight(20042, 214, 3195, 87, 32, texItem1);
	sprites->AddByWidthHeight(20043, 311, 3195, 87, 32, texItem1);
							  
	sprites->AddByWidthHeight(20050, 17, 3242, 80, 32, texItem1); //hp aladdin 6
	sprites->AddByWidthHeight(20051, 107, 3242, 80, 32, texItem1);
	sprites->AddByWidthHeight(20052, 197, 3242, 79, 32, texItem1);
	sprites->AddByWidthHeight(20053, 286, 3242, 79, 32, texItem1);
							  
	sprites->AddByWidthHeight(20060, 17, 3289, 71, 32, texItem1); //hp aladdin 7
	sprites->AddByWidthHeight(20061, 98, 3289, 71, 32, texItem1);
	sprites->AddByWidthHeight(20062, 179, 3289, 72, 32, texItem1);
	sprites->AddByWidthHeight(20063, 261, 3289, 72, 32, texItem1);
							  
	sprites->AddByWidthHeight(20070, 17, 3336, 63, 29, texItem1); //hp aladdin 8
	sprites->AddByWidthHeight(20071, 90, 3336, 63, 29, texItem1);
	sprites->AddByWidthHeight(20072, 163, 3336, 64, 29, texItem1);
	sprites->AddByWidthHeight(20073, 237, 3335, 64, 30, texItem1);
							  
	sprites->AddByWidthHeight(20080, 17, 3380, 48, 24, texItem1); //hp aladdin 9
							  
	//item life				  
	sprites->AddByWidthHeight(20100, 13, 3568, 22, 25, texItem1);
	sprites->AddByWidthHeight(20101, 45, 3567, 24, 26, texItem1);
	sprites->AddByWidthHeight(20102, 79, 3567, 24, 26, texItem1);
	sprites->AddByWidthHeight(20103, 113, 3565, 27, 28, texItem1);
	sprites->AddByWidthHeight(20104, 150, 3560, 36, 33, texItem1);
	sprites->AddByWidthHeight(20105, 196, 3562, 33, 31, texItem1);
	sprites->AddByWidthHeight(20106, 239, 3568, 23, 25, texItem1);
	sprites->AddByWidthHeight(20107, 272, 3568, 22, 25, texItem1);
	sprites->AddByWidthHeight(20108, 304, 3568, 22, 25, texItem1);
							  
	sprites->AddByWidthHeight(20109, 13, 3616, 22, 25, texItem1);
	sprites->AddByWidthHeight(20110, 45, 3615, 24, 26, texItem1);
	sprites->AddByWidthHeight(20111, 79, 3615, 24, 26, texItem1);
	sprites->AddByWidthHeight(20112, 113, 3612, 37, 39, texItem1);
	sprites->AddByWidthHeight(20113, 160, 3609, 37, 41, texItem1);
	sprites->AddByWidthHeight(20114, 207, 3608, 37, 42, texItem1);
	sprites->AddByWidthHeight(20115, 254, 3609, 37, 42, texItem1);
	sprites->AddByWidthHeight(20116, 301, 3609, 37, 41, texItem1);
	sprites->AddByWidthHeight(20117, 349, 3608, 37, 39, texItem1);
	sprites->AddByWidthHeight(20118, 396, 3609, 32, 36, texItem1);
	sprites->AddByWidthHeight(20119, 438, 3614, 32, 36, texItem1);
	sprites->AddByWidthHeight(20120, 484, 3616, 22, 25, texItem1);
							  
	//text A->Z ()			  
	sprites->AddByWidthHeight(20200, 359, 3566, 7, 8, texItem1); //A
	sprites->AddByWidthHeight(20201, 371, 3566, 7, 8, texItem1); //B
	sprites->AddByWidthHeight(20202, 383, 3566, 7, 8, texItem1); //C
	sprites->AddByWidthHeight(20203, 395, 3566, 7, 8, texItem1); //D
	sprites->AddByWidthHeight(20204, 407, 3566, 7, 8, texItem1); //E
	sprites->AddByWidthHeight(20205, 419, 3566, 7, 8, texItem1); //F
	sprites->AddByWidthHeight(20206, 431, 3566, 7, 8, texItem1); //G
	sprites->AddByWidthHeight(20207, 443, 3566, 7, 8, texItem1); //H
	sprites->AddByWidthHeight(20208, 455, 3566, 7, 8, texItem1); //I
	sprites->AddByWidthHeight(20209, 463, 3566, 7, 8, texItem1); //J
	sprites->AddByWidthHeight(20210, 472, 3566, 7, 8, texItem1); //K
	sprites->AddByWidthHeight(20211, 484, 3566, 7, 8, texItem1); //L
	sprites->AddByWidthHeight(20212, 496, 3566, 7, 8, texItem1); //M
							  
	sprites->AddByWidthHeight(20213, 360, 3581, 7, 8, texItem1); //N
	sprites->AddByWidthHeight(20214, 372, 3581, 7, 8, texItem1); //O
	sprites->AddByWidthHeight(20215, 384, 3581, 7, 8, texItem1); //P
	sprites->AddByWidthHeight(20216, 396, 3581, 7, 8, texItem1); //Q
	sprites->AddByWidthHeight(20217, 408, 3581, 7, 8, texItem1); //R
	sprites->AddByWidthHeight(20218, 420, 3581, 7, 8, texItem1); //S
	sprites->AddByWidthHeight(20219, 431, 3581, 7, 8, texItem1); //T
	sprites->AddByWidthHeight(20220, 442, 3581, 7, 8, texItem1); //U
	sprites->AddByWidthHeight(20221, 454, 3581, 7, 8, texItem1); //V
	sprites->AddByWidthHeight(20222, 466, 3581, 7, 8, texItem1); //W
	sprites->AddByWidthHeight(20223, 478, 3581, 7, 8, texItem1); //X
	sprites->AddByWidthHeight(20224, 490, 3581, 7, 8, texItem1); //Y
	sprites->AddByWidthHeight(20225, 502, 3581, 7, 8, texItem1); //Z
							  
	sprites->AddByWidthHeight(20226, 514, 3581, 4, 8, texItem1); //(
	sprites->AddByWidthHeight(20227, 520, 3581, 4, 8, texItem1); //)
							  
	//number 0-9			  
	sprites->AddByWidthHeight(20228, 359, 3594, 7, 8, texItem1); //0
	sprites->AddByWidthHeight(20229, 371, 3594, 7, 8, texItem1); //1
	sprites->AddByWidthHeight(20230, 379, 3594, 7, 8, texItem1); //2
	sprites->AddByWidthHeight(20231, 389, 3594, 7, 8, texItem1); //3
	sprites->AddByWidthHeight(20232, 398, 3594, 7, 8, texItem1); //4
	sprites->AddByWidthHeight(20233, 409, 3594, 7, 8, texItem1); //5
	sprites->AddByWidthHeight(20234, 419, 3594, 7, 8, texItem1); //6
	sprites->AddByWidthHeight(20235, 430, 3594, 7, 8, texItem1); //7
	sprites->AddByWidthHeight(20236, 439, 3594, 7, 8, texItem1); //8
	sprites->AddByWidthHeight(20237, 449, 3594, 7, 8, texItem1); //9
	sprites->AddByWidthHeight(20238, 459, 3594, 7, 8, texItem1); //.
							 
	//						  
	sprites->AddByWidthHeight(20300, 17, 3435, 11, 16, texItem1); //tao
	sprites->AddByWidthHeight(20300, 285, 3435, 17, 16, texItem1); //trung
}

void AladdinResoucres::LoadAnimations()
{
	LPANIMATION ani;

	ani = new CAnimation(100);	// idle right
	ani->Add(10001);
	animations->Add(100, ani);

	ani = new CAnimation(100);
	ani->Add(11001);
	animations->Add(101, ani);	//idle left

	ani = new CAnimation(100);	// standing right
	ani->Add(10002);
	ani->Add(10003);
	ani->Add(10004);
	ani->Add(10005);
	ani->Add(10006);
	ani->Add(10007);
	ani->Add(10008);
	ani->Add(10009);
	ani->Add(10010);
	ani->Add(10011);
	ani->Add(10012);
	ani->Add(10013);
	ani->Add(10014);
	ani->Add(10015);
	ani->Add(10016);
	animations->Add(102, ani);

	ani = new CAnimation(100);	// standing left
	ani->Add(11002);
	ani->Add(11003);
	ani->Add(11004);
	ani->Add(11005);
	ani->Add(11006);
	ani->Add(11007);
	ani->Add(11008);
	ani->Add(11009);
	ani->Add(11010);
	ani->Add(11011);
	ani->Add(11012);
	ani->Add(11013);
	ani->Add(11014);
	ani->Add(11015);
	ani->Add(11016);
	animations->Add(103, ani);

	ani = new CAnimation(100, false);	// sitting down right
	ani->Add(10021);
	ani->Add(10022);
	ani->Add(10023);
	ani->Add(10024);
	animations->Add(104, ani);

	ani = new CAnimation(100, false);	// sitting down left
	ani->Add(11021);
	ani->Add(11022);
	ani->Add(11023);
	ani->Add(11024);
	animations->Add(105, ani);

	ani = new CAnimation(100);	// looking up right
	ani->Add(10031);
	ani->Add(10032);
	ani->Add(10033);
	animations->Add(106, ani);

	ani = new CAnimation(100);	// looking up left
	ani->Add(11031);
	ani->Add(11032);
	ani->Add(11033);
	animations->Add(107, ani);

	ani = new CAnimation(100);	// walk right
	ani->Add(10101);
	ani->Add(10102);
	ani->Add(10103);
	ani->Add(10104);
	ani->Add(10105);
	ani->Add(10106);
	ani->Add(10107);
	ani->Add(10108);
	ani->Add(10109);
	ani->Add(10110);
	ani->Add(10111);
	ani->Add(10112);
	ani->Add(10113);
	animations->Add(110, ani);

	ani = new CAnimation(100);	// walk left
	ani->Add(11101);
	ani->Add(11102);
	ani->Add(11103);
	ani->Add(11104);
	ani->Add(11105);
	ani->Add(11106);
	ani->Add(11107);
	ani->Add(11108);
	ani->Add(11109);
	ani->Add(11110);
	ani->Add(11111);
	ani->Add(11112);
	ani->Add(11113);
	animations->Add(111, ani);

	ani = new CAnimation(100);	// stop right
	ani->Add(10121);
	ani->Add(10122);
	ani->Add(10123);
	ani->Add(10124);
	ani->Add(10125);
	ani->Add(10126);
	ani->Add(10127);
	ani->Add(10128);
	ani->Add(10129);
	animations->Add(112, ani);

	ani = new CAnimation(100);	// stop left
	ani->Add(11121);
	ani->Add(11122);
	ani->Add(11123);
	ani->Add(11124);
	ani->Add(11125);
	ani->Add(11126);
	ani->Add(11127);
	ani->Add(11128);
	ani->Add(11129);
	animations->Add(113, ani);

	ani = new CAnimation(60);	// jump right
	ani->Add(10201);
	ani->Add(10202);
	ani->Add(10203);
	ani->Add(10204);
	ani->Add(10205);
	ani->Add(10206);
	ani->Add(10207);
	ani->Add(10208);
	ani->Add(10209);
	ani->Add(10210);
	animations->Add(120, ani);

	ani = new CAnimation(85);	// jump left
	ani->Add(11201);
	ani->Add(11202);
	ani->Add(11203);
	ani->Add(11204);
	ani->Add(11205);
	ani->Add(11206);
	ani->Add(11207);
	ani->Add(11208);
	ani->Add(11209);
	ani->Add(11210);
	animations->Add(121, ani);

	ani = new CAnimation(85);	// run jump right
	ani->Add(10221);
	ani->Add(10222);
	ani->Add(10223);
	ani->Add(10224);
	ani->Add(10225);
	ani->Add(10226);
	ani->Add(10227);
	ani->Add(10228);
	ani->Add(10229);
	animations->Add(122, ani);

	ani = new CAnimation(100);	// run jump left
	ani->Add(11221);
	ani->Add(11222);
	ani->Add(11223);
	ani->Add(11224);
	ani->Add(11225);
	ani->Add(11226);
	ani->Add(11227);
	ani->Add(11228);
	ani->Add(11229);
	animations->Add(123, ani);

	ani = new CAnimation(100);	// standing slash right
	ani->Add(10301);
	ani->Add(10302);
	ani->Add(10303);
	ani->Add(10304);
	ani->Add(10305);
	animations->Add(131, ani);

	ani = new CAnimation(100);	// standing slash left
	ani->Add(11301);
	ani->Add(11302);
	ani->Add(11303);
	ani->Add(11304);
	ani->Add(11305);
	animations->Add(132, ani);

	ani = new CAnimation(100);	// sitting slash right
	ani->Add(10311);
	ani->Add(10312);
	ani->Add(10313);
	ani->Add(10314);
	ani->Add(10315);
	ani->Add(10316);
	ani->Add(10317);
	animations->Add(133, ani);

	ani = new CAnimation(100);	// sitting slash left
	ani->Add(11311);
	ani->Add(11312);
	ani->Add(11313);
	ani->Add(11314);
	ani->Add(11315);
	ani->Add(11316);
	ani->Add(11317);
	animations->Add(134, ani);

	ani = new CAnimation(100);	// looking up slash right
	ani->Add(10321);
	ani->Add(10322);
	for (int i = 1; i <= 5; i++) {
		ani->Add(10323);
		ani->Add(10324);
		ani->Add(10325);
		ani->Add(10326);
		ani->Add(10327);
		ani->Add(10328);
		ani->Add(10329);
		ani->Add(10330);
	}
	ani->Add(10331);
	ani->Add(10332);
	animations->Add(135, ani);

	ani = new CAnimation(100);	// looking up slash left
	ani->Add(11321);
	ani->Add(11322);
	for (int i = 1; i <= 5; i++) {
		ani->Add(11323);
		ani->Add(11324);
		ani->Add(11325);
		ani->Add(11326);
		ani->Add(11327);
		ani->Add(11328);
		ani->Add(11329);
		ani->Add(11330);
	}
	ani->Add(11331);
	ani->Add(11332);
	animations->Add(136, ani);

	ani = new CAnimation(100);	// jumping slash right
	ani->Add(10341);
	ani->Add(10342);
	ani->Add(10343);
	ani->Add(10344);
	ani->Add(10345);
	ani->Add(10346);
	animations->Add(137, ani);

	ani = new CAnimation(100);	// jumping slash left
	ani->Add(11341);
	ani->Add(11342);
	ani->Add(11343);
	ani->Add(11344);
	ani->Add(11345);
	ani->Add(11346);
	animations->Add(138, ani);

	ani = new CAnimation(100);	// throw apple right
	ani->Add(10401);
	ani->Add(10402);
	ani->Add(10403);
	ani->Add(10404);
	ani->Add(10405);
	ani->Add(10406);
	animations->Add(140, ani);

	ani = new CAnimation(100);	// throw apple left
	ani->Add(11401);
	ani->Add(11402);
	ani->Add(11403);
	ani->Add(11404);
	ani->Add(11405);
	ani->Add(11406);
	animations->Add(141, ani);

	ani = new CAnimation(100);	// sitting throw apple right
	ani->Add(10411);
	ani->Add(10412);
	ani->Add(10413);
	ani->Add(10414);
	ani->Add(10415);
	animations->Add(142, ani);

	ani = new CAnimation(100);	// sitting throw apple left
	ani->Add(11411);
	ani->Add(11412);
	ani->Add(11413);
	ani->Add(11414);
	ani->Add(11415);
	animations->Add(143, ani);

	ani = new CAnimation(100);	// jumping throw apple right
	ani->Add(10421);
	ani->Add(10422);
	ani->Add(10423);
	ani->Add(10424);
	ani->Add(10425);
	animations->Add(144, ani);

	ani = new CAnimation(100);	// jumping throw apple left
	ani->Add(11421);
	ani->Add(11422);
	ani->Add(11423);
	ani->Add(11424);
	ani->Add(11425);
	animations->Add(145, ani);

	ani = new CAnimation(100);	// climbing
	ani->Add(10501);
	ani->Add(10502);
	ani->Add(10503);
	ani->Add(10504);
	ani->Add(10505);
	ani->Add(10506);
	ani->Add(10507);
	ani->Add(10508);
	ani->Add(10509);
	ani->Add(10510);
	animations->Add(150, ani);

	ani = new CAnimation(100);	// falling after climbing
	ani->Add(10521);
	ani->Add(10522);
	ani->Add(10523);
	ani->Add(10524);
	ani->Add(10525);
	ani->Add(10526);
	ani->Add(10527);
	ani->Add(10528);
	ani->Add(10529);
	animations->Add(151, ani);

	ani = new CAnimation(100);	// climbing slash right
	ani->Add(10531);
	ani->Add(10532);
	ani->Add(10533);
	ani->Add(10534);
	ani->Add(10535);
	ani->Add(10536);
	ani->Add(10537);
	animations->Add(152, ani);

	ani = new CAnimation(100);	// climbing slash left
	ani->Add(11531);
	ani->Add(11532);
	ani->Add(11533);
	ani->Add(11534);
	ani->Add(11535);
	ani->Add(11536);
	ani->Add(11537);
	animations->Add(153, ani);

	ani = new CAnimation(100);	// climbing throw apple right
	ani->Add(10541);
	ani->Add(10542);
	ani->Add(10543);
	ani->Add(10544);
	ani->Add(10545);
	animations->Add(154, ani);

	ani = new CAnimation(100);	// climbing throw apple left
	ani->Add(11541);
	ani->Add(11542);
	ani->Add(11543);
	ani->Add(11544);
	ani->Add(11545);
	animations->Add(155, ani);

	ani = new CAnimation(100);	// ride the carpet right
	ani->Add(10601);
	ani->Add(10602);
	ani->Add(10603);
	ani->Add(10604);
	ani->Add(10605);
	ani->Add(10606);
	animations->Add(161, ani);

	ani = new CAnimation(100);	// ride the carpet left
	ani->Add(11601);
	ani->Add(11602);
	ani->Add(11603);
	ani->Add(11604);
	ani->Add(11605);
	ani->Add(11606);
	animations->Add(162, ani);

	//iten
	ani = new CAnimation(100);		// HP 1
	ani->Add(20000);
	ani->Add(20001);
	ani->Add(20002);
	ani->Add(20003);
	animations->Add(-100, ani);

	ani = new CAnimation(100);		// HP 2
	ani->Add(20010);
	ani->Add(20011);
	ani->Add(20012);
	ani->Add(10013);
	animations->Add(-101, ani);

	ani = new CAnimation(100);		// HP 3
	ani->Add(20020);
	ani->Add(20021);
	ani->Add(20022);
	ani->Add(20023);
	animations->Add(-102, ani);

	ani = new CAnimation(100);		// HP 4
	ani->Add(20030);
	ani->Add(20031);
	ani->Add(20032);
	ani->Add(20033);
	animations->Add(-103, ani);

	ani = new CAnimation(100);		// HP 5
	ani->Add(20040);
	ani->Add(20041);
	ani->Add(20042);
	ani->Add(20043);
	animations->Add(-104, ani);

	ani = new CAnimation(100);		// HP 6
	ani->Add(20050);
	ani->Add(20051);
	ani->Add(20052);
	ani->Add(20053);
	animations->Add(-105, ani);

	ani = new CAnimation(100);		// HP 7
	ani->Add(20060);
	ani->Add(20061);
	ani->Add(20062);
	ani->Add(20063);
	animations->Add(-106, ani);

	ani = new CAnimation(100);		// HP 8
	ani->Add(20070);
	ani->Add(20071);
	ani->Add(20072);
	ani->Add(20073);
	animations->Add(-107, ani);

	ani = new CAnimation(100);		// HP 9
	ani->Add(20080);
	animations->Add(-108, ani);
}

AladdinResoucres::AladdinResoucres()
{
	this->textures = CTextures::GetInstance();

	this->sprites = CSprites::GetInstance();

	this->animations = CAnimations::GetInstance();
}

void AladdinResoucres::LoadResoucre()
{
	LoadTextures();
	LoadSprites();
	LoadAnimations();
}
