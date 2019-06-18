#include<stdio.h>
int i,j,cnt,lop,r,c,n,vis[20][20];
char ro[20][20];
void loop(int i,int j)
{
    if(i<0||j<0||i>=r||j>=c) return;
    if(vis[i][j]==2) return ;
    if(ro[i][j]=='E'&&vis[i][j]==1)
    {
        lop++;
        vis[i][j]=2;
        loop(i,j+1);
    }
    else if(ro[i][j]=='W'&&vis[i][j]==1)
    {
        lop++;
        vis[i][j]=2;
        loop(i,j-1);
    }
    else if(ro[i][j]=='S'&&vis[i][j]==1)
    {
        lop++;
        vis[i][j]=2;
        loop(i+1,j);
    }
   else if(ro[i][j]=='N'&&vis[i][j]==1)
    {
        lop++;
        vis[i][j]=2;
        loop(i-1,j);
    }
}
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r||j>=c) return;
    if(ro[i][j]=='E'&&vis[i][j]==0)
    {
        cnt++;
        vis[i][j]=1;
        dfs(i,j+1);
    }
    else if(ro[i][j]=='W'&&vis[i][j]==0)
    {
        cnt++;
        vis[i][j]=1;
        dfs(i,j-1);
    }
    else if(ro[i][j]=='S'&&vis[i][j]==0)
    {
        cnt++;
        vis[i][j]=1;
        dfs(i+1,j);
    }
    else if(ro[i][j]=='N'&&vis[i][j]==0)
    {
        cnt++;
        vis[i][j]=1;
        dfs(i-1,j);
    }
    else if(vis[i][j]==1)
    {
        loop(i,j);
    }
}
int main()
{
    while((scanf("%d%d%d",&r,&c,&n))==3&&r!=0&&c!=0&&n!=0)
    {
        getchar();
        for(i=0;i<r;i++)
        {
                gets(ro[i]);
                for(j=0;j<c;j++)
                {
                    vis[i][j]=0;
                }
        }
        cnt=0,lop=0;
        dfs(0,n-1);

        if(lop==0)
        {
            printf("%d step(s) to exit\n",cnt);
        }
        else{
            printf("%d step(s) before a loop of %d step(s)\n",cnt-lop,lop);
        }
    }
    return 0;
}
