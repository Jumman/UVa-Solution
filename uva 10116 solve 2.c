#include<stdio.h>
int main()
{
    int i,j,r,c,n,a,b,cnt,vis[20][20];
    char ro[20][20];
    while((scanf("%d%d%d",&r,&c,&n))==3&&(r!=0||c!=0||n!=0))
    {
        getchar();
        for(i=0;i<r;i++){
                gets(ro[i]);
        for(j=0;j<c;j++){
                vis[i][j]=0;
         }
        }
        cnt=0,i=0,j=n-1;
        while(1)
        {
            cnt++,a=i,b=j;
            if(ro[i][j]=='S') i++;
            else if(ro[i][j]=='E') j++;
            else if(ro[i][j]=='W') j--;
            else if(ro[i][j]=='N') i--;
             if(i<0||j<0||i>=r||j>=c)
             {
                 printf("%d step(s) to exit\n",cnt);
                 break;
             }
             else if(vis[a][b]!=0)
             {
                 printf("%d step(s) before a loop of %d step(s)\n",vis[a][b]-1,cnt-vis[a][b]);
                 break;
             }
             vis[a][b]=cnt;
        }
    }
    return 0;
}
