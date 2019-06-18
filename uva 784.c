#include<stdio.h>
#include<string.h>
int j,n,k,c,vis[100][100];
char grid[100][100];
void dfs(int a,int b)
{
    if(grid[a][b]=='X'&&vis[a][b]==0){
        return ;
    }
    if(grid[a][b]==' '&&vis[a][b]==0){
        vis[a][b]=1;
        grid[a][b]='#';
        dfs(a,b+1);
        dfs(a,b-1);
        dfs(a+1,b);
        dfs(a+1,b+1);
        dfs(a+1,b-1);
        dfs(a-1,b);
        dfs(a-1,b+1);
        dfs(a-1,b-1);
    }
}
int main()
{
    scanf("%d",&n);
    getchar();
    while(n--){
             k=0;
        while(gets(grid[k])){
            for(j=0;j<strlen(grid[k]);j++){
                vis[k][j]=0;
            }
            if(grid[k][0]=='_'){
                break;
            }
            k++;
        }
        c=k;
        for(k=0;k<=c;k++){
            for(j=0;j<strlen(grid[k]);j++){
                if(grid[k][j]=='*'&&vis[k][j]==0){
                    grid[k][j]=' ';
                    dfs(k,j);
                }
            }
        }
        for(k=0;k<=c;k++){
            printf("%s\n",grid[k]);
        }
    }
    return 0;
}
