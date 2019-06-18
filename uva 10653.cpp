#include<stdio.h>
#include<queue>
using namespace std;
queue<int>q;

int vis[1010][1010],lvl[1010][1010],r,c;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

void bfs(int i,int j)
{
    int x,y,k,u,v,l;

    q.push(i);
    q.push(j);
    lvl[i][j]=0;

    while(!q.empty())
    {
        u=q.front();

        q.pop();
        v=q.front();

        q.pop();

        vis[u][v]=1;

        for(k=0;k<4;k++)
        {
            x=dx[k]+u;
            y=dy[k]+v;

            if(x>=0&&x<r&&y>=0&&y<c&&vis[x][y]==0)
            {

                vis[x][y]=1;
                lvl[x][y]=lvl[u][v]+1;

                q.push(x);

                q.push(y);

            }
        }
    }
}
int main()
{
    int i,j,lb,nb,sr,sc,fr,fc;
    int R,C;
    while((scanf("%d%d",&r,&c))==2&&(r!=0||c!=0))
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                 vis[i][j]=0;
                 lvl[i][j]=999999;

            }
        }
        scanf("%d",&lb);
        while(lb--)
        {

            scanf("%d%d",&R,&nb);
            while(nb--)
            {
                scanf("%d",&C);
                vis[R][C]=1;

            }

        }
        scanf("%d%d",&sr,&sc);
        scanf("%d%d",&fr,&fc);
        bfs(sr,sc);
        printf("%d\n",lvl[fr][fc]);

    }
    return 0;
}
