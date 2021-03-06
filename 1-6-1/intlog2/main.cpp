/*

Ways to compute n for the numbers 2^n

*/


#include <iostream>
#include <iomanip>

int main()
{
    unsigned int x = 1;
    for (int j = 0; j < 1000000; j++)
    {
        for (int i = 0; i < 32; i++)
        {
            unsigned int y = (x << i);
            unsigned int e = -1;
            //std::cout << std::setw(10) << std::right << y << " - ";

            
            /*
            e = (
            ((!!(0b1111111111111111000000000000000011111111111111110000000000000000 & y)) << 4)
            |((!!(0b1111111100000000111111110000000011111111000000001111111100000000 & y)) << 3)
            |((!!(0b1111000011110000111100001111000011110000111100001111000011110000 & y)) << 2) 
            |((!!(0b1100110011001100110011001100110011001100110011001100110011001100 & y)) << 1) 
            |((!!(0b1010101010101010101010101010101010101010101010101010101010101010 & y))     )
            );
            */

            
            /*
            if (y == 1) e = 0;
            else if (y == 2) e = 1;
            else if (y == 4) e = 2;
            else if (y == 8) e = 3;
            else if (y == 16) e = 4;
            else if (y == 32) e = 5;
            else if (y == 64) e = 6;
            else if (y == 128) e = 7;
            else if (y == 256) e = 8;
            else if (y == 512) e = 9;
            else if (y == 1024) e = 10;
            else if (y == 2048) e = 11;
            else if (y == 4096) e = 12;
            else if (y == 8192) e = 13;
            else if (y == 16384) e = 14;
            else if (y == 32768) e = 15;
            else if (y == 65536) e = 16;
            else if (y == 131072) e = 17;
            else if (y == 262144) e = 18;
            else if (y == 524288) e = 19;
            else if (y == 1048576) e = 20;
            else if (y == 1048576) e = 20;
            else if (y == 2097152) e = 21;
            else if (y == 4194304) e = 22;
            else if (y == 8388608) e = 23;
            else if (y == 16777216) e = 24;
            else if (y == 33554432) e = 25;
            else if (y == 67108864) e = 26;
            else if (y == 134217728) e = 27; 
            else if (y == 268435456) e = 28;
            else if (y == 536870912) e = 29;
            else if (y == 1073741824) e = 30;
            else if (y == 2147483648) e = 31;
            */

            
            /*
            switch (y)
            {
                case 1: e = 0; break;
                case 2: e = 1; break;
                case 4: e = 2; break;
                case 8: e = 3; break;
                case 16: e = 4; break;
                case 32: e = 5; break;
                case 64: e = 6; break;
                case 128: e = 7; break;
                case 256: e = 8; break;
                case 512: e = 9; break;
                case 1024: e = 10; break;
                case 2048: e = 11; break;
                case 4096: e = 12; break;
                case 8192: e = 13; break;
                case 16384: e = 14; break;
                case 32768: e = 15; break;
                case 65536: e = 16; break;
                case 131072: e = 17; break;
                case 262144: e = 18; break;
                case 524288: e = 19; break;
                case 1048576: e = 20; break;
                case 2097152: e = 21; break;
                case 4194304: e = 22; break;
                case 8388608: e = 23; break;
                case 16777216: e = 24; break;
                case 33554432: e = 25; break;
                case 67108864: e = 26; break;
                case 134217728: e = 27; break; 
                case 268435456: e = 28; break;
                case 536870912: e = 29; break;
                case 1073741824: e = 30; break;
                case 2147483648: e = 31; break;
            }
            */

            
            /*
            unsigned t = y;
            while (t != 1)
            {
                t >>= 1;
                ++e;
            }
            */
            
            //std::cout << std::setw(2) << std::right << e << " (check: i = " << i << ")\n";
        }
    }
    return 0;
}
