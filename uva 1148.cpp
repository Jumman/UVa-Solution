#include<stdio.h>
#include<vector>
#include<queue>
#define sz 100010
#define inf 999999
using namespace std;
vector<int>vec[sz];
queue<int>q;
int vis[sz],lvl[sz];
void bfs(int node)
{
    int u,v,i;
    vis[node]=1;
    lvl[node]=0;
    q.push(node);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<vec[u].size();i++)
        {
            v=vec[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                lvl[v]=lvl[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int t,i,j,n,c,u,v;
    scanf("%d",&t);
    while(t--)
    {
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                vis[i]=0;
                lvl[i]=inf;
                scanf("%d %d",&u,&c);
                for(j=0;j<c;j++)
                {
                    scanf("%d",&v);
                    vec[i].push_back(v);
                }
            }
            scanf("%d %d",&u,&v);
            bfs(u);
            printf("%d %d %d\n",u,v,lvl[v]-1);
            if(t) printf("\n");
            for(i=0;i<n;i++)
                vec[i].clear();
        }
         return 0;
    }


