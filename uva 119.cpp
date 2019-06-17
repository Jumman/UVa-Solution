#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
using namespace std;
map<string,int>mp;
int main()
{
    int i,j,n,p,div,mod,gift;
    char name[15][15],nam[15];
    j=1;
    while(scanf("%d",&p)==1)
    {
        for(i=0;i<p;i++)
        {
            scanf("%s",name[i]);
            mp[name[i]]=0;
        }
        for(i=0;i<p;i++)
        {
            scanf("%s %d %d",nam,&gift,&n);
            if(n!=0)
            {
               mp[nam]-=gift;
               mod=gift%n;
               div=gift/n;
               mp[nam]+=mod;
               while(n--)
               {
                scanf("%s",nam);
                mp[nam]+=div;
               }
            }
        }
        if(j!=1)
            printf("\n");
        for(i=0;i<p;i++)
            printf("%s %d\n",name[i],mp[name[i]]);
        j++;
        mp.clear();
    }
    return 0;
}
