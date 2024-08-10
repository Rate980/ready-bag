#ifndef POISON_HPP
#define POISON_HPP
#include <stdint.h>

int32_t poisons[628][2] = {
    {0, 70},
    {0, 69},
    {1, 69},
    {2, 69},
    {2, 69},
    {3, 69},
    {4, 69},
    {4, 69},
    {5, 69},
    {6, 69},
    {6, 69},
    {7, 69},
    {8, 69},
    {9, 69},
    {9, 69},
    {10, 69},
    {11, 69},
    {11, 68},
    {12, 68},
    {13, 68},
    {13, 68},
    {14, 68},
    {15, 68},
    {15, 68},
    {16, 67},
    {17, 67},
    {17, 67},
    {18, 67},
    {19, 67},
    {20, 67},
    {20, 66},
    {21, 66},
    {22, 66},
    {22, 66},
    {23, 65},
    {24, 65},
    {24, 65},
    {25, 65},
    {25, 65},
    {26, 64},
    {27, 64},
    {27, 64},
    {28, 63},
    {29, 63},
    {29, 63},
    {30, 63},
    {31, 62},
    {31, 62},
    {32, 62},
    {32, 61},
    {33, 61},
    {34, 61},
    {34, 60},
    {35, 60},
    {35, 60},
    {36, 59},
    {37, 59},
    {37, 58},
    {38, 58},
    {38, 58},
    {39, 57},
    {40, 57},
    {40, 56},
    {41, 56},
    {41, 56},
    {42, 55},
    {42, 55},
    {43, 54},
    {44, 54},
    {44, 53},
    {45, 53},
    {45, 53},
    {46, 52},
    {46, 52},
    {47, 51},
    {47, 51},
    {48, 50},
    {48, 50},
    {49, 49},
    {49, 49},
    {50, 48},
    {50, 48},
    {51, 47},
    {51, 47},
    {52, 46},
    {52, 46},
    {53, 45},
    {53, 45},
    {53, 44},
    {54, 44},
    {54, 43},
    {55, 42},
    {55, 42},
    {56, 41},
    {56, 41},
    {56, 40},
    {57, 40},
    {57, 39},
    {58, 38},
    {58, 38},
    {58, 37},
    {59, 37},
    {59, 36},
    {60, 36},
    {60, 35},
    {60, 34},
    {61, 34},
    {61, 33},
    {61, 32},
    {62, 32},
    {62, 31},
    {62, 31},
    {63, 30},
    {63, 29},
    {63, 29},
    {63, 28},
    {64, 27},
    {64, 27},
    {64, 26},
    {64, 26},
    {65, 25},
    {65, 24},
    {65, 24},
    {65, 23},
    {66, 22},
    {66, 22},
    {66, 21},
    {66, 20},
    {67, 20},
    {67, 19},
    {67, 18},
    {67, 18},
    {67, 17},
    {67, 16},
    {68, 16},
    {68, 15},
    {68, 14},
    {68, 13},
    {68, 13},
    {68, 12},
    {68, 11},
    {69, 11},
    {69, 10},
    {69, 9},
    {69, 9},
    {69, 8},
    {69, 7},
    {69, 7},
    {69, 6},
    {69, 5},
    {69, 4},
    {69, 4},
    {69, 3},
    {69, 2},
    {69, 2},
    {69, 1},
    {69, 0},
    {69, 0},
    {69, -1},
    {69, -2},
    {69, -3},
    {69, -3},
    {69, -4},
    {69, -5},
    {69, -5},
    {69, -6},
    {69, -7},
    {69, -7},
    {69, -8},
    {69, -9},
    {69, -10},
    {69, -10},
    {69, -11},
    {69, -12},
    {69, -12},
    {68, -13},
    {68, -14},
    {68, -14},
    {68, -15},
    {68, -16},
    {68, -16},
    {68, -17},
    {67, -18},
    {67, -18},
    {67, -19},
    {67, -20},
    {67, -20},
    {66, -21},
    {66, -22},
    {66, -22},
    {66, -23},
    {66, -24},
    {65, -24},
    {65, -25},
    {65, -26},
    {65, -26},
    {64, -27},
    {64, -28},
    {64, -28},
    {63, -29},
    {63, -30},
    {63, -30},
    {63, -31},
    {62, -32},
    {62, -32},
    {62, -33},
    {61, -33},
    {61, -34},
    {61, -35},
    {60, -35},
    {60, -36},
    {60, -36},
    {59, -37},
    {59, -38},
    {58, -38},
    {58, -39},
    {58, -39},
    {57, -40},
    {57, -41},
    {57, -41},
    {56, -42},
    {56, -42},
    {55, -43},
    {55, -43},
    {54, -44},
    {54, -44},
    {54, -45},
    {53, -46},
    {53, -46},
    {52, -47},
    {52, -47},
    {51, -48},
    {51, -48},
    {50, -49},
    {50, -49},
    {49, -50},
    {49, -50},
    {48, -51},
    {48, -51},
    {47, -52},
    {47, -52},
    {46, -53},
    {46, -53},
    {45, -54},
    {45, -54},
    {44, -54},
    {44, -55},
    {43, -55},
    {43, -56},
    {42, -56},
    {41, -57},
    {41, -57},
    {40, -57},
    {40, -58},
    {39, -58},
    {39, -59},
    {38, -59},
    {37, -59},
    {37, -60},
    {36, -60},
    {36, -60},
    {35, -61},
    {34, -61},
    {34, -62},
    {33, -62},
    {33, -62},
    {32, -63},
    {31, -63},
    {31, -63},
    {30, -63},
    {29, -64},
    {29, -64},
    {28, -64},
    {28, -65},
    {27, -65},
    {26, -65},
    {26, -65},
    {25, -66},
    {24, -66},
    {24, -66},
    {23, -66},
    {22, -67},
    {22, -67},
    {21, -67},
    {20, -67},
    {20, -68},
    {19, -68},
    {18, -68},
    {18, -68},
    {17, -68},
    {16, -68},
    {16, -69},
    {15, -69},
    {14, -69},
    {14, -69},
    {13, -69},
    {12, -69},
    {11, -69},
    {11, -70},
    {10, -70},
    {9, -70},
    {9, -70},
    {8, -70},
    {7, -70},
    {7, -70},
    {6, -70},
    {5, -70},
    {5, -70},
    {4, -70},
    {3, -70},
    {2, -70},
    {2, -70},
    {1, -70},
    {0, -70},
    {0, -70},
    {-1, -70},
    {-2, -70},
    {-2, -70},
    {-3, -70},
    {-4, -70},
    {-5, -70},
    {-5, -70},
    {-6, -70},
    {-7, -70},
    {-7, -70},
    {-8, -70},
    {-9, -70},
    {-9, -70},
    {-10, -70},
    {-11, -70},
    {-12, -70},
    {-12, -70},
    {-13, -69},
    {-14, -69},
    {-14, -69},
    {-15, -69},
    {-16, -69},
    {-16, -69},
    {-17, -69},
    {-18, -68},
    {-18, -68},
    {-19, -68},
    {-20, -68},
    {-20, -68},
    {-21, -67},
    {-22, -67},
    {-22, -67},
    {-23, -67},
    {-24, -67},
    {-24, -66},
    {-25, -66},
    {-26, -66},
    {-26, -66},
    {-27, -65},
    {-28, -65},
    {-28, -65},
    {-29, -64},
    {-30, -64},
    {-30, -64},
    {-31, -64},
    {-31, -63},
    {-32, -63},
    {-33, -63},
    {-33, -62},
    {-34, -62},
    {-35, -62},
    {-35, -61},
    {-36, -61},
    {-36, -61},
    {-37, -60},
    {-38, -60},
    {-38, -59},
    {-39, -59},
    {-39, -59},
    {-40, -58},
    {-41, -58},
    {-41, -58},
    {-42, -57},
    {-42, -57},
    {-43, -56},
    {-43, -56},
    {-44, -55},
    {-44, -55},
    {-45, -55},
    {-46, -54},
    {-46, -54},
    {-47, -53},
    {-47, -53},
    {-48, -52},
    {-48, -52},
    {-49, -51},
    {-49, -51},
    {-50, -50},
    {-50, -50},
    {-51, -49},
    {-51, -49},
    {-52, -48},
    {-52, -48},
    {-53, -47},
    {-53, -47},
    {-53, -46},
    {-54, -46},
    {-54, -45},
    {-55, -45},
    {-55, -44},
    {-56, -44},
    {-56, -43},
    {-57, -42},
    {-57, -42},
    {-57, -41},
    {-58, -41},
    {-58, -40},
    {-59, -40},
    {-59, -39},
    {-59, -38},
    {-60, -38},
    {-60, -37},
    {-60, -37},
    {-61, -36},
    {-61, -35},
    {-62, -35},
    {-62, -34},
    {-62, -34},
    {-63, -33},
    {-63, -32},
    {-63, -32},
    {-63, -31},
    {-64, -30},
    {-64, -30},
    {-64, -29},
    {-65, -29},
    {-65, -28},
    {-65, -27},
    {-65, -27},
    {-66, -26},
    {-66, -25},
    {-66, -25},
    {-66, -24},
    {-67, -23},
    {-67, -23},
    {-67, -22},
    {-67, -21},
    {-68, -21},
    {-68, -20},
    {-68, -19},
    {-68, -19},
    {-68, -18},
    {-68, -17},
    {-69, -17},
    {-69, -16},
    {-69, -15},
    {-69, -15},
    {-69, -14},
    {-69, -13},
    {-69, -13},
    {-70, -12},
    {-70, -11},
    {-70, -10},
    {-70, -10},
    {-70, -9},
    {-70, -8},
    {-70, -8},
    {-70, -7},
    {-70, -6},
    {-70, -6},
    {-70, -5},
    {-70, -4},
    {-70, -3},
    {-70, -3},
    {-70, -2},
    {-70, -1},
    {-70, -1},
    {-70, 0},
    {-70, 1},
    {-70, 1},
    {-70, 2},
    {-70, 3},
    {-70, 4},
    {-70, 4},
    {-70, 5},
    {-70, 6},
    {-70, 6},
    {-70, 7},
    {-70, 8},
    {-70, 8},
    {-70, 9},
    {-70, 10},
    {-70, 10},
    {-70, 11},
    {-69, 12},
    {-69, 13},
    {-69, 13},
    {-69, 14},
    {-69, 15},
    {-69, 15},
    {-69, 16},
    {-68, 17},
    {-68, 17},
    {-68, 18},
    {-68, 19},
    {-68, 19},
    {-67, 20},
    {-67, 21},
    {-67, 21},
    {-67, 22},
    {-67, 23},
    {-66, 23},
    {-66, 24},
    {-66, 25},
    {-66, 25},
    {-65, 26},
    {-65, 27},
    {-65, 27},
    {-64, 28},
    {-64, 29},
    {-64, 29},
    {-64, 30},
    {-63, 30},
    {-63, 31},
    {-63, 32},
    {-62, 32},
    {-62, 33},
    {-62, 34},
    {-61, 34},
    {-61, 35},
    {-61, 35},
    {-60, 36},
    {-60, 37},
    {-60, 37},
    {-59, 38},
    {-59, 38},
    {-58, 39},
    {-58, 39},
    {-58, 40},
    {-57, 41},
    {-57, 41},
    {-56, 42},
    {-56, 42},
    {-55, 43},
    {-55, 43},
    {-55, 44},
    {-54, 44},
    {-54, 45},
    {-53, 46},
    {-53, 46},
    {-52, 47},
    {-52, 47},
    {-51, 48},
    {-51, 48},
    {-50, 49},
    {-50, 49},
    {-49, 50},
    {-49, 50},
    {-48, 51},
    {-48, 51},
    {-47, 52},
    {-47, 52},
    {-46, 52},
    {-46, 53},
    {-45, 53},
    {-45, 54},
    {-44, 54},
    {-44, 55},
    {-43, 55},
    {-42, 56},
    {-42, 56},
    {-41, 56},
    {-41, 57},
    {-40, 57},
    {-40, 58},
    {-39, 58},
    {-38, 58},
    {-38, 59},
    {-37, 59},
    {-37, 59},
    {-36, 60},
    {-35, 60},
    {-35, 60},
    {-34, 61},
    {-34, 61},
    {-33, 61},
    {-32, 62},
    {-32, 62},
    {-31, 62},
    {-31, 63},
    {-30, 63},
    {-29, 63},
    {-29, 64},
    {-28, 64},
    {-27, 64},
    {-27, 64},
    {-26, 65},
    {-25, 65},
    {-25, 65},
    {-24, 65},
    {-23, 66},
    {-23, 66},
    {-22, 66},
    {-21, 66},
    {-21, 67},
    {-20, 67},
    {-19, 67},
    {-19, 67},
    {-18, 67},
    {-17, 67},
    {-17, 68},
    {-16, 68},
    {-15, 68},
    {-15, 68},
    {-14, 68},
    {-13, 68},
    {-13, 68},
    {-12, 69},
    {-11, 69},
    {-10, 69},
    {-10, 69},
    {-9, 69},
    {-8, 69},
    {-8, 69},
    {-7, 69},
    {-6, 69},
    {-6, 69},
    {-5, 69},
    {-4, 69},
    {-4, 69},
    {-3, 69},
    {-2, 69},
    {-1, 69},
};

#endif