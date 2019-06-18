#include<stdio.h>
int i,j,k,t,cnt,w,h,tmp,a[100],vis[100][100];
char grid[100][100];
void dots(int i,int j)
{
    if(i<0||j<0||i>=h||j>=w){
        return ;
    }
    if(grid[i][j]!='X'){
        return ;
    }
    if(grid[i][j]=='X'&&vis[i][j]==0){
    grid[i][j]='*';
    dots(i,j+1);
    dots(i,j-1);
    dots(i+1,j);
    dots(i-1,j);
    }
}
void dfs(int i,int j)
{
    if(i<0||j<0||i>=h||j>=w){
        return ;
    }
    if(grid[i][j]=='.'&&vis[i][j]==0){
        return ;
    }
    if(grid[i][j]=='X'&&vis[i][j]==0){
        dots(i,j);
        cnt++;
    }
    if(grid[i][j]=='*'&&vis[i][j]==0){
        vis[i][j]=1;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
int main()
{
    while((scanf("%d%d",&w,&h))==2&&w!=0&&h!=0){
        getchar();
        t++;
        for(i=0;i<h;i++){
            gets(grid[i]);
            for(j=0;j<w;j++){
                vis[i][j]=0;
            }
        }
        k=0;
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(grid[i][j]=='*'&&vis[i][j]==0){
                    cnt=0;
                    dfs(i,j);
                    a[k]=cnt;
                    k++;
                }
            }
        }
        if(cnt==0){
            for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(grid[i][j]=='X'&&vis[i][j]==0){
                    cnt=0;
                    dfs(i,j);
                    a[k]=cnt;
                    k++;
                }
            }
        }
        }
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(a[i]>a[j]){
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        printf("Throw %d\n",t);
        printf("%d",a[0]);
        for(i=1;i<k;i++){
            printf(" %d",a[i]);
        }
        printf("\n\n");

    }
    return 0;
}

