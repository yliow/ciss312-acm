#include <iostream>
#include <sstream>
#define ODD(x) ((x)&1)
#define MAX 1000001
int length[MAX] =

int main()
{
    int a,b,a0,b0,len,max,n,i;
    int *p,*q;
    //std::stringstream cout;

    while (std::cin>>a>>b)
    {
        //bool flag=a<=b;
        if (a>b) std::swap(a,b);
        /*a0=(flag?a:b);
          b0=(flag?b:a);*/

        p=length+a;
        q=length+b;
        max=*p;
        for(++p;p<=q;++p)
        {
            len=*p;
            max=(len<=max?max:len);
        }        
        std::cout<<a<<' '<<b<<' '<<max<<'\n';
    }
    //std::cout<<cout.str();
}