#include<stdio.h>
#include<string.h>
int i,j,r,c,t,cnt,m,n,vis[110][110];
char g[110][110];
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r||j>=c) return;
    if(g[i][j]=='0'&&vis[i][j]==0)
    {
        vis[i][j]=1;
        cnt++;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
int main()
{
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        gets(g[0]);
        sscanf(g[0],"%d %d",&m,&n);
        i=0;
        while(gets(g[i]))
        {
            if(g[i][0]=='\0')
            {
               break;
            }

            i++;
        }
        r=i;
        printf("%d\n",r);
        c=strlen(g[0]);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                vis[i][j]=0;
            }
        }
        cnt=0;
        dfs(m-1,n-1);
        printf("%d\n",cnt);
        if(t) printf("\n");
    }
    return 0;
}
