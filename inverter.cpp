#include <iostream>
#include <cstdlib>
#include <fstream>

struct BITMAPFILEHEADER{
    uint16_t bfTybe;
    uint32_t bfSize;
    uint16_t bfreserved1;
    uint16_t bfreserved2;
    uint32_t bfOffBits;
};

