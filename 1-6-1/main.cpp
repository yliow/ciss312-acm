#include <iostream>
#include <sstream>

#define ODD(x) ((x) & 1)

#define MAX 1000001

int length[MAX] =

int main()
{
    int a, b, a0, b0, len, max, n, i;
    std::stringstream cout;

    while (std::cin >> a >> b)
    {
        bool flag = a <= b;
        a0 = (flag ? a : b);
        b0 = (flag ? b : a);
        max = length[a0];
        for (n = a0+1; n <= b0; ++n)
        {            
            //len = length[n];
            max = (max < length[n] ? length[n] : max);
            //if (max < len) max = len;
            /*
            if (length[n])
            {
                len = length[n];
                max = (len <= max ? max : len);
                continue;
            }
            else
            {
                i = (ODD(n) ? ((n << 1) | 1) + n : n >> 1);
                len = 2;
                while (i != 1)
                {
                    //if (i < MAX && length[i])
                    {
                        len += length[i] - 1;
                        length[n] = len;
                        break;
                    }
                    i = (ODD(i) ? ((i << 1) | 1) + i : i >> 1);
                    ++len;
                };
                max = (len <= max ? max : len);
                continue;
            }
            */
        }
        cout << a << ' ' << b << ' ' << max << '\n';
    }
    std::cout << cout.str();
}