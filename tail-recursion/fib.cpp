#include <iostream>


// Standard recursive version
int fib(int n)
{
    if (n < 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}

// table lookup ...  fib2(n) for n < size of table 
int fib2(int n)
{
    static int table[1000] = {0};

    if (n < 2) return 1;
    else
    {
        int k = table[n];
        if (k < 1)
        {
            k = table[n] = fib2(n - 1) + fib2(n - 2);
        }
        return k;
    }
}

// tail recursion
/*
   0, 1, 2, 3, 4, 5,  6,  7,  8,  9
   --------------------------------
   1, 1, 2, 3, 5, 8, 13, 21, 34, 55
   a, b, c
      a, b, c
         a, b, c

*/


int fib6_helper(int i, int n, int a, int b, int c)
{
    if (i == n) return c;
    else
        return fib6_helper(i + 1, n, b, c, b + c);
}

int fib6(int n)
{
    if (n <= 1) return 1;
    else return fib6_helper(2, n, 1, 1, 2);
}



// Same as above but instead of counting i = 2 up to i = n,
// count from i = n to i = 2 (or from n - 2 to 0)
int fib5_helper(int i, int a, int b, int c)
{
    if (i == 2) return c;
    else
        return fib5_helper(i - 1, b, c, b + c);
}

int fib5(int n)
{
    if (n < 2) return 1;
    else return fib5_helper(n, 1, 1, 2);
}




// imitation of tail recursion without function call
int fib1(int n)
{
    if (n < 2) return 1;
        
    int a = 1, b = 1, c = 2;
    
FIB: // parameter n
    if (n == 1) return c;
    else
    {
        c = a + b;
        a = b; b = c; 
        --n;
        goto FIB;
    }
}


// Using a for-loop
int fib7(int n)
{
    if (n < 2) return 1;
        
    int a = 1, b = 1, c = 2;

    for (int i = n; i > 1; --i)
    {
        c = a + b; a = b; b = c; 
    }
    return c;
}







int main()
{
   for (int i = 0; i < 12; i++)
   {
       std::cout << i << ' '
                 << fib(i) << ' '
                 << fib1(i) << ' '
                 << fib5(i) << ' '
                 << fib6(i) << ' '
                 << fib7(i) << ' '
                 << '\n';
   }
    return 0;
}
