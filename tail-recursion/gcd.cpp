#include <iostream>

int gcd(int m, int n)
{
    if (m < n) return gcd(n, m);
    if (m % n == 0) return n;
    else return gcd(m % n, n);
}

int main()
{
    std::cout << gcd(5, 100) << '\n';
}
