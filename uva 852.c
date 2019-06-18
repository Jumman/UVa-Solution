#include<stdio.h>
int i,j,cnt,f1,f2,bck[100],wht[100],vis[20][20];
char g[20][20],b,w;
void dfsdot(int i,int j)
{
    if(i<0||j<0||i>=9||j>=9)
        return;
        if(g[i][j]==b){
            f1=1;
        }
        else if(g[i][j]==w){
            f2=1;
        }
    if(g[i][j]=='.'&&vis[i][j]==0){
        vis[i][j]=1;
        cnt++;
        dfsdot(i,j+1);
        dfsdot(i,j-1);
        dfsdot(i+1,j);
        dfsdot(i-1,j);
    }
    if(f1==1&&f2==1){
        f1=0,f2=0;
        cnt=0;
    }
}
void dfsb(int i,int j)
{
    if(i<0||j<0||i>=9||j>=9)
        return;
    if(g[i][j]==b&&vis[i][j]==0){
        vis[i][j]=1;
        cnt++;
        dfsb(i,j+1);
        dfsb(i,j-1);
        dfsb(i+1,j);
        dfsb(i-1,j);
    }
}
void dfsw(int i,int j)
{
    if(i<0||j<0||i>=9||j>=9)
        return;
    if(g[i][j]==w&&vis[i][j]==0){
        vis[i][j]=1;
        cnt++;
        dfsw(i,j+1);
        dfsw(i,j-1);
        dfsw(i+1,j);
        dfsw(i-1,j);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
    for(i=0;i<9;i++){
        gets(g[i]);
        for(j=0;j<9;j++){
            vis[i][j]=0;
        }
    }
    b='X',w='O';
    bck[b]=0,wht[w]=0;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
                if(g[i][j]=='.'&&vis[i][j]==0){
                    cnt=0,f1=0,f2=0;
                    dfsdot(i,j);
                    if(f1==1) bck[b]+=cnt;
                    else if(f2==1) wht[w]+=cnt;
                }
            else if(g[i][j]==b&&vis[i][j]==0){
                cnt=0;
                dfsb(i,j);
                bck[b]+=cnt;
            }
            else if(g[i][j]==w&&vis[i][j]==0){
                cnt=0;
                dfsw(i,j);
                wht[w]+=cnt;
            }
        }
    }
    printf("Black %d White %d\n",bck[b],wht[w]);
    }
    return 0;
}
