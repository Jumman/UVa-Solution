#include<stdio.h>
#include<string.h>
int i,j,p,l,m,vis[27][27];
char grid[27][27];
void dfs(int i,int j)
{
    if(i<0||j<0||i>=m||j>=l)
    {
        return ;
    }
    if(grid[i][j]=='1'&&vis[i][j]==0){
        vis[i][j]=1;
        p++;
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
    int t,max;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
            i=0;
        while(gets(grid[i])){
            if(strcmp(grid[i],"")==0){
                break;
            }
            i++;
        }
        m=i;
        l=strlen(grid[i-1]);
        for(i=0;i<m;i++){
            for(j=0;j<l;j++){
                vis[i][j]=0;
            }
        }
        max=0;
        for(i=0;i<m;i++){
            for(j=0;j<l;j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    p=0;
                    dfs(i,j);
                    if(p>max){
                        max=p;
                    }
                }
            }
        }
        printf("%d\n",max);
        if(t){
            printf("\n");
        }
    }
    return 0;
}
