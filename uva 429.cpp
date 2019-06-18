#include<stdio.h>
#include<queue>
#include<vector>
#include<string>
#include<string.h>
#include<map>

using namespace std;
#define inf 99999

#define si 210

vector<int>vec[si];
queue<int>q;
map<string,int>mp;

char word[si][15],st[30];
int vis[si],lvl[si];
void bfs(int source)
{
    int u,v,l,i;
    vis[source]=1;
    lvl[source]=0;
    q.push(source);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        l=vec[u].size();
        for(i=0;i<l;i++)
        {
            v=vec[u][i];
            if(vis[v]==0)
            {
                vis[v]=1;
                lvl[v]=lvl[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int t,i,j,k,start,finish,l,l1,cnt,u,v,n;
    char *pnt;
    scanf("%d",&t);
    /*while(getchar()!='\n');
    gets(st);    eitaaa dileo choolbee*/
    getchar();
    getchar();
    while(t--)
    {
        i=1,k=1;
        while(gets(word[i]))
        {
            if(strcmp(word[i],"*")==0) break;

            vec[i].clear();
            mp[word[i]]=k++;
            i++;
        }
        n=i;
        for(i=0;i<n;i++)
        {
            l=strlen(word[i]);
            for(j=i+1;j<n;j++)
            {
                l1=strlen(word[j]);
                if(l==l1)
                {
                    cnt=0;
                    for(k=0;k<l;k++)
                    {
                        if(word[i][k]!=word[j][k])
                            cnt++;
                        if(cnt>1)
                            break;
                    }
                    if(cnt==1)
                    {
                        u=mp[word[i]];
                        v=mp[word[j]];
                        vec[u].push_back(v);
                        vec[v].push_back(u);
                    }
                }
            }
        }
        while(gets(st))
        {
            if(strcmp(st,"")==0) break;
            for(i=1;i<n;i++)
            {
                vis[i]=0;
                lvl[i]=inf;
            }
            pnt=strtok(st," ");
            printf("%s",pnt);
            start=mp[pnt];
            pnt=strtok(NULL," ");
            printf(" %s",pnt);
            finish=mp[pnt];


            bfs(start);

            printf(" %d\n",lvl[finish]);
        }
        if(t) printf("\n");
        mp.clear();
    }
    return 0;
}
