#include<stdio.h>
#include<string.h>
#include<vector>
#include<queue>
#include<map>
#define sz 1010
#define inf 999999
using namespace std;

vector<int>vec[1010];
queue<int>q;
map<int,int>mp;
int vis[sz],lvl[sz];
int bfs()
{
    int u,v,i,ans=0;
    vis[1]=1;
    lvl[1]=1;
    q.push(1);
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
                ans=lvl[v];
            }
        }
    }
    return ans;
}
int main()
{
    double v,m,d,x[sz],y[sz],x1,y1;
    int ans,n,i,j,k;
    char s[30];
    while(scanf("%lf%lf",&v,&m)==2&&(v!=0||m!=0))
    {
        d=v*m*60.0;
        n=0;
        gets(s);
        while(gets(s))
        {
            if(strlen(s)==0) break;
            sscanf(s,"%lf%lf",&x[n],&y[n]);
            n++;
        }
        for(i=0;i<n;i++)
        {
            vis[i]=0;
            lvl[i]=inf;
        }
        k=1;
        for(i=1,j=2;i<n;i++,j++)
        {
            x1=x[i]-x[j];
            y1=y[i]-y[j];
            if(x1<0) x1=x1*-1;
            if(y1<0) y1=y1*-1;
            if(mp[x1]==0)
                mp[x1]=k++;
            if(mp[y1]==0)
                mp[y1]=k++;
                j=0;
            if(x1<d&&y1<d)
            {
                a[j++]=x1;
                a[j++]=y1;
            }
        }
        ans=bfs();
        if(ans==0) printf("No.\n");
        else
            printf("Yes, visiting %d other holes.\n",ans);
        for(i=0;i<n;i++)
            vec[i].clear();
        mp.clear();
    }
    return 0;
}
