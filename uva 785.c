#include<stdio.h>
#include<string.h>
int i,j,n,vis[100][100];
char grid[100][100],c;
void dfs(int i,int j)
{
    if(grid[i][j]=='X'&&vis[i][j]==0){
        return ;
    }
    if(grid[i][j]==' '&&vis[i][j]==0){
        vis[i][j]=1;
        grid[i][j]=c;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
int main()
{
    while(gets(grid[0])){
        i=1;
        while(gets(grid[i])){
            for(j=0;j<strlen(grid[i]);j++){
                vis[i][j]=0;
            }
            if(grid[i][0]=='_'){
                break;
            }
            i++;
        }
        n=i;
        for(i=0;i<=n;i++){
            for(j=0;j<strlen(grid[i]);j++){
                if(grid[i][j]!='X'&&grid[i][j]!=' '&&grid[i][j]!='_'&&vis[i][j]==0){
                    c=grid[i][j];
                    grid[i][j]=' ';
                    dfs(i,j);
            }
        }
    }
    for(i=0;i<=n;i++){
        printf("%s\n",grid[i]);
    }
}
    return 0;
}
