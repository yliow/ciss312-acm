#include <iostream>
#include <sstream>

#define ODD(x) ((x) & 1)

#define MAX 1000001
int t[MAX] =


int main()
{
    int a,b,a0,b0,len;
    //std::stringstream cout;
    
    while (std::cin>>a>>b)
    {
        {
        bool flag=a<=b;
        a0=(flag?a:b);
        b0=(flag?b:a);
        }
        
        int max=t[a0];
        for (int n=a0+1; n<=b0; ++n)
        {
            len=t[n];
            max=(len<=max?max:len);
        }
        
        std::cout<<a<<' '<<b<<' '<<max<<'\n';   
    }
    //std::cout<<cout.str();
}