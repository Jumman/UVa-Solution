#include<stdio.h>
#include<vector>
#define mx 2010
bool cycle;
using namespace std;

vector<int>edge[mx],cost[mx];
int n,d[mx];
int inf=1<<29;

int BellManFord(int s,int f)
{
    for(int i=0;i<n;i++)
        d[i]=(i==s) ? 0 :inf;
    for(int k=0;k<n;k++)
    {
        bool done=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<edge[i].size();j++)
            {
                int u=i,v=edge[i][j],uv=cost[i][j];
                if(d[u]+uv<d[v])
                {
                    d[v]=d[u]+uv;
                    done=false;
                }
            }
        }
        if(done) break;
    }
        cycle=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<edge[i].size();j++)
            {
                int u=i,v=edge[i][j],uv=cost[i][j];
                if(d[u]+uv<d[v])
                    return cycle=true;
            }
        }
        return d[f];
}
int main()
{
    int c,m,x,y,t;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d%d",&n,&m);
        while(m--)
        {
            scanf("%d%d%d",&x,&y,&t);
            edge[x].push_back(y);
            //edge[y].push_back(x);
            cost[x].push_back(t);
            //cost[y].push_back(t);
        }
        BellManFord(0,n-1);
        if(cycle)
            printf("possible\n");
        else
            printf("not possible\n");
        for(int i=0;i<n;i++)
        {
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
