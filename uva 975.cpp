#include<stdio.h>
using namespace std;
int main()
{
    int i,j,y,p,n,l,h,cnt,maxx,pops[100010];
    while(scanf("%d",&y)==1)
    {
        scanf("%d",&p);
        for(i=0;i<p;i++)
            scanf("%d",&pops[i]);
        maxx=0;
        for(i=0;i<p;i++)
        {
            n=pops[i]+y-1;
            cnt=0;
            for(j=i;pops[j]<=n;j++)
            {
                cnt++;
                if(j==p-1)
                    break;
            }
            if(cnt>maxx)
            {
                maxx=cnt;
                l=pops[i];
                h=pops[j-1];
            }
        }
        printf("%d %d %d\n",maxx,l,h);
    }
    return 0;
}
