#include<stdio.h>
#include<string.h>
int i,j,r,c,m,n,cnt,max,f1,f2,k,vis[150][150],chck[2500];
char g[150][150],ch;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r||j>=c) return;
    if(g[i][j]==ch&&vis[i][j]==0)
    {
        vis[i][j]=1;
        g[i][j]=cnt;
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
    char gh[150][150];
    while(1)
    {
        i=0;
        while(gets(gh[i]))
        {
            if(gh[i][0]=='%') break;
            i++;
        }
         r=i,m=0;
        for(i=0;i<r;i++)
        {
            n=0;
            for(j=0;j<strlen(gh[i]);j++){
                if(gh[i][j]!=' ')
                {
                    g[m][n]=gh[i][j];
                    vis[m][n]=0;
                    chck[n]=0;
                    n++;
                }
            }
            m++;
        }
        r=m;
        c=strlen(g[0]);
        cnt=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(g[i][j]!=' '&&vis[i][j]==0)
                {
                    cnt++;
                    ch=g[i][j];
                    dfs(i,j);
                }
            }
        }
        for(i=0;i<c;i++)
        {
            max=0;
            for(j=0;j<r;j++)
            {
                f1=g[j][i];
                if(f1>max) max=f1;
            }
            while(max)
            {
                chck[i]++;
                max/=10;
            }
        }
        for(i=0;i<r;i++)
        {
            printf("%*d",chck[0],g[i][0]);
            for(j=1;j<c;j++)
            {
                if(g[i][j]!=32)
                {
                     printf(" %*d",chck[j],g[i][j]);
                }
            }
            printf("\n");
        }
        printf("%%\n");
    }
    return 0;
}
