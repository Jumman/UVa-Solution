#include<stdio.h>
int i,j,k,x,y,cnt,ar2[50000],vis[500][500];
char ch[500][500],ar[50000],c;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=x||j>=y) return;
    if(ch[i][j]==c&&vis[i][j]==0)
    {
        vis[i][j]=1;
        cnt++;
        dfs(i,j+1);
        dfs(i,j-1);
        dfs(i+1,j);
        dfs(i-1,j);
    }
}
int main()
{
    int cs=1,tmp,tmp1;
    while((scanf("%d%d",&x,&y))==2&&x!=0&&y!=0)
    {
        getchar();
        for(i=0;i<x;i++){
            gets(ch[i]);
            for(j=0;j<y;j++){
                vis[i][j]=0;
            }
        }
        k=0;
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                if(ch[i][j]!='.'&&vis[i][j]==0){
                    c=ch[i][j];
                    cnt=0;
                    dfs(i,j);
                    ar[k]=c;
                    ar2[k]=cnt;
                    k++;
                }
            }
        }
        for(i=0;i<k;i++){
                for(j=i+1;j<k;j++){
            if(ar2[i]<ar2[j]){
                tmp=ar[i];
                ar[i]=ar[j];
                ar[j]=tmp;
                tmp1=ar2[i];
                ar2[i]=ar2[j];
                ar2[j]=tmp1;
            }
            else if(ar2[i]==ar2[j]){
                if(ar[i]>ar[j]){
                    tmp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=tmp;
                }
            }
        }
    }
        printf("Problem %d:\n",cs++);
        for(i=0;i<k;i++){
            printf("%c %d\n",ar[i],ar2[i]);
        }
    }
    return 0;
}
