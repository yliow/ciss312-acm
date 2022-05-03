#include <iostream>
#include <sstream>

#define ODD(x) ((x) & 1)

#define MAX 10001
int t[MAX] = 
{0,1,2,8,3,6,9,17,4,20,7,15,10,10,18,18,5,13,21,21,8,8,16,16,11,24,11,112,19,19,19,107,6,27,14,14,22,22,22,35,9,110,9,30,17,17,17,105,12,25,25,25,12,12,113,113,20,33,20,33,20,20,108,108,7,28,28,28,15,15,15,103,23,116,23,15,23,23,36,36,10,23,111,111,10,10,31,31,18,31,18,93,18,18,106,106,13,119,26,26,26,26,26,88,13,39,13,101,114,114,114,70,21,13,34,34,21,21,34,34,21,96,21,47,109,109,109,47,8,122,29,29,29,29,29,42,16,91,16,42,16,16,104,104,24,117,117,117,24,24,16,16,24,37,24,86,37,37,37,55,11,99,24,24,112,112,112,68,11,50,11,125,32,32,32,81,19,32,32,32,19,19,94,94,19,45,19,45,107,107,107,45,14,120,120,120,27,27,27,120,27,19,27,40,27,27,89,89,14,40,40,40,14,14,102,102,115,27,115,53,115,115,71,71,22,53,14,14,35,35,35,128,22,84,22,128,35,35,35,53,22,22,97,97,22,22,48,48,110,48,110,66,110,110,48,48,9,123,123,123,30,30,30,79,30,123,30,22,30,30,43,43,17,30,92,92,17,17,43,43,17,43,17,61,105,105,105,43,25,30,118,118,118,118,118,56,25,74,25,118,17,17,17,43,25,38,38,38,25,25,87,87,38,131,38,38,38,38,56,56,12,25,100,100,25,25,25,144,113,51,113,25,113,113,69,69,12,113,51,51,12,12,126,126,33,126,33,126,33,33,82,82,20,126,33,33,33,33,33,51,20,46,20,46,95,95,95,46,20,20,46,46,20,20,46,46,108,64,108,59,108,108,46,46,15,33,121,121,121,121,121,121,28,59,28,77,28,28,121,121,28,20,20,20,28,28,41,41,28,41,28,134,90,90,90,134,15,134,41,41,41,41,41,33,15,59,15,54,103,103,103,41,116,28,28,28,116,116,54,54,116,28,116,54,72,72,72,98,23,116,54,54,15,15,15,41,36,129,36,129,36,36,129,129,23,36,85,85,23,23,129,129,36,36,36,28,36,36,54,54,23,49,23,23,98,98,98,142,23,49,23,142,49,49,49,98,111,23,49,49,111,111,67,67,111,62,111,36,49,49,49,62,10,36,124,124,124,124,124,62,31,124,31,124,31,31,80,80,31,31,124,124,31,31,23,23,31,23,31,49,44,44,44,137,18,44,31,31,93,93,93,44,18,137,18,31,44,44,44,88,18,44,44,44,18,18,62,62,106,57,106,31,106,106,44,44,26,31,31,31,119,119,119,31,119,57,119,119,119,119,57,57,26,75,75,75,26,26,119,119,18,57,18,70,18,18,44,44,26,132,39,39,39,39,39,70,26,132,26,132,88,88,88,132,39,26,132,132,39,39,39,39,39,31,39,31,57,57,57,132,13,52,26,26,101,101,101,39,26,145,26,101,26,26,145,145,114,52,52,52,114,114,26,26,114,52,114,145,70,70,70,96,13,65,114,114,52,52,52,65,13,65,13,39,127,127,127,39,34,127,127,127,34,34,127,127,34,127,34,65,83,83,83,171,21,34,127,127,34,34,34,65,34,26,34,26,34,34,52,52,21,47,47,47,21,21,47,47,96,34,96,140,96,96,47,47,21,140,21,21,47,47,47,96,21,91,21,47,47,47,47,140,109,21,65,65,109,109,60,60,109,34,109,153,47,47,47,60,16,34,34,34,122,122,122,153,122,34,122,60,122,122,122,122,29,122,60,60,29,29,78,78,29,78,29,104,122,122,122,73,29,60,21,21,21,21,21,73,29,47,29,135,42,42,42,135,29,42,42,42,29,29,135,135,91,135,91,42,91,91,135,135,16,29,135,135,42,42,42,86,42,42,42,42,42,42,34,34,16,60,60,60,16,16,55,55,104,29,104,148,104,104,42,42,117,148,29,29,29,29,29,179,117,148,117,29,55,55,55,148,117,117,29,29,117,117,55,55,73,148,73,47,73,73,99,99,24,68,117,117,55,55,55,117,16,68,16,55,16,16,42,42,37,130,130,130,37,37,130,130,37,130,37,68,130,130,130,117,24,130,37,37,86,86,86,130,24,174,24,86,130,130,130,37,37,37,37,37,37,37,29,29,37,29,37,29,55,55,55,130,24,50,50,50,24,24,24,143,99,50,99,37,99,99,143,143,24,99,50,50,24,24,143,143,50,24,50,37,50,50,99,99,112,94,24,24,50,50,50,50,112,143,112,42,68,68,68,94,112,112,63,63,112,112,37,37,50,156,50,63,50,50,63,63,11,37,37,37,125,125,125,37,125,156,125,125,125,125,63,63,32,125,125,125,32,32,125,125,32,63,32,94,81,81,81,169,32,81,32,32,125,125,125,76,32,76,32,63,24,24,24,169,32,24,24,24,32,32,50,50,45,138,45,138,45,45,138,138,19,45,45,45,32,32,32,76,94,138,94,32,94,94,45,45,19,94,138,138,19,19,32,32,45,138,45,94,45,45,89,89,19,45,45,45,45,45,45,138,19,37,19,37,63,63,63,63,107,19,58,58,107,107,32,32,107,151,107,58,45,45,45,58,27,151,32,32,32,32,32,58,120,182,120,151,120,120,32,32,120,58,58,58,120,120,120,120,120,32,120,58,58,58,58,89,27,151,76,76,76,76,76,50,27,102,27,120,120,120,120,71,19,58,58,58,19,19,71,71,19,58,19,71,45,45,45,164,27,133,133,133,40,40,40,133,40,133,40,133,40,40,71,71,27,133,133,133,27,27,133,133,89,40,89,71,89,89,133,133,40,177,27,27,133,133,133,89,40,40,40,84,40,40,40,177,40,40,32,32,40,40,32,32,58,32,58,84,58,58,133,133,14,53,53,53,27,27,27,146,102,146,102,53,102,102,40,40,27,102,146,146,27,27,102,102,27,53,27,177,146,146,146,102,115,27,53,53,53,53,53,146,115,102,115,53,27,27,27,53,115,53,53,53,115,115,146,146,71,45,71,27,71,71,97,97,14,115,66,66,115,115,115,159,53,40,53,115,53,53,66,66,14,53,66,66,14,14,40,40,128,40,128,115,128,128,40,40,35,159,128,128,128,128,128,97,35,66,35,66,128,128,128,115,35,35,128,128,35,35,66,66,84,97,84,128,84,84,172,172,22,84,35,35,128,128,128,35,35,79,35,128,35,35,66,66,35,27,27,27,35,35,27,27,35,27,35,79,53,53,53,128,22,141,48,48,48,48,48,53,22,141,22,141,48,48,48,141,97,35,35,35,97,97,141,141,97,35,97,141,48,48,48,172,22,97,141,141,22,22,22,97,48,35,48,141,48,48,97,97,22,48,92,92,22,22,48,48,48,48,48,48,48,48,141,141,110,40,22,22,66,66,66,92,110,66,110,141,61,61,61,154,110,110,35,35,110,110,154,154,48,61,48,61,48,48,61,61,17,154,35,35,35,35,35,110,123,61,123,35,123,123,154,154,123,123,35,35,123,123,61,61,123,61,123,154,123,123,123,61,30,35,123,123,61,61,61,61,30,92,30,123,79,79,79,167,30,79,79,79,30,30,105,105,123,123,123,74,123,123,74,74,30,61,61,61,22,22,22,167,22,74,22,22,22,22,74,74,30,48,48,48,30,30,136,136,43,136,43,74,43,43,136,136,30,136,43,43,43,43,43,105,30,74,30,74,136,136,136,136,92,30,136,136,92,92,43,43,92,74,92,43,136,136,136,74,17,180,30,30,136,136,136,43,43,92,43,136,43,43,87,87,43,43,43,43,43,43,43,43,43,35,43,136,35,35,35,180,17,35,61,61,61,61,61,61,17,136,17,149,56,56,56,149,105,30,30,30,105,105,149,149,105,56,105,56,43,43,43,56,118,105,149,149,30,30,30,105,30,105,30,56,30,30,180,180,118,149,149,149,118,118,30,30,56,56,56,43,56,56,149,149,118,105,118,118,30,30,30,149,118,56,118,56,56,56,56,87,74,118,149,149,74,74,48,48,74,30,74,48,100,100,100,100,25,118,69,69,118,118,118,69,56,162,56,43,56,56,118,118,17,56,69,69,17,17,56,56,17,69,17,162,43,43,43,162,38,43,131,131,131,131,131,69,38,43,38,131,131,131,131,162,38,131,131,131,38,38,69,69,131,69,131,131,131,131,118,118,25,38,131,131,38,38,38,69,87,69,87,38,87,87,131,131,25,87,175,175,25,25,87,87,131,38,131,87,131,131,38,38,38,82,38,38,38,38,38,175,38,69,38,69,30,30,30,131,38,38,30,30,38,38,30,30,56,82,56,175,56,56,131,131,25,144,51,51,51,51,51,51,25,56,25,144,25,25,144,144,100,51,51,51,100,100,38,38,100,38,100,82,144,144,144,175,25,38,100,100,51,51,51,82,25,175,25,82,144,144,144,100,51,25,25,25,51,51,38,38,51,144,51,144,100,100,100,51,113,51,95,95,25,25,25,51,51,51,51,51,51,51,51,51,113,51,144,144,113,113,43,43,69,25,69,43,69,69,95,95,113,69,113,113,64,64,64,157,113,157,113,157,38,38,38,64,51,113,157,157,51,51,64,64,51,64,51,157,64,64,64,157,12,157,38,38,38,38,38,38,126,113,126,38,126,126,38,38,126,126,157,157,126,126,126,126,126,38,126,95,64,64,64,51,33,64,126,126,126,126,126,113,33,64,33,38,126,126,126,108,33,64,64,64,33,33,95,95,82,126,82,157,82,82,170,170,33,82,82,82,33,33,33,82,126,108,126,33,126,126,77,77,33,126,77,77,33,33,64,64,25,64,25,77,25,25,170,170,33,77,25,25,25,25,25,108,33,77,33,170,51,51,51,126,46,33,139,139,46,46,139,139,46,77,46,51,139,139,139,77,20,139,46,46,46,46,46,139,33,108,33,77,33,33,77,77,95,139,139,139,95,95,33,33,95,139,95,51,46,46,46,170,20,77,95,95,139,139,139,121,20,77,20,95,33,33,33,183,46,139,139,139,46,46,95,95,46,139,46,46,90,90,90,139,20,46,46,46,46,46,46,77,46,46,46,38,46,46,139,139,20,38,38,38,20,20,38,38,64,64,64,90,64,64,64,64,108,139,20,20,59,59,59,152,108,152,108,59,33,33,33,121,108,108,152,152,108,108,59,59,46,59,46,152,46,46,59,59,28,108,152,152,33,33,33,152,33,108,33,108,33,33,59,59,121,33,183,183,121,121,152,152,121,152,121,108,33,33,33,90,121,59,59,59,59,59,59,152,121,152,121,108,121,121,121,59,121,33,33,33,121,121,59,59,59,59,59,59,59,59,90,90,28,121,152,152,77,77,77,165,77,51,77,77,77,77,51,51,28,103,103,103,28,28,121,121,121,72,121,33,121,121,72,72,20,165,59,59,59,59,59,72,20,121,20,165,72,72,72,121,20,20,59,59,20,20,72,72,46,165,46,121,46,46,165,165,28,46,134,134,134,134,134,134,41,72,41,46,41,41,134,134,41,134,134,134,41,41,134,134,41,134,41,103,72,72,72,209,28,72,134,134,134,134,134,134,28,121,28,72,134,134,134,46,90,41,41,41,90,90,72,72,90,41,90,103,134,134,134,72,41,90,178,178,28,28,28,64,134,90,134,41,134,134,90,90,41,134,41,41,41,41,85,85,41,41,41,134,41,41,178,178,41,72,41,41,33,33,33,85,41,134,41,178,33,33,33,178,59,41,33,33,59,59,85,85,59,178,59,59,134,134,134,116,15,147,54,54,54,54,54,147,28,54,28,54,28,28,147,147,103,28,147,147,103,103,54,54,103,54,103,147,41,41,41,54,28,41,103,103,147,147,147,147,28,178,28,103,103,103,103,85,28,54,54,54,28,28,178,178,147,85,147,103,147,147,103,103,116,28,28,28,54,54,54,191,54,41,54,54,54,54,147,147,116,103,103,103,116,116,54,54,28,98,28,147,28,28,54,54,116,54,54,54,54,54,54,85,116,54,116,46,147,147,147,46,72,116,46,46,72,72,28,28,72,46,72,72,98,98,98,98,15,72,116,116,67,67,67,28,116,160,116,67,116,116,160,160,54,41,41,41,54,54,116,116,54,160,54,98,67,67,67,67,15,67,54,54,67,67,67,129,15,160,15,116,41,41,41,160,129,41,41,41,129,129,116,116,129,41,129,67,41,41,41,173,36,129,160,160,129,129,129,160,129,129,129,41,129,129,98,98,36,67,67,67,36,36,67,67,129,129,129,160,129,129,116,116,36,67,36,36,129,129,129,67,36,111,36,67,67,67,67,67,85,36,98,98,85,85,129,129,85,160,85,59,173,173,173,160,23,85,85,85,36,36,36,59,129,85,129,111,129,129,36,36,36,129,80,80,36,36,129,129,36,80,36,173,67,67,67,173,36,67,28,28,28,28,28,129,36,173,36,80,28,28,28,80,36,28,28,28,36,36,80,80,54,173,54,54,54,54,129,129,23,36,142,142,49,49,49,129,49,142,49,49,49,49,54,54,23,142,142,142,23,23,142,142,49,49,49,142,49,49,142,142,98,111,36,36,36,36,36,217,98,80,98,142,142,142,142,173,98,98,36,36,98,98,142,142,49,54,49,80,49,49,173,173,23,80,98,98,142,142,142,98,23,124,23,142,23,23,98,98,49,36,36,36,49,49,142,142,49,142,49,49,98,98,98,49,23,142,49,49,93,93,93,142,23,142,23,49,49,49,49,49,49,49,49,49,49,49,49,49,49,41,49,41,142,142,142,155,111,41,41,41,23,23,23,93,67,41,67,67,67,67,93,93,111,67,67,67,111,111,142,142,62,23,62,155,62,62,155,155,111,155,111,111,36,36,36,62,111,124,111,155,155,155,155,93,49,111,62,62,49,49,62,62,49,155,49,62,62,62,62,155,18,111,155,155,36,36,36,155,36,155,36,36,36,36,111,111,124,36,62,62,124,124,36,36,124,186,124,137,155,155,155,93,124,155,124,124,36,36,36,36,124,93,124,62,62,62,62,49,124,62,62,62,124,124,155,155,124,111,124,111,124,124,62,62,31,36,36,36,124,124,124,106,62,62,62,124,62,62,62,62,31,62,93,93,31,31,124,124,80,155,80,54,80,80,168,168,31,54,80,80,80,80,80,199,31,54,31,80,106,106,106,62,124,31,124,124,124,124,75,75,124,36,124,75,75,75,75,168,31,168,62,62,62,62,62,49,23,75,23,124,23,23,168,168,23,75,75,75,23,23,23,23,23,62,23,106,75,75,75,168,31,168,49,49,49,49,49,124,31,168,31,49,137,137,137,49,44,137,137,137,44,44,75,75,44,49,44,49,137,137,137,75,31,137,137,137,44,44,44,137,44,137,44,137,44,44,106,106,31,75,75,75,31,31,75,75,137,137,137,137,137,137,137,137,93,124,31,31,137,137,137,75,93,49,93,75,44,44,44,168,93,93,75,75,93,93,44,44,137,106,137,119,137,137,75,75,18,93,181,181,31,31,31,181,137,67,137,93,137,137,44,44,44,137,93,93,44,44,137,137,44,44,44,93,88,88,88,137,44,44,44,44,44,44,44,88,44,181,44,75,44,44,44,137,44,36,36,36,44,44,137,137,36,181,36,44,36,36,181,181,18,44,36,36,62,62,62,119,62,88,62,62,62,62,62,62,18,137,137,137,18,18,150,150,57,57,57,150,57,57,150,150,106,57,31,31,31,31,31,119,106,150,106,150,150,150,150,150,106,106,57,57,106,106,57,57,44,150,44,57,44,44,57,57,119,44,106,106,150,150,150,106,31,150,31,150,31,31,106,106,31,106,106,106,31,31,57,57,31,57,31,88,181,181,181,132,119,88,150,150,150,150,150,57,119,106,119,132,31,31,31,88,57,57,57,57,57,57,44,44,57,57,57,150,150,150,150,80,119,106,106,106,119,119,119,57,31,57,31,101,31,31,150,150,119,31,57,57,119,119,57,57,57,57,57,57,57,57,88,88,75,57,119,119,150,150,150,49,75,49,75,163,49,49,49,194,75,75,31,31,75,75,49,49,101,75,101,75,101,101,101,101,26,75,119,119,70,70,70,150,119,31,119,70,119,119,70,70,57,119,163,163,57,57,44,44,57,44,57,70,119,119,119,70,18,163,57,57,70,70,70,119,18,70,18,57,57,57,57,101,18,70,70,70,18,18,163,163,44,119,44,163,44,44,163,163,39,44,44,44,132,132,132,119,132,119,132,132,132,132,70,70,39,44,44,44,39,39,132,132,132,163,132,101,132,132,163,163,39,132,132,132,132,132,132,44,39,101,39,70,70,70,70,207,132,39,70,70,132,132,132,132,132,163,132,132,119,119,119,238,26,70,39,39,132,132,132,44,39,70,39,132,39,39,70,70,88,70,70,70,88,88,39,39,88,101,88,114,132,132,132,70,26,163,88,88,176,176,176,62,26,163,26,62,88,88,88,88,132,39,39,39,132,132,88,88,132,114,132,114,39,39,39,88,39,132,83,83,39,39,39,132,39,132,39,83,39,39,176,176,39,70,70,70,39,39,70,70,31,31,31,83,31,31,132,132,39,176,39,39,31,31,31,176,39,83,39,31,31,31,31,176,57,39,83,83,57,57,176,176,57,57,57,132,132,132,132,114,26,39,145,145,52,52,52,145,52,132,52,145,52,52,52,52,26,52,57,57,26,26,145,145,26,145,26,83,145,145,145,114,101,52,52,52,52,52,52,145,101,145,101,52,39,39,39,52,101,39,39,39,101,101,83,83,145,145,145,145,145,145,176,176,26,101,39,39,101,101,101,83,52,145,52,101,52,52,83,83,26,52,176,176,26,26,83,83,145,101,145,83,145,145,101,101,52,127,26,26,26,26,26,176,52,101,52,189,39,39,39,75,52,52,145,145,52,52,145,145,101,52,101,52,101,101,52,52,114,145,52,52,96,96,96,52,26,145,26,96,26,26,52,52,52,52,52,52,52,52,52,52,52,52,52,83,52,52,52,189,114,44,52,52,145,145,145,44,114,158,114,189,44,44,44,44,70,26,26,26,70,70,44,44,70,70,70,70,96,96,96,96,114,70,70,70,114,114,114,145,65,145,65,26,65,65,158,158,114,65,158,158,114,114,158,158,39,114,39,65,39,39,65,65,52,127,114,114,158,158,158,158,52,96,52,158,65,65,65,65,52,52,65,65,52,52,158,158,65,65,65,127,65,65,158,158,13,114,158,158,39,39,39,158,39,158,39,39,39,39,39,39,127,39,114,114,127,127,39,39,127,65,127,96,39,39,39,171,127,189,127,127,158,158,158,96,127,96,127,158,127,127,127,65,127,39,39,39,127,127,96,96,65,65,65,65,65,65,52,52,34,65,65,65,127,127,127,114,127,158,127,127,127,127,114,114,34,127,65,65,34,34,39,39,127,39,127,65,127,127,109,109,34,65,65,65,65,65,65,65,34,65,34,65,96,96,96,109,83,34,127,127,83,83,158,158,83,57,83,158,171,171,171,158,34,57,83,83,83,83,83,39,34,202,34,57,34,34,83,83,127,109,109,109,127,127,34,34,127,127,127,83,78,78,78,202,34,39,127,127,78,78,78,127,34,171,34,127,65,65,65,171,26,65,65,65,26,26,78,78,26,127,26,127,171,171,171,127,34,78,78,78,26,26,26,78,26,26,26,65,26,26,109,109,34,78,78,78,34,34,171,171,52,52,52,127,52,52,127,127,47,171,34,34,140,140,140,171,47,52,47,127,140,140,140,65,47,47,78,78,47,47,52,52,140,52,140,184,140,140,78,78,21,140,140,140,47,47,47,171,47,140,47,140,47,47,140,140,34,47,109,109,34,34,78,78,34,78,34,215,78,78,78,78,96,140,140,140,140,140,140,171,96,140,96,127,34,34,34,101,96,140,140,140,96,96,52,52,47,78,47,47,47,47,171,171,21,96,78,78,96,96,96,78,140,47,140,96,140,140,122,122,21,140,78,78,21,21,96,96,34,184,34,96,34,34,184,184,47,70,140,140,140,140,140,96,47,47,47,47,96,96,96,47,47,47,140,140,47,47,47,47,91,96,91,140,91,91,140,140,21,47,47,47,47,47,47,47,47,91,47,184,47,47,78,78,47,47,47,47,47,47,39,39,47,39,47,91,140,140,140,153,21,184,39,39,39,39,39,91,21,184,21,91,39,39,39,39,65,65,65,65,65,65,91,91,65,65,65,184,65,65,65,184,109,140,140,140,21,21,21,184,60,153,60,60,60,60,153,153,109,60,153,153,109,109,60,60,34,34,34,60,34,34,122,122,109,153,109,109,153,153,153,91,109,153,109,122,60,60,60,171,47,109,60,60,47,47,153,153,47,60,47,122,60,60,60,153,29,47,109,109,153,153,153,91,34,109,34,153,34,34,153,153,34,34,109,109,34,34,109,109,34,109,34,91,60,60,60,91,122,60,34,34,184,184,184,60,122,135,122,34,153,153,153,91,122,153,153,153,122,122,109,109,34,135,34,34,34,34,91,91,122,60,60,60,60,60,60,47,60,47,60,60,60,60,153,153,122,153,153,153,122,122,109,109,122,109,122,83,122,122,60,60,122,60,34,34,34,34,34,60,122,153,122,104,60,60,60,104,60,122,60,60,60,60,60,60,60,60,60,60,91,91,91,153,29,60,122,122,153,153,153,60,78,52,78,153,78,78,166,166,78,52,52,52,78,78,78,78,78,34,78,197,52,52,52,104,29,78,104,104,104,104,104,60,29,104,29,78,122,122,122,78,122,73,73,73,122,122,34,34,122,73,122,166,73,73,73,166,21,122,166,166,60,60,60,122,60,47,60,47,60,60,73,73,21,122,122,122,21,21,166,166,73,60,73,104,73,73,122,122,21,73,21,21,60,60,60,166,21,104,21,166,73,73,73,166,47,21,166,166,47,47,122,122,47,166,47,122,166,166,166,91,29,47,47,47,135,135,135,47,135,122,135,122,135,135,135,135,42,135,73,73,42,42,47,47,42,47,42,179,135,135,135,73,42,166,135,135,135,135,135,104,42,166,42,135,135,135,135,122,42,135,135,135,42,42,104,104,73,73,73,73,73,73,210,210,29,42,73,73,135,135,135,197,135,135,135,135,135,135,135,135,29,122,122,122,29,29,73,73,135,42,135,73,135,135,47,47,91,73,42,42,42,42,42,166,91,73,91,73,73,73,73,73,91,91,42,42,91,91,104,104,135,117,135,166,135,135,73,73,42,166,91,91,179,179,179,91,29,65,29,179,29,29,65,65,135,91,91,91,135,135,42,42,135,42,135,65,91,91,91,91,42,117,135,135,42,42,42,117,42,91,42,135,86,86,86,135,42,42,42,42,42,42,135,135,42,86,42,86,179,179,179,86,42,73,73,73,42,42,42,135,34,73,34,34,34,34,86,86,42,34,135,135,42,42,179,179,34,42,34,86,34,34,179,179,60,86,42,42,34,34,34,73,60,179,60,117,86,86,86,86,60,60,179,179,60,60,60,60,135,135,135,60,135,135,117,117,16,42,148,148,55,55,55,148,55,148,55,55,55,55,148,148,29,55,55,55,29,29,55,55,29,60,29,117,148,148,148,91,104,148,29,29,148,148,148,148,104,117,104,55,55,55,55,179,104,55,55,55,104,104,148,148,42,55,42,117,42,42,55,55,29,42,42,42,104,104,104,73,148,86,148,104,148,148,148,148,29,148,179,179,29,29,104,104,104,42,104,135,104,104,86,86,29,148,55,55,55,55,55,60,29,86,29,55,179,179,179,130,148,29,86,86,148,148,104,104,148,86,148,55,104,104,104,86,117,130,29,29,29,29,29,86,55,179,55,104,55,55,192,192,55,42,42,42,55,55,55,55,55,148,55,104,148,148,148,78,117,55,104,104,104,104,104,78,117,55,117,55,55,55,55,148,29,99,99,99,29,29,148,148,29,99,29,148,55,55,55,99,117,55,55,55,55,55,55,55,55,55,55,55,55,55,86,86,117,55,55,55,117,117,47,47,148,55,148,47,148,148,47,47,73,161,117,117,47,47,47,192,73,47,73,99,29,29,29,192,73,73,47,47,73,73,73,73,99,73,99,130,99,99,99,99,16,73,73,73,117,117,117,73,68,148,68,148,68,68,29,29,117,68,161,161,117,117,68,68,117,161,117,73,161,161,161,68,55,117,42,42,42,42,42,42,55,68,55,42,117,117,117,68,55,161,161,161,55,55,99,99,68,161,68,117,68,68,68,68,16,55,68,68,55,55,55,99,68,161,68,55,68,68,130,130,16,68,161,161,16,16,117,117,42,161,42,117,42,42,161,161,130,161,42,42,42,42,42,192,130,42,130,117,117,117,117,55,130,130,42,42,130,130,68,68,42,99,42,68,42,42,174,174,37,192,130,130,161,161,161,130,130,99,130,161,130,130,161,161,130,130,130,130,130,130,42,42,130,42,130,42,99,99,99,130,37,68,68,68,68,68,68,205,37,55,37,55,68,68,68,68,130,130,130,130,130,130,161,161,130,130,130,117,117,117,117,236,37,130,68,68,37,37,37,68,130,42,130,42,130,130,68,68,37,130,112,112,37,37,68,68,68,68,68,130,68,68,68,68,86,68,37,37,99,99,99,68,86,112,86,161,130,130,130,68,86,86,161,161,86,86,60,60,174,161,174,60,174,174,161,161,24,60,86,86,86,86,86,86,37,42,37,86,37,37,60,60,130,37,86,86,130,130,112,112,130,112,130,68,37,37,37,86,37,130,130,130,81,81,81,81,37,205,37,130,130,130,130,161,37,81,81,81,37,37,174,174,68,130,68,174,68,68,174,174,37,68,68,68,29,29,29,55,29,81,29,29,29,29,130,130,37,174,174,174,37,37,81,81,29,81,29,174,29,29,81,81,37,29,29,29,29,29,29,174,37,112,37,174,81,81,81,81,55,37,174,174,55,55,55,55,55,130,55,55,130,130,130,112,24,174,37,37,143,143,143,55,50,174,50,143,50,50,130,130,50,143,143,143,50,50,50,50,50,81,50,81,55,55,55,112,24,55,143,143,143,143,143,205,24,81,24,174,143,143,143,112,50,50,50,50,50,50,143,143,50,143,50,143,143,143,143,143,99,50,112,112,37,37,37,50,37,81,37,81,37,37,218,218,99,81,81,81,99,99,143,143,143,143,143,143,143,143,174,174,99,143,99,99,37,37,37,130,99,104,99,81,143,143,143,81,50,99,55,55,50,50,81,81,50,50,50,143,174,174,174,125,24,99,81,81,99,99,99,81,143,81,143,50,143,143,99,99,24,143,125,125,24,24,143,143,24,81,24,174,99,99,99,174,50,187,37,37,37,37,37,73,50,187,50,37,143,143,143,99,50,143,143,143,50,50,50,50,99,50,99,143,99,99,50,50,24,50,143,143,50,50,50,125,94,50,94,50,94,94,143,143,24,94,143,143,24,24,50,50,50,50,50,55,50,50,50,50,50,94,50,50,50,50,50,94,50,81,50,81,50,50,50,187,50,50,42,42,50,50,42,42,143,94,143,42,143,143,156,156,112,187,42,42,42,42,42,42,24,94,24,187,24,24,94,94,68,42,42,42,68,68,68,68,68,68,68,125,94,94,94,94,112,68,68,68,68,68,68,94,112,187,112,143,143,143,143,143,63,24,24,24,63,63,156,156,63,63,63,63,156,156,156,68,112,63,156,156,112,112,112,156,37,63,37,37,37,37,63,63,112,37,125,125,112,112,156,156,156,112,156,156,156,156,94,94,50,156,112,112,63,63,63,63,50,174,50,187,63,63,63,63,50,50,156,156,50,50,63,63,63,125,63,125,63,63,156,156,19,50,112,112,156,156,156,112,37,94,37,156,37,37,156,156,37,37,156,156,37,37,37,37,37,112,37,262,112,112,112,143,125,112,37,37,63,63,63,156,125,94,125,63,37,37,37,169,125,187,187,187,125,125,138,138,156,37,156,94,156,156,94,94,125,156,156,156,125,125,125,63,37,112,37,125,37,37,37,37,125,37,94,94,125,125,63,63,63,63,63,187,63,63,50,50,125,50,63,63,63,63,63,187,125,156,125,112,156,156,156,112,125,125,112,112,125,125,112,112,125,86,125,63,63,63,63,112,32,63,37,37,37,37,37,107,125,63,125,156,125,125,107,107,63,63,63,63,63,63,125,125,63,63,63,63,63,63,63,156,32,63,63,63,94,94,94,107,32,156,32,63,125,125,125,200,81,156,156,156,81,81,55,55,81,156,81,55,169,169,169,156,32,55,55,55,81,81,81,55,81,81,81,37,81,81,200,200,32,55,55,55,32,32,81,81,107,107,107,81,107,107,63,63,125,107,32,32,125,125,125,200,125,81,125,81,76,76,76,200,125,125,37,37,125,125,76,76,76,169,76,125,76,76,169,169,32,125,169,169,63,63,63,169,63,125,63,50,63,63,50,50,24,63,76,76,24,24,125,125,24,125,24,76,169,169,169,125,24,63,76,76,76,76,76,169,24,125,24,76,24,24,24,76,24,63,63,63,24,24,107,107,76,169,76,76,76,76,169,169,32,24,169,169,50,50,50,169,50,125,50,50,50,50,125,125,32,169,169,169,32,32,50,50,138,50,138,169,138,138,50,50,45,125,138,138,138,138,138,63,45,138,45,50,76,76,76,76,45,45,50,50,45,45,50,50,138,182,138,200,138,138,76,76,32,169,138,138,138,138,138,138,45,107,45,169,45,45,138,138,45,138,138,138,45,45,138,138,45,138,45,50,107,107,107,50,32,76,76,76,76,76,76,76,32,213,32,63,76,76,76,76,138,138,138,138,138,138,138,138,138,138,138,169,138,138,138,244,94,125,125,125,32,32,32,99,138,76,138,45,138,138,76,76,94,138,50,50,94,94,76,76,45,45,45,138,45,45,169,169,94,76,94,94,76,76,76,138,94,76,94,76,45,45,45,76,138,94,107,107,138,138,120,120,138,169,138,45,76,76,76,169,19,169,94,94,182,182,182,68,32,94,32,182,32,32,182,182,138,32,68,68,138,138,94,94,138,94,138,94,45,45,45,50,45,45,138,138,94,94,94,45,45,94,45,138,138,138,138,94,45,45,45,45,45,45,94,94,89,138,89,138,89,89,138,138,45,45,45,45,45,45,45,50,45,138,45,45,45,45,89,89,45,182,182,182,45,45,76,76,45,76,45,182,45,45,138,138,45,76,37,37,37,37,37,63,45,89,45,37,138,138,138,151,37,45,182,182,37,37,45,45,37,89,37,89,182,182,182,182,19,89,45,45,37,37,37,37,63,76,63,37,63,63,120,120,63,89,89,89,63,63,63,63,63,182,63,94,63,63,63,182,19,138,138,138,138,138,138,120,19,120,19,182,151,151,151,45,58,58,58,58,58,58,151,151,58,58,58,138,151,151,151,63,107,58,58,58,32,32,32,89,32,58,32,63,32,32,120,120,107,151,151,151,107,107,151,151,151,32,151,89,151,151,151,151,107,120,107,107,58,58,58,169,107,182,107,151,58,58,58,89,45,107,151,151,45,45,58,58,45,120,45,120,58,58,58,151,120,45,45,45,107,107,107,226,151,76,151,89,151,151,107,107,32,151,151,151,32,32,151,151,32,182,32,89,107,107,107,257,32,45,107,107,107,107,107,112,32,89,32,151,58,58,58,89,32,58,58,58,32,32,89,89,182,58,182,58,182,182,133,133,120,32,89,89,151,151,151,89,151,107,151,151,151,151,58,58,120,107,107,107,120,120,133,133,32,32,32,151,32,32,89,89,58,182,58,58,58,58,58,182,58,195,58,45,45,45,45,195,58,58,58,58,58,58,151,151,151,107,151,107,151,151,81,81,120,58,107,107,107,107,107,107,120,81,120,58,120,120,58,58,32,58,58,58,32,32,102,102,32,102,32,58,151,151,151,58,120,102,32,32,58,58,58,102,120,102,120,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,89,89,89,151,76,58,58,58,120,120,120,151,151,50,151,58,151,151,50,50,76,151,50,50,76,76,164,164,50,120,50,195,50,50,195,195,76,50,76,76,32,32,32,195,76,195,76,102,50,50,50,102,102,76,76,76,102,102,76,76,102,133,102,58,102,102,102,195,27,76,76,76,120,120,120,76,71,76,71,120,71,71,151,151,120,71,32,32,120,120,71,71,120,164,120,120,71,71,71,164,58,164,120,120,164,164,164,71,58,71,58,120,45,45,45,71,58,45,45,45,58,58,71,71,120,45,120,133,120,120,71,71,19,164,164,164,58,58,58,45,71,102,71,58,71,71,120,120,19,71,71,71,19,19,58,58,58,71,58,164,58,58,102,102,19,164,71,71,71,71,71,164,19,133,19,133,164,164,164,177,45,19,120,120,45,45,164,164,45,120,45,164,164,164,164,89,40,164,45,45,45,45,45,164,133,195,133,45,133,133,120,120,133,120,120,120,133,133,133,133,133,45,133,164,71,71,71,102,40,102,45,45,45,45,45,76,40,177,40,195,133,133,133,71,133,164,164,164,133,133,102,102,133,164,133,102,164,164,164,146,40,133,133,133,133,133,133,120,133,45,133,45,133,133,45,45,40,102,102,102,40,40,71,71,71,71,71,71,71,71,208,208,133,58,40,40,71,71,71,94,133,71,133,195,133,133,133,58,133,133,164,164,133,133,133,133,120,120,120,71,120,120,239,239,27,133,71,71,40,40,40,71,133,71,133,45,133,133,45,45,40,133,71,71,40,40,133,133,40,115,40,164,71,71,71,71,89,71,71,71,71,71,71,71,89,71,89,71,40,40,40,71,89,102,102,102,89,89,115,115,133,164,133,40,133,133,71,71,27,89,164,164,89,89,89,71,177,63,177,89,177,177,63,63,27,177,164,164,27,27,63,63,89,89,89,208,89,89,89,89,133,45,40,40,40,40,40,151,133,63,133,63,89,89,89,89,133,133,115,115,133,133,115,115,40,71,40,115,40,40,89,89,40,133,133,133,84,84,84,133,40,84,40,84,40,40,133,133,40,133,133,133,40,40,84,84,40,84,40,133,177,177,177,84,40,133,71,71,71,71,71,177,40,177,40,133,71,71,71,58,32,32,32,32,32,32,84,84,32,32,32,133,133,133,133,58,40,177,177,177,40,40,40,71,32,84,32,84,32,32,177,177,40,32,84,84,40,40,32,32,32,32,32,71,32,32,177,177,58,115,40,40,84,84,84,84,58,84,58,177,177,177,177,89,58,58,58,58,58,58,133,133,133,58,133,177,133,133,115,115,27,177,40,40,146,146,146,58,53,58,53,146,53,53,146,146,53,53,133,133,53,53,146,146,53,146,53,71,53,53,53,133,27,84,53,53,58,58,58,53,27,115,27,53,146,146,146,89,27,146,146,146,27,27,84,84,146,177,146,146,146,146,115,115,102,53,53,53,53,53,53,177,53,146,53,53,53,53,146,146,102,146,146,146,102,102,53,53,40,115,40,115,40,40,53,53,102,84,40,40,40,40,40,84,102,221,102,71,84,84,84,71,146,102,146,146,146,146,146,146,146,146,146,146,177,177,177,84,27,146,102,102,40,40,40,133,102,133,102,40,102,102,84,84,53,146,146,146,53,53,102,102,53,58,53,58,84,84,84,84,27,53,53,53,177,177,177,128,27,128,27,84,84,84,84,84,146,102,102,102,146,146,84,84,146,53,146,53,102,102,102,84,53,146,128,128,27,27,27,146,27,146,27,84,27,27,177,177,53,102,102,102,53,53,190,190,40,40,40,102,40,40,76,76,53,190,53,53,146,146,146,76,53,102,53,102,146,146,146,76,102,53,53,53,102,102,53,53,102,146,102,76,53,53,53,128,115,53,146,146,53,53,53,146,97,128,97,53,97,97,53,53,27,97,146,146,27,27,97,97,27,146,27,252,53,53,53,97,53,53,53,53,53,53,53,146,53,53,53,53,53,53,53,53,53,53,53,53,53,53,84,84,53,84,53,53,53,53,190,190,115,53,45,45,53,53,53,45,146,45,146,53,146,146,45,45,115,146,159,159,115,115,190,190,45,45,45,190,45,45,45,45,71,97,27,27,27,27,27,190,71,97,71,53,45,45,45,45,71,71,71,71,71,71,71,71,97,128,97,53,97,97,97,97,115,71,71,71,71,71,71,71,115,97,115,71,115,115,146,146,66,146,146,146,66,66,27,27,66,27,66,190,159,159,159,115,115,66,66,66,159,159,159,190,115,71,115,66,159,159,159,66,40,115,115,115,40,40,66,66,40,40,40,40,66,66,66,190,53,40,128,128,115,115,115,66,159,159,159,115,159,159,159,159,53,159,97,97,53,53,159,159,66,115,66,128,66,66,66,66,53,177,53,53,66,66,66,159,53,66,53,97,159,159,159,146,66,53,66,66,66,66,128,128,66,128,66,128,159,159,159,159,14,53,115,115,159,159,159,115,40,115,40,159,40,40,159,159,40,40,159,159,40,40,40,40,40,159,40,190,40,40,40,190,128,115,40,40,115,115,115,53,128,146,128,115,40,40,40,159,128,66,66,66,128,128,97,97,40,66,40,66,40,40,172,172,128,190,190,190,128,128,128,159,159,141,159,128,159,159,97,97,128,159,97,97,128,128,159,159,128,159,128,97,128,128,66,66,128,115,40,40,40,40,40,97,128,40,128,159,97,97,97,128,66,128,66,66,66,66,66,66,66,190,66,203,53,53,53,89,35,53,66,66,66,66,66,66,128,190,128,159,128,128,115,115,128,159,159,159,128,128,128,128,128,115,128,66,115,115,115,234,35,89,128,128,66,66,66,141,35,115,35,66,40,40,40,159,128,40,40,40,128,128,66,66,128,159,128,159,110,110,110,159,35,66,66,66,66,66,66,66,66,128,66,66,66,66,66,66,35,66,66,66,35,35,66,66,97,66,97,66,97,97,110,110,84,159,35,35,128,128,128,66,84,203,84,159,159,159,159,97,84,84,58,58,84,84,159,159,172,58,172,110,172,172,159,159,35,58,58,58,84,84,84,203,84,58,84,84,84,84,40,40,35,84,203,203,35,35,58,58,35,58,35,110,84,84,84,84,128,110,110,110,110,110,110,141,128,66,128,110,35,35,35,84,128,128,128,128,128,128,84,84,79,84,79,79,79,79,203,203,35,128,40,40,128,128,128,159,79,79,79,128,79,79,128,128,35,79,172,172,35,35,128,128,66,172,66,128,66,66,172,172,27,128,66,66,66,66,66,79,27,53,27,53,79,79,79,79,27,27,128,128,27,27,128,128,172,79,172,172,172,172,128,128,35,66,79,79,79,79,79,79,27,172,27,128,27,27,79,79,27,27,27,27,27,27,66,66,27,66,27,172,110,110,110,172,35,172,79,79,79,79,79,79,35,172,35,141,172,172,172,79,53,53,53,53,53,53,128,128,53,53,53,172,128,128,128,110,48,172,172,172,35,35,35,53,141,53,141,53,141,141,172,172,48,141,53,53,48,48,128,128,141,141,141,128,141,141,66,66,48,141,48,48,79,79,79,172,48,79,48,110,53,53,53,110,141,48,53,53,141,141,185,185,141,203,141,203,79,79,79,110,22,172,141,141,141,141,141,110,48,141,48,141,48,48,172,172,48,48,141,141,48,48,141,141,48,141,48,128,141,141,141,141,35,141,48,48,110,110,110,110,35,53,35,48,79,79,79,53,35,79,79,79,35,35,216,216,79,66,79,48,79,79,79,79,97,141,141,141,141,141,141,141,141,141,141,141,141,141,172,172,97,141,141,141,97,97,128,128,35,128,35,128,35,35,102,102,97,79,141,141,141,141,141,79,97,79,97,53,53,53,53,53,48,97,79,79,48,48,48,48,48,141,48,123,172,172,172,123,22,79,97,97,79,79,79,79,97,141,97,79,97,97,79,79,141,48,48,48,141,141,97,97,141,110,141,79,123,123,123,79,22,172,141,141,79,79,79,79,22,172,22,97,97,97,97,172,35,185,185,185,35,35,97,97,35,185,35,71,185,185,185,71,48,35,71,71,141,141,141,97,141,97,141,97,141,141,97,97,48,48,48,48,48,48,48,48,97,141,97,71,97,97,48,48,48,97,48,48,141,141,141,110,48,97,48,123,48,48,48,154,92,48,97,97,92,92,141,141,92,141,92,97,141,141,141,247,22,48,48,48,48,48,48,141,48,53,48,141,48,48,48,48,48,48,92,92,48,48,185,185,48,185,48,92,79,79,79,141,48,79,48,48,48,48,48,185,48,141,48,79,40,40,40,79,48,40,40,40,48,48,92,92,141,40,141,40,141,141,154,154,22,48,185,185,40,40,40,185,40,48,40,40,40,40,92,92,22,185,185,185,22,22,92,92,40,48,40,92,40,40,40,40,66,79,66,66,66,66,66,92,66,123,66,48,92,92,92,92,66,66,66,66,66,66,185,185,66,97,66,92,66,66,185,185,110,141,141,141,141,141,141,141,22,123,22,123,22,22,185,185,61,154,154,154,61,61,61,61,61,61,61,154,154,154,154,66,110,61,61,61,154,154,154,154,110,66,110,154,61,61,61,61,35,35,35,35,35,35,61,61,35,66,35,66,123,123,123,92,110,154,154,154,110,110,110,198,154,154,154,35,154,154,92,92,110,154,154,154,110,110,123,123,61,110,61,61,61,61,172,172,48,185,110,110,61,61,61,61,48,92,48,154,154,154,154,66,48,48,61,61,48,48,123,123,61,123,61,123,61,61,154,154,30,48,48,48,110,110,110,48,154,229,154,110,154,154,92,92,35,154,110,110,35,35,154,154,35,154,35,92,154,154,154,185,35,185,35,35,110,110,110,154,35,260,35,48,110,110,110,141,35,110,110,110,35,35,92,92,61,154,61,154,61,61,92,92,123,61,61,61,35,35,35,167,185,92,185,35,185,185,61,61,123,185,136,136,123,123,35,35,154,92,154,92,154,154,92,92,123,110,154,154,154,154,154,92,123,61,123,61,110,110,110,92,35,123,136,136,35,35,35,35,35,154,35,154,92,92,92,61,123,185,61,61,61,61,61,110,61,185,61,198,61,61,48,48,61,48,48,48,61,61,61,61,61,61,61,185,154,154,154,48,123,110,154,154,154,154,154,110,123,84,123,61,110,110,110,61,123,110,110,110,123,123,84,84,123,61,123,61,61,61,61,110,123,61,61,61,35,35,35,61,35,105,35,105,35,35,61,61,123,154,154,154,123,123,105,105,61,35,61,154,61,61,105,105,61,105,123,123,61,61,61,154,61,61,61,154,61,61,61,154,61,61,61,61,61,61,61,61,92,61,92,105,92,92,154,154,30,61,61,61,123,123,123,198,154,154,154,53,154,154,61,61,79,154,53,53,79,79,154,154,79,53,79,105,167,167,167,154,79,123,53,53,53,53,53,53,79,198,79,53,79,79,79,105,79,35,35,35,79,79,198,198,53,105,53,79,53,53,105,105,30,79,79,79,105,105,105,53,105,79,105,105,105,105,61,61,30,105,105,105,30,30,79,79,123,79,123,198,123,123,79,79,123,79,74,74,74,74,74,198,123,154,123,154,35,35,35,136,123,123,74,74,123,123,167,167,74,123,74,74,74,74,167,167,22,167,123,123,167,167,167,123,61,74,61,167,61,61,123,123,61,48,48,48,61,61,48,48,61,48,61,48,74,74,74,159,22,48,123,123,123,123,123,136,22,74,22,167,167,167,167,123,74,61,61,61,74,74,105,105,74,61,74,167,123,123,123,185,22,74,74,74,22,22,22,74,61,61,61,74,61,61,167,167,22,61,105,105,22,22,167,167,74,74,74,61,74,74,167,167,48,136,22,22,167,167,167,136,48,180,48,167,123,123,123,61,48,48,167,167,48,48,123,123,167,167,167,105,167,167,92,92,30,167,48,48,48,48,48,48,136,167,136,48,136,136,48,48,136,136,123,123,136,136,123,123,136,123,136,61,136,136,136,154,43,48,136,136,74,74,74,74,43,105,43,136,48,48,48,154,43,48,48,48,43,43,180,180,136,198,136,198,136,136,74,74,43,167,167,167,136,136,136,48,136,105,136,136,136,136,105,105,43,167,167,167,43,43,136,136,136,136,136,74,136,136,123,123,43,48,136,136,136,136,136,105,43,48,43,167,105,105,105,48,74,43,74,74,74,74,74,74,74,74,74,74,211,211,211,97,30,61,43,43,74,74,74,74,136,97,136,74,136,136,198,198,136,136,136,136,136,136,136,136,136,167,136,167,136,136,136,242,30,123,123,123,123,123,123,123,30,242,30,97,74,74,74,74,136,43,43,43,136,136,74,74,136,48,136,48,48,48,48,149,92,136,74,74,43,43,43,136,43,136,43,118,43,43,167,167,92,74,74,74,92,92,74,74,74,74,74,136,74,74,74,74,92,74,92,92,43,43,43,74,92,74,92,74,105,105,105,74,136,92,118,118,136,136,167,167,136,43,136,74,74,74,74,167,43,92,167,167,92,92,92,167,180,74,180,66,180,180,92,92,30};

int main()
{
    int a,b,a0,b0,len;
    //std::stringstream cout;
    
    while (std::cin>>a>>b)
    {
        {
        bool flag=a<=b;
        a0=(flag?a:b);
        b0=(flag?b:a);
        }
        
        int max=0;
        for (int n=a0; n<=b0; ++n)
        {
            unsigned int i = n;
            len = 1;
            while (i != 1)
            {
                if (i < MAX && t[i])
                {
                    len += t[i]-1;
                    break;
                }
                i = (ODD(i) ? ((i << 1)|1)+i : i >> 1);
                ++len;
            }
            if (n < MAX) t[n] = len;
            max=(len<=max?max:len);
        }
        
        std::cout<<a<<' '<<b<<' '<<max<<'\n';   
    }
    //std::cout<<cout.str();
}
