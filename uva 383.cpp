#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<map>
using namespace std;
vector<int>vec[100];
map<string,int>mp;
queue<int>q;
int vis[100],lvl[500];
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
                q.push(v);
                lvl[v]=lvl[u]+1;
            }
        }
    }
}
int main()
{
    int i,j,k,t,m,n,p,r,source,dest,ts=1,dol;
    char u[10][10],v[10][10],s[10][10];
    scanf("%d",&t);
    printf("SHIPPING ROUTES OUTPUT\n\n");
    while(t--)
    {
        scanf("%d%d%d",&m,&n,&p);
        r=m;
        i=0;
        while(m--)
        {
            scanf("%s",s[i]);
            i++;
        }
        k=1,i=0;
        while(n--)
        {
            scanf("%s %s",&u[i],&v[i]);

            if(mp[u[i]]==0)
                mp[u[i]]=k++;
            if(mp[v[i]]==0)
                mp[v[i]]=k++;
            vec[mp[u[i]]].push_back(mp[v[i]]);
            vec[mp[v[i]]].push_back(mp[u[i]]);
            i++;
        }

        printf("DATA SET  %d\n\n",ts++);
        while(p--)
        {
            for(i=1;i<=r;i++)
            {
                vis[i]=0;
                lvl[i]=999999;
            }
            scanf("%d",&dol);
            scanf("%s %s",u[0],v[0]);
            source=mp[u[0]];
            dest=mp[v[0]];
            bfs(source);

            if(lvl[dest]!=999999&&dest!=0&&source!=0)
            {
                printf("$%d\n",dol*100*lvl[dest]);
            }
            else
                printf("NO SHIPMENT POSSIBLE\n");
        }
        printf("\n");
        for(i=1;i<=r;i++)
            vec[i].clear();
        mp.clear();
    }
     printf("END OF OUTPUT\n");
    return 0;
}
