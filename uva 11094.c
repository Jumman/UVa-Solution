#include<stdio.h>
int i,j,m,n,x,y,p,max,vis[25][25];
char grid[25][25],c;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=m||j>=n){
        return ;
    }
    if(grid[i][j]==c&&vis[i][j]==0){
        vis[i][j]=1;
        p++;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
        if(j==0&&grid[i][n-1]==c){
            dfs(i,n-1);
        }
        if(j==(n-1)&&grid[i][0]==c&&vis[i][j]==1){
            dfs(i,0);
        }
    }
}
int main()
{
    while((scanf("%d%d",&m,&n))==2){
            getchar();
        for(i=0;i<m;i++){
            scanf("%s",grid[i]);
            for(j=0;j<n;j++){
                vis[i][j]=0;
            }
        }
        scanf("%d%d",&x,&y);
        c=grid[x][y];
        dfs(x,y);
        max=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]==c&&vis[i][j]==0){
                     p=0;
                    dfs(i,j);
                    if(p>max){
                        max=p;
                    }
                }
            }
        }
         printf("%d\n",max);
    }
    return 0;
}
