#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#define min -2147483647

using namespace std;
vector<int>vec[2510];
queue<int>q;

int d[2510],cnt[2510],max1;
void bfs(int node)
{
    int u,v,i;
    d[node]=0;

    q.push(node);
    while(!q.empty())
    {
        int u,v,i;
        u=q.front();
        q.pop();
        for(i=0;i<vec[u].size();i++)
        {
            v=vec[u][i];
            if(d[v]==min)
            {

                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int e,s,t,u,v,i,j,n;
    while(scanf("%d",&e)==1)
    {
        n=e;
        for(i=0;i<n;i++)
        {
            scanf("%d",&s);
            for(j=0;j<s;j++)
            {
                scanf("%d",&u);
                vec[i].push_back(u);
            }
        }

        scanf("%d",&t);
        while(t--)
        {
            for(i=0;i<n;i++)
            {
                d[i]=min;
                cnt[i]=0;

            }
            scanf("%d",&v);
            if(vec[v].size()==0)
                printf("0\n");
            else
            {
                 bfs(v);
                 max1=min;
                 for(i=0;i<n;i++)
                 {
                     if(d[i]!=min)
                     {
                              printf("cnt %d\t",cnt[d[i]]);
                        cnt[d[i]]++;
                     printf("after cnt %d\n",cnt[d[i]]);
                     }

                 }
                 for(i=0;i<n;i++)
                 {
                     if(max1<cnt[i])
                     {
                         max1=cnt[i];
                         j=i;
                     }
                 }
                 printf("%d %d\n",max1,j);
            }
        }
        for(i=0;i<n;i++)
            vec[i].clear();
    }
    return 0;
}

