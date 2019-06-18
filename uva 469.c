#include<stdio.h>
#include<string.h>
int i,j,k,l,m,n,a,b,p;
char grid[105][105],s[105][105];
void dfs(int a,int b)
{
    if(a<0||b<0||a>=m||b>=l){
        return;
    }
    if(s[a][b]=='W'){
        s[a][b]='L';
        p++;
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
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        i=0;
        while(gets(grid[i])){
                l=strlen(grid[0]);
                 if(grid[i][0]>=48&&grid[i][0]<=57){

                     for(j=0;j<m;j++){
                           strcpy(s[j],grid[j]);
                     }
                sscanf(grid[i],"%d%d",&a,&b);
                p=0;
                dfs(a-1,b-1);
                printf("%d\n",p);
                continue;
            }
         if(strcmp(grid[i],"")==0){
                break;
            }
            i++;
            m=i;


        }
        if(t){
            printf("\n");
        }
    }
    return 0;
}
