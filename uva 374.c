#include<stdio.h>
long long int bigmod(long long int a,long long int p,long long int m)
{
    if(p==0)
    {
        return 1%m;
    }
    int x=bigmod(a,p/2,m);
    x=(x*x)%m;
    if(p%2==1)
    {
        x=(x*a)%m;
    }
    return x;
}
int main()
{
    long long int a,p,m;
    while((scanf("%lld%lld%lld",&a,&p,&m))==3)
    {
        printf("%lld\n",bigmod(a,p,m));
    }
    return 0;
}
