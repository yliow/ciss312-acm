#include <iostream>

int main()
{
    do
    {
        int n, i0, i1;
        std::cin >> n;
        if (std::cin.fail()) break;
        
        int a[1000] = {0};
        std::cin >> i0;
        for (int i = 1; i < n; i++)
        {
            std::cin >> i1;
            int k = i0 - i1;
            //std::cout << i0 << ' ' << i1 << ' ' << k << '\n';
            a[(k >= 0 ? k : -k)] = 1;
            //for (int j = 1; j < n; ++j) std::cout << a[j] << ' ';
            //std::cout << '\n';
            i0 = i1;
        }
        bool jolly = true;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == 0)
            {
                jolly = false;            
            }
        }
        std::cout << (jolly ? "Jolly\n" : "Not jolly\n");
    } while (!std::cin.eof());
    
    return 0;
}
