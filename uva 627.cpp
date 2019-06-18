#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>vec[310];
queue<int>q;
int p[310],a[310],vis[310],fg;
void bfs(int node)
{
    int u,v,i;
    vis[node]=1;
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
                p[v]=u;
            }
        }
    }
}
int main()
{
    int i,j,k,n,m,u,v;
    char s[500],*word;
    while(scanf("%d",&n)==1)
    {
        j=n;
        while(n--)
        {
            scanf("%d",&u);
            gets(s);
            word=strtok(s," ,-");
            while(word!=NULL)
            {
                sscanf(word,"%d",&v);
                vec[u].push_back(v);
                word=strtok(NULL," ,-");
            }
        }
        scanf("%d",&m);
        printf("-----\n");
        while(m--)
        {
             for(i=1;i<=j;i++)
                vis[i]=0,p[i]=-1;
            scanf("%d%d",&u,&v);
            p[u]=u;
            bfs(u);
            i=1,fg=0;
            while(v!=p[v])
            {
                if(p[v]==-1)
                {
                    fg=1;
                    break;
                }
                a[i]=v;
                v=p[v];
                i++;
            }
            if(fg==1)
                printf("connection impossible\n");
            else
            {
                printf("%d",u);
                for(k=i-1;k>=1;k--)
                    printf(" %d",a[k]);
                printf("\n");
            }
        }
        for(i=1;i<=j;i++)
            vec[i].clear();
    }
    return 0;
}
