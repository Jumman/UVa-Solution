#include<stdio.h>
int g[1001][1001]={};
int main()
{
    int i,n;
    g[0][0]=1,g[1][0]=2;
    for(i=2;i<1001;i++)
        g[i][0]=g[i-1][0]+g[i-2][0];
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",g[n][0]);
    }
    return 0;
}
