#include <cstdlib>
#include <iostream>

int main()
{
    int count = 0;
    while (1)
    {
        int numrows, numcols, numrows_e, numcols_e;
        std::cin >> numrows >> numcols;
        if (numrows == 0 && numcols == 0) break;

        count++;
        std::cout << "Field #" << count << ":\n";
        /* allocate mem for 2-d array but with extra boundary */
        numrows_e = numrows + 2;
        numcols_e = numcols + 2;
        int size = (numrows_e) * (numcols_e);
        int * s = new int[size];
        for (int i = 0; i < size; i++) s[i] = 0;
        
        char * input = new char[numcols + 1];
        for (int r = 0; r < numrows; ++r)
        {
            int r_e = r + 1;
            std::cin >> input;
            for (int c = 0; c < numcols; ++c)
            {
                int c_e = c + 1;
                if (input[c] == '*')
                {
                    s[c_e + r_e * numcols_e] = -20;
                    
                    s[c_e - 1 + (r_e - 1)*numcols_e]++;
                    s[c_e     + (r_e - 1)*numcols_e]++;
                    s[c_e + 1 + (r_e - 1)*numcols_e]++;
                    
                    s[c_e - 1 + (r_e)*numcols_e]++;
                    s[c_e + 1 + (r_e)*numcols_e]++;
                    
                    s[c_e - 1 + (r_e + 1)*numcols_e]++;
                    s[c_e     + (r_e + 1)*numcols_e]++;
                    s[c_e + 1 + (r_e + 1)*numcols_e]++;
                }
            }
            
        }
    
        for (int r = 0; r < numrows; r++)
        {
            for (int c = 0; c < numcols; c++)
            {
                int i = s[c + 1 + (r + 1) * numcols_e];
                if (i < 0) std::cout << '*';
                else std::cout << i;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        delete [] s;
    }
    
    return 0;
}
