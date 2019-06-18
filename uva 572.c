#include<stdio.h>
char ch[101][101];
int vis[101][101];
int i,j,cnt,m,n;
void dfs(int i,int j){
        if(i<0||j<0||i>=m||j>=n){
            return;
        }
        if(ch[i][j]=='@'&&vis[i][j]==0){
            vis[i][j]=1;
            dfs(i,j+1);
            dfs(i,j-1);
            dfs(i+1,j);
            dfs(i-1,j);
            dfs(i+1,j+1);
            dfs(i+1,j-1);
            dfs(i-1,j+1);
            dfs(i-1,j-1);
        }
}
int main()
{
    while((scanf("%d%d",&m,&n))==2&&m!=0){
        getchar();
        for(i=0;i<m;i++){
            gets(ch[i]);
            for(j=0;j<n;j++){
                vis[i][j]=0;
            }
        }
            cnt=0;
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        if(ch[i][j]=='@'&&vis[i][j]==0){
                            cnt++;
                            dfs(i,j);
                        }
                }
            }
            printf("%d\n",cnt);
    }
    return 0;
}
