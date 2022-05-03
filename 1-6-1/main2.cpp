// this version has a complete table

#include <iostream>
#include <sstream>

#define MAX 1000000

int length[MAX] =

int main()
{
    int a, b, a0, b0, len, max, n, i;
    int *p, *q;
    std::stringstream cout;

    while (std::cin >> a >> b)
    {
        bool flag = a <= b;
        a0 = (flag ? a : b);
        b0 = (flag ? b : a);

        p = &(length[a0]);
        q = &([length[b0]) + 1;
        max = 0;
        for (int *i = p; i < q; ++i)
        {
            len = *i;
            if (max < len) max = len;
        }
        cout << a << ' ' << b << ' ' << max << '\n';
    }
    std::cout << cout.str();
}
