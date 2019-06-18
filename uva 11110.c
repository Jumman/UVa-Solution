#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j,a,b,c,n,f,f1;
int grid[105][105],vis[105][105],cnt[105];
char s[2000],*word;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=n||j>=n){
        return;
    }
    if(grid[i][j]==a&&vis[i][j]==0){
        vis[i][j]=1;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
int main()
{
    while(scanf("%d",&n)==1&&n!=0){
            getchar();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                grid[i][j]=0;
                vis[i][j]=0;
            }
        }
        f=0;
       for(i=0;i<n-1;i++){
        gets(s);
        word=strtok(s," ");
        while(word!='\0'){
            b=atoi(word);
            word=strtok('\0'," ");
            c=atoi(word);
            if(c-1<0||b-1<0){
                f=1;
                break;
            }
            word=strtok('\0'," ");
            grid[b-1][c-1]=i+1;
        }
       }
       if(f==1){
        printf("wrong\n");
        continue;
       }
        for(i=0;i<n;i++){
            cnt[i]=0;
        }
        f1=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                a=grid[i][j];
                if(grid[i][j]==a&&vis[i][j]==0){
                    dfs(i,j);
                    cnt[a]++;
                }
                if(cnt[a]>1){
                    f1=1;
                }
            }
        }
        if(f1==0){
            printf("good\n");
        }
        else if(f1==1){
            printf("wrong\n");
        }
    }
    return 0;
}
