#include<stdio.h>
#include<queue>
#include<vector>
#define inf 1000000000
#define mx 100000
using namespace std;

vector<int>node[mx],cost[mx];

struct data{
    int city,dist;
    bool operator < (const data &p) const{
        return p.dist<dist;
    }
};
int dijkstra(int source,int destination)
{
    int d[mx];
    data u,v;
    priority_queue<data>q;
    for(int i=0;i<mx;i++) d[i]=inf;
    u.city=source,u.dist=0;
    q.push(u);
    d[source]=0;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        for(int i=0;i<node[u.city].size();i++)
        {
            v.city=node[u.city][i];
            v.dist=d[u.city]+cost[u.city][i];
            if(v.dist<d[v.city])
            {
                d[v.city]=v.dist;
                q.push(v);
            }
        }
    }
    return d[destination];
}
int main()
{
    int N,n,m,S,T,u,v,w;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d%d%d%d",&n,&m,&S,&T);
        while(m--)
        {
            scanf("%d%d%d",&u,&v,&w);
            node[u].push_back(v);
            node[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int ans=dijkstra(S,T);
        if(ans!=inf)
            printf("Case #%d: %d\n",i,ans);
        else
            printf("Case #%d: unreachable\n",i);

        for(int i=0;i<mx;i++)
        {
            node[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
