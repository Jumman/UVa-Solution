#include<stdio.h>
int main()
{
    int i,j,k,n,t,a[15];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        k=n/2;
        printf("Case %d: %d\n",i,a[k]);
    }
    return 0;
}
