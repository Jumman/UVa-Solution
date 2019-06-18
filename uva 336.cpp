#include<stdio.h>
#include<queue>
#include<vector>
#include<map>
using namespace std;

vector<int>vec[50];
queue<int>q;
map<int,int>mp;
int lvl[50],vis[50];
void bfs(int source)
{
    int u,v,l,i;
    q.push(source);
    lvl[source]=0;
    while(!q.empty())
    {
        u=q.front();
        vis[u]=1;
        q.pop();
        l=vec[u].size();
        for(i=0;i<l;i++)
        {
            v=vec[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                q.push(v);
                lvl[v]=lvl[u]+1;
            }
        }
    }
}
int main()
{
    int nc,u,v,i,k,tc=1,cnt,source,ttl;
    while((scanf("%d",&nc))==1&&nc!=0)
    {
        k=1;
        while(nc--)
        {
            scanf("%d %d",&u,&v);
            if(mp[u]==0)
                mp[u]=k++;
            if(mp[v]==0)
                mp[v]=k++;

            vec[mp[u]].push_back(mp[v]);
            vec[mp[v]].push_back(mp[u]);
        }
        while((scanf("%d%d",&source,&ttl))==2&&(source!=0||ttl!=0))
        {
            for(i=1;i<k;i++)
            {
                vis[i]=0;
                lvl[i]=99999999;
            }
            u=mp[source];

           /* if(u==0)
            {
                printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",tc++,k-1,source,ttl);
                continue;
            }*/


            cnt=0;
            bfs(u);
            for(i=1;i<k;i++)
            {
                 if(lvl[i]>ttl)
                    cnt++;

            }


            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,cnt,source,ttl);
        }
        mp.clear();
        for(i=1;i<k;i++)
            vec[i].clear();
    }
    return 0;
}
