#include<stdio.h>
int i,j,n,cnt,vis[105][105];
char grid[105][105];
void dfs(int i,int j){
    if(i<0||j<0||i>=n||j>=n){
        return;
    }
    if(grid[i][j]=='.'){
        return ;
    }
    if((grid[i][j]=='x'||grid[i][j]=='@')&&vis[i][j]==0){
            if(grid[i][j]=='x'){
            cnt=1;
            }
            vis[i][j]=1;
            dfs(i,j+1);
            dfs(i,j-1);
            dfs(i+1,j);
            dfs(i-1,j);
    }
}
int main()
{
    int t,m,cs=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getchar();
        for(i=0;i<n;i++){
            gets(grid[i]);
        for(j=0;j<n;j++){
            vis[i][j]=0;
        }
        }
        m=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if((grid[i][j]=='x'||grid[i][j]=='@')&&vis[i][j]==0){
                    cnt=0;
                    dfs(i,j);
                    if(cnt==1){
                        m++;
                    }
                }
            }
        }
        printf("Case %d: %d\n",cs++,m);
    }
    return 0;
}
