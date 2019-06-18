#include<stdio.h>
#include<vector>
using namespace std;
int i,l,x,y,z,cnt,vis[10010];
vector<int>vec[10010];
void dfs(int v)
{
    int i,u;
    int l=vec[v].size();
    vis[v]=1;
    for(i=0;i<l;i++)
    {
        u=vec[v][i];
        if(vis[u]==0)
        {
            cnt++;
            dfs(u);
        }
    }
}
int main()
{
    int t,n,m,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&l);
         for(i=1;i<=n;i++)
        {
            vec[i].clear();
            vis[i]=0;
        }
        while(m--)
        {
            scanf("%d%d",&x,&y);
            vec[x].push_back(y);
        }
        cnt=0;
        while(l--)
        {
            scanf("%d",&z);
            if(vis[z]==0)
            {
                cnt++;
                dfs(z);
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

