#include<stdio.h>
#include<vector>
using namespace std;
vector<int>vec[210];
int vis[210],color[210],fg;

void dfs(int node)
{
    int i,u;
    vis[node]=1;
    for(i=0;i<vec[node].size();i++)
    {
        u=vec[node][i];
        if(color[u]==color[node])
            fg=1;
        if(vis[u]==0)
        {
            vis[u]=1;
            if(color[node]==1)
                color[u]=2;
            else if(color[node]==2)
                color[u]=1;
            dfs(u);
        }
    }
}
int main()
{
    int n,l,u,v,i;
    while(scanf("%d",&n)==1&&n!=0)
    {
        for(i=0;i<n;i++)
            vis[i]=color[i]=0;
        scanf("%d",&l);
        while(l--)
        {
            scanf("%d%d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        color[0]=1;
        fg=0;
        dfs(0);
        if(fg==0)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

            for(i=0;i<n;i++)
                vec[i].clear();
    }
    return 0;
}
