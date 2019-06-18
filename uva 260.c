#include<stdio.h>
int i,j,n,f1,vis[205][205];
char grid[205][205],ch;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=n||j>=n){
        return ;
    }
    if(grid[i][j]=='w'&&j==n-1){
        f1=1;
        return;
    }
    if(grid[i][j]==ch&&vis[i][j]==0){
        vis[i][j]=1;
        dfs(i-1,j-1);
        dfs(i-1,j);
        dfs(i,j-1);
        dfs(i,j+1);
        dfs(i+1,j);
        dfs(i+1,j+1);
    }
}
int main()
{
    int t=0;
    while(scanf("%d",&n)==1&&n!=0)
    {
        getchar();
        t++;
        for(i=0;i<n;i++){
            gets(grid[i]);
            for(j=0;j<n;j++){
                vis[i][j]=0;
            }
        }
        f1=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][0]=='w'){
                    ch='w';
                    dfs(i,0);

                }
            }
        }
        if(f1==1){
            printf("%d W\n",t);
        }
         else{
            printf("%d B\n",t);
        }
    }
    return 0;
}
