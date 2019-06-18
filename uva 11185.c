#include<stdio.h>
int main()
{
    long long n,i,j;
    int  ter[100000];
    while((scanf("%lld",&n))==1&&n>=0)
    {

        if(n==0)
            printf("0\n");
        else
        {
            i=1;
        while(n!=0)
        {
            ter[i++]=n%3;
            n=n/3;
        }
        for(j=i-1;j>0;j--)
             printf("%d",ter[j]);
        printf("\n");
        }
    }
    return 0;
}
