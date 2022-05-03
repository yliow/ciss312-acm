#include <iostream>
#include <vector>
const int N = 10000;
int f(int n)
{
    return (n % 2 == 0 ? n / 2 : 3*n+1);
}

int length(int n)
{
    int len = 1;
    while (n != 1)
    {
        n = f(n);
        len++;
    }
    return len;
}

int main()
{
    std::vector< int > v;
    std::cout << "{0,";
    for (int n = 1; n < N; n++)
    {
        int l = length(n);
        if (l > 255) v.push_back(n);
        std::cout << length(n) << ',';
        if (n % 20 == 0) std::cout << '\n';
    }
    std::cout << length(N) << "};\n";
}
