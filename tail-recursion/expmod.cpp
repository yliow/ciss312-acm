#include <iostream>
#include <cmath>

int expmod(int b, int e, int n)
{
    if (e == 0) return 1;
    
    int acc = 1, bpower = b;
EXPMOD:   
    if (e == 0) return acc;
    else
    {
        if (e & 1 == 1)
        {
            acc *= bpower;
            acc %= n;
        }
        bpower *= bpower;
        bpower %= n;
        e >>= 1;
        goto EXPMOD;
    }
}

int main()
{
    for (int i = 0; i < 30; i++)
    {
        std::cout << int(pow(2, i)) % 1000
                  << ' '
                  << expmod(2, i, 1000) << std::endl;
    }
}
