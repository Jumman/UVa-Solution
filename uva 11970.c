#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,t,n,x,in,a[100000];
    double l_n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n==1||n==0)
        {
            printf("Case %d:\n",i);
            continue;
        }
        j=0;
        for(k=2;k*k<n;k++)
        {
            x=n-k*k;
            l_n=x/sqrt(n-x);
            in=l_n;
            if(in==l_n)
            {
                a[j]=x;
                j++;
            }
        }
        printf("Case %d:",i);
        for(k=j-1;k>=0;k--)
            printf(" %d",a[k]);
            printf(" %d",n-1);
        printf("\n");
    }
    return 0;
}
