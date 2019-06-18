#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,digit;
    double sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0.0;
        for(i=n;i>=1;i--)
            sum+=log10(i);
        digit=floor(sum)+1;
        printf("%d\n",digit);
    }
    return 0;
}
