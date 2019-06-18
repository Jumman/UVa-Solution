#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;

//its topological sorting.

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0&&m==0) break;
        vector<int>adj[110];
        int indeg[110];

        for(int i=0;i<110;i++)
            indeg[i]=0;
        for(int i=0;i<m;i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int>q;
        for(int i=1;i<=n;i++)
            if(indeg[i]==0)
                q.push(i);

        vector<int>ans;

        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(int i=0;i<adj[u].size();i++)
            {
                indeg[adj[u][i]]--;
                if(indeg[adj[u][i]]==0)
                    q.push(adj[u][i]);
            }
        }

        printf("%d",ans[0]);

        for(int i=1;i<ans.size();i++)
            printf(" %d",ans[i]);
        printf("\n");
        }
    return 0;
}
