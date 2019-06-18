#include<stdio.h>
using namespace std;

long phi(long p)
{
    long ans,i;
    if(p==1) return 0;
    ans=p;
    if(p%2==0)
    {
        ans-=(ans/2);
        while(p%2==0)
            p/=2;
    }
    for(i=3;i*i<=p;i+=2)
    {
        if(p%i==0)
        {
            ans-=(ans/i);
            while(p%i==0)
                p/=i;
        }
    }
    if(p>1)
        ans-=(ans/p);
    return ans;
}
int main()
{
    long n;
    while(scanf("%ld",&n)==1&&n!=0)
    {
        printf("%ld\n",phi(n));
    }
    return 0;
}

