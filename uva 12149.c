#include<stdio.h>
/*int main()
{
    int i,n,s[101];
    for(i=0;i<=100;i++)
        s[i]=0;
    for(i=1;i<=100;i++)
        s[i]=s[i-1]+i*i;
    while(scanf("%d",&n)==1&&n!=0)
    {
        printf("%d\n",s[n]);
    }
    return 0;
}*/

int main()
{
    int n;
    while(scanf("%d",&n)==1&&n!=0)
    {
        printf("%d\n",(n*(n+1)*(2*n+1))/6);
    }
    return 0;
}
