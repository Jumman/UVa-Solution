#include<stdio.h>
#include<algorithm>
#define sz 25
using namespace std;

int inf=1e9;
int d[sz][sz],g[sz][sz];

void floydWarshall()
{
    for(int i=1;i<=20;i++)
        for(int j=1;j<=20;j++)
            d[i][j]=g[i][j];

    for(int k=1;k<=20;k++)
        for(int i=1;i<=20;i++)
            for(int j=1;j<=20;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}
int main()
{
    int cs=1,x,a,b,n;
    while(scanf("%d",&x)!=EOF)
    {
        for(int i=1;i<=20;i++)
            for(int j=1;j<=20;j++)
            {
                g[i][j]=inf;
                d[i][j]=0;
            }

        for(int i=1;i<20;i++)
        {
            if(i!=1)
                scanf("%d",&x);
            while(x--)
            {
                int c;
                scanf("%d",&c);
                g[i][c]=1;
                g[c][i]=1;
            }
        }
        floydWarshall();
        scanf("%d",&n);
        printf("Test Set #%d\n",cs++);
        while(n--)
        {
            scanf("%d%d",&a,&b);
            printf("%2d to %2d: %d\n",a,b,d[a][b]);
        }
        printf("\n");
    }
    return 0;
}
