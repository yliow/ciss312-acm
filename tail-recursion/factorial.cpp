#include <iostream>

int factorial(int n)
{
    if (n < 2) return 1;
    else return n * factorial(n - 1);
}

int factorial1(int n)
{
    int acc = 1;
FACTORIAL:
    if (n < 2) return acc;
    else
    {
        acc *= n;
        --n;
        goto FACTORIAL;
    }
}


int main()
{
    std::cout << "recursive\n";
    for (int i = 0; i < 100000; i++)
    {
        if (i % 100 == 0) std::cout << i << std::endl;
        factorial(i);
    }
    std::cout << std::endl;
    std::cout << "tail recursive\n";
    for (int i = 0; i < 100000; i++)
    {
        if (i % 100 == 0) std::cout << i << std::endl;
        factorial1(i);
    }
}
