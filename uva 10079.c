#include<stdio.h>
int main()
{
    long n;
    while(scanf("%ld",&n)==1&&n>=0)
    {
        printf("%ld\n",(n*(n+1)/2+1));
    }
    return 0;
}
