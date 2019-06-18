#include<stdio.h>
int main()
{
    int t,cs=1,a,b,n,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        n=a,sum=0;
        while(n<=b)
        {
            if(n%2!=0) sum+=n;
            n++;
        }
        printf("Case %d: %d\n",cs++,sum);
    }
    return 0;
}
