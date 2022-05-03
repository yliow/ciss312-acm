/*

Suppose we're scanning for max in n=a to n=b.

 ------a--------------------------------b--

and we know that L, M and N are high points

 -L----a-----------M------------N-------b--

 i.e. M is the highest value for 1,...,a,a+1,...,M
 Then we only need to check for M,M+1,...b. In fact
 since N is the next high point, we only need to
 check N,N+1,... But since there are no new max points,
 N must be the max point.

 i.e. the max must be f(N) where N is the largest max point
 in [a,b].

 For fast search, we need an array that points b to N.
 i.e. PREVMAXPOINT[N] = N
      PREVMAXPOINT[N+1] = N
      PREVMAXPOINT[N+2] = N
      ...
      PREVMAXPOINT[b] = N

 ALGORITHM:
      if PREVMAXPOINT[b] >= a:
          max is f[PREVMAXPOINT[b]]
          
 What if there are no high points in [a,b]?
 
 -L----a------------------b--M--

 We only know that the max value must be <= f(L).
 If while computing f(a), f(a+1), ... we encounter f(L), then
 this MUST be the max.

 ALGORITHM:
       if PREVMAXPOINT[b] < a:
           max = 0
           prevmax = f(PREVMAXPOINT[b])
           for (n = a; n <= b; n++)
           {
               fvalue = f(n)
               if (fvalue > max) max = fvalue
               if (max == prevmax) break
           }
 */




/*
  n = 2k + r
  r = 0: n -> n/2
  r = 1: n -> 3n+1 = 3(2k+1)+1 = 6k+4 -> 3k+2

  n = 4k + r
  r = 0: n -> n/2
           -> n/4
  r = 1: n -> 3n+1 = 3(4k+1) = 12k+3
           -> 3(12k+3)+1=36k+10
           -> 18k+5
           -> 3(18k+5)+1 = 54k+16
           -> 27k+8
           -> 3(27k+8)+1 = 81k+25
  r = 2: n -> 2k+1
           -> 3(2k+1)+1 = 6k+4
           -> 3k+2
  r = 3: n -> 3(4k+3)+1 = 12k+10
           -> 6k+5
           -> 3(6k+5)+1 = 18k+16
           -> 9k+8


  n = 6k+r
  r = 1: n -> 3(6k+1)+1 = 18k+4 -> 9k+2

  
  n = 8k+r. 3(8k+r)+1 = 24k+(3r+1).
  The question is to what extent 3r+1 is divisible by 2. Because 24=2^3x3,
  we're only interested in whether 2, 4, 8 divides 3r+1.
  If r is odd, 2 divides 3r+1.
  If 4 divides 3r+1, then 3r=-1(4) => r=-3(4) => r=1(8)
  If 8 divides 3r+1, then 3r=-1(8) => r=-3(8) => r=5(8)
  r = 0: n -> -> -> k
  r = 1: n -> 3(8k+1)+1=24k+4 -> -> 6k+1 -> -> 9k+2
  r = 2: n -> 4k+1 -> 3(4k+1)+1=12k+4 -> -> 3k+1
  r = 3: n -> 3(8k+3)+1=24k+4 -> -> 6k+1 -> 3(6k+1)+1=18k+4 -> 9k+2
  r = 4: n -> -> 2k+1 -> 3(2k+1)+1=6k+4 -> -> 9k+2
  r = 5: n -> 3(8k+5)+1=24k+16 -> -> -> 3k+2
  r = 6: n -> 4k+3 -> 3(4k+3)+1=12k+10 -> 6k+5 -> 3(6k+5)+1=18k+16 -> 9k+8
  r = 7: n -> 3(8k+7)+1=24k+22 -> 12k+11 -> 3(12k+11)+1=36k+34 -> 18k+17 -> 3(18k+17)+1=3(18k)+52 -> 27k+26

  [NOTE THAT consider mod 8 for n ends up considering mod 6]

  qk+r <---> (q,r)
  8k+1 <---> (8,1) -> (3*8, 3*1+1) = (24, 4) -> (12, 2) -> (6, 1)

  (odd, odd)   -> ?
  (even, odd)  -> (3*even, 3*odd+1) -> (3*3*even, 3*(3*odd+1)+1) = (9*even, 9*odd+4) -> (9*even/2, 9*
  (odd,  even) -> ?
  (even, even) -> (even/2, even/2)
  
 */

#include <iostream>
#include <exception>

const int N = 100001;
unsigned int t[N] = {0};

int newmax[1000] = {0};
int len_newmax = 0;

#define f(n) ((n) % 2 == 0 ? (n) / 2 : 3*(n)+1) 

int MAX = 0; // max n
unsigned int length(unsigned int n)
{
    int len = 1;
    unsigned int i = n;
    while (i != 1)
    {
        if (i < N && t[i] != 0)
        {
            len = t[i] + len - 1;
            i = 1;
        }
        else
        {
            i = f(i);
            len++;
        }
    }
    if (n < N) t[n] = len;
    return len;
}

int main()
{
    int max = 0;
    int n;

    std::cout << "{0,";
    for (n = 1; n < 1000001; n++)
    {
        std::cout << length(n);
        if (n < 1000000) std::cout << ',';
        else std::cout << "};\n";
    }


    /*
    max = -1;
    int prevmaxpoint = 0;
    //std::cout << "{0,";
    int count = 0;
    for (int i = 1; i < 1000001; ++i)
    {
        if (max < (int) length(i))
        {
            max = length(i);
            prevmaxpoint = i;
            count++;
        }
        //std::cout << prevmaxpoint;
        //if (i < 1000000) std::cout << ',';
        //else std::cout << "};\n";
    }
    std::cout << "count:" << count << '\n';
    */
}

