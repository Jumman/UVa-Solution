#include<stdio.h>
int i,n,j,r,c,count,vis[105][105];
char grid[105][105];
void dfs(int i,int j){
    if(i<0||j<0||i>=r||j>=c){
        return ;
    }
    if(grid[i][j]=='*'&&vis[i][j]==0){
        vis[i][j]=1;
        n++;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i+1,j+1);
        dfs(i+1,j-1);
        dfs(i-1,j);
        dfs(i-1,j+1);
        dfs(i-1,j-1);
    }
}
int main()
{
    while((scanf("%d%d",&r,&c))==2&&r!=0&&c!=0){
        getchar();
        for(i=0;i<r;i++){
            gets(grid[i]);
            for(j=0;j<c;j++){
                vis[i][j];
            }
        }
        count=0;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(grid[i][j]=='*'&&vis[i][j]==0){
                    n=0;
                    dfs(i,j);
                    if(n==1){
                        count++;
                    }
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
