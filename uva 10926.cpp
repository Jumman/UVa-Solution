#include<stdio.h>
#include<vector>
using namespace std;
int k,cnt[110],vis[110];
vector<int>vec[110];
void dfs(int x)
{
    int j;
    int l=vec[x].size();
    vis[x]=1;
    for(j=0;j<l;j++)
    {
        int v=vec[x][j];
        if(vis[v]==0)
        {
            cnt[k]++;
            dfs(v);
        }
    }
}
int main()
{
    int i,j,t,n,u,a,max;
   while(scanf("%d",&n)==1&&n!=0)
   {

       for(i=1;i<=n;i++)
    {
        vec[i].clear();
        vis[i]=0;
        cnt[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            scanf("%d",&u);
            vec[i].push_back(u);
        }
    }
    for(i=1;i<=n;i++)
    {
        k=i;
        dfs(i);
        for(j=1;j<=n;j++)
        {
            vis[j]=0;
        }
    }
    max=0;
    for(i=1;i<=n;i++)
    {
        if(cnt[i]>max)
        {
            max=cnt[i];
            a=i;
        }
    }
    printf("%d\n",a);
   }
    return 0;
}

