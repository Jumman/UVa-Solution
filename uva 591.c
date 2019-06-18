#include<stdio.h>
int main()
{
    int n,i,st[100],cnt,sum,sub,cs=1,div;
    while((scanf("%d",&n))==1&&n!=0)
    {
        sum=0,cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&st[i]);
            sum=sum+st[i];
        }
        div=sum/n;
        for(i=0;i<n;i++)
        {
            if(st[i]>div)
            {
                sub=st[i]-div;
                cnt+=sub;
            }

        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",cs++,cnt);
    }
    return 0;
}
