#include<stdio.h>
int main()
{
    int t,cs=1;
    long long ans,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=n*(n-1);
        printf("Case %d: ",cs++);
        if(ans%4==0) printf("%lld\n",ans/4);
        else printf("%lld/2\n",ans/2);
    }
    return 0;
}
