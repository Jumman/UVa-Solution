#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<map>
#include<queue>
using namespace std;

vector<int>vec[500];
queue<int>q;
map<string,int>mp;
int vis[500],lvl[500],p[500];
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
                lvl[v]=lvl[u]+1;
                q.push(v);
                p[v]=u;
            }
        }
    }
}
int main()
{
    int t,m,n,i,j,k,source,dest;
    char ch1[500],ch2[500],st[500][500];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        i=1,k=1;
        while(m--)
        {
            scanf("%s %s",ch1,ch2);
            if(mp[ch1]==0)
            {
                mp[ch1]=k;
                strcpy(st[k],ch1);
                k++;
            }
            if(mp[ch2]==0)
            {
                mp[ch2]=k;
               strcpy(st[k],ch2);
               k++;
            }
            vec[mp[ch1]].push_back(mp[ch2]);
			vec[mp[ch2]].push_back(mp[ch1]);
        }
        while(n--)
        {
            scanf("%s %s",ch1,ch2);
            source=mp[ch1];
            dest=mp[ch2];
            for(i=1;i<k;i++)
            {
                vis[i]=0;
                lvl[i]=999999;
                p[i]=i;
            }
            bfs(source);
            j=0;
            while(dest!=p[dest])
            {

                ch1[j++]=st[dest][0];
                dest=p[dest];
            }
            ch1[j]=st[source][0];
            for(i=j;i>=0;i--)
                printf("%c",ch1[i]);
            printf("\n");
        }
        if(t) printf("\n");
        mp.clear();
		for(i=1;i<k;i++)
			vec[i].clear();
    }
    return 0;
}
