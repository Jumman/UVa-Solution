#include<stdio.h>
int i,j,r,t,count,vis[27][27];
char grid[27][27];
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r||j>=r){
        return ;
    }
    if(grid[i][j]=='1'&&vis[i][j]==0){
        vis[i][j]=1;
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
    while((scanf("%d",&r))==1){
        getchar();
        for(i=0;i<r;i++){
            gets(grid[i]);
            for(j=0;j<r;j++){
                vis[i][j]=0;
            }
        }
        count=0,t++;
        for(i=0;i<r;i++){
            for(j=0;j<r;j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    count++;
                    dfs(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",t,count);
    }
    return 0;
}
