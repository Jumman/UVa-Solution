#include<stdio.h>
#include<string.h>
int vis[35][85],i,j,k,t,r,flag;
char c,grid[35][85];

void space()
{
    for(i=0;i<35;i++)
    {
        for(j=0;j<84;j++)
        {
            if(grid[i][j]!=c&&grid[i][j]!='_'&&grid[i][j]!='*')
            {
                grid[i][j]=' ';
            }
        }
        grid[i][84]='\0';
    }
}
void dfs(int i,int j)
{
    if(i<0||j<0||i>=r-1||j>strlen(grid[i]))
    return;
    if(grid[i][j]==c||vis[i][j]==1)
    return;
    vis[i][j]=1;
    if(grid[i+1][j]==c||grid[i-1][j]==c||grid[i][j+1]==c||grid[i][j-1]==c)
    {
        grid[i][j]='#';
    }
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);

}
void newline()
{
    for(i=34;i>=0;i--)
    {
         flag=0;
        for(j=84;j>=0;j--)
        {
            if(grid[i][j]==c||grid[i][j]=='#'||grid[i][j]=='_')
            {
                grid[i][j+1]='\0';
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            grid[i][0]='\0';
        }
    }
}
int main()
{
    scanf("%d",&t);
    getchar();
    while(t--)
    {
      for(i=0;i<35;i++)
        {
            for(j=0;j<85;j++)
            {
                vis[i][j]=0;
            }
        }
        r=0;
        while(gets(grid[r]))
        {
            for(j=0;j<85;j++)
            {
                if(grid[r][j]!=' '&&grid[r][j]!='*'&&grid[r][j]!='_'&&grid[r][j]!='\0')
                {
                    c=grid[r][j];
                }
            }
            if(grid[r][0]=='_')
            {
                r++;
                break;
            }
            r++;

        }
        space();
        for(i=0;i<r-1;i++)
        {
            for(j=0;j<strlen(grid[i]);j++)
            {
                if(grid[i][j]=='*')
                {
                    grid[i][j]=' ';
                    dfs(i,j);
                }
            }
        }
        newline();
        for(i=0;i<r;i++)
        {
            printf("%s\n",grid[i]);
        }
        for(i=0;i<35;i++)
        {
            for(j=0;j<85;j++)
            {
                grid[i][j]='\0';
            }
        }
    }
    return 0;
}
