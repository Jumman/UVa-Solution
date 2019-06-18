#include<stdio.h>
int main()
{
    int t,i,j,k,n,max,d,r[100010];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        r[0]=0;
        max=0;
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&r[j]);
            k=r[j]-r[j-1];
            if(k>max)
                max=k;
        }
        k=max;
        for(j=1;j<=n;j++)
        {
            d=r[j]-r[j-1];
            if(d<max)
                max=max;
            else if(d==max)
                max=max-1;
            else
            {
                k+=1;
                break;
            }
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
