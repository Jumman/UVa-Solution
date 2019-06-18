#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

vector<int>vec[1110];
queue<int>q;

int vis[1110],lvl[1110];

void bfs(int source)
{
    int u,v,i;
    vis[source]=1;
    lvl[source]=0;
    q.push(source);
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
    int t,p,d,u,v,i,j,source;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&p,&d);

        for(i=0;i<p;i++)
        {
            vis[i]=0;
            lvl[i]=999999;
        }
        while(d--)
        {
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        source=0;
        bfs(source);
        for(i=1;i<p;i++)
            printf("%d\n",lvl[i]);

        if(t) printf("\n");

        for(i=0;i<p;i++)
            vec[i].clear();
    }
    return 0;
}
