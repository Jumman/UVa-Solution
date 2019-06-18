#include<stdio.h>
int main()
{
    int jo[1500],i,j,n,dis,dis2,f1,tmp;
    while((scanf("%d",&n))==1&&n!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&jo[i]);

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(jo[i]>jo[j])
                {
                    tmp=jo[i];
                    jo[i]=jo[j];
                    jo[j]=tmp;
                }
            }
        }
        f1=0;
        for(i=1;i<n;i++)
        {
            dis=jo[i]-jo[i-1];
            if(dis<0) dis=dis*-1;
            if(dis>200)
            {
                f1=1;
                break;
            }
            if(jo[n-1]<1422)
            {
                dis=1422-jo[n-1];
                dis2=200-2*dis;
                if(dis>dis2)
                {
                    f1=1;
                    break;
                }
            }
        }
        if(f1==1)
            printf("IMPOSSIBLE\n");
        else if(f1==0)
            printf("POSSIBLE\n");
    }
    return 0;
}
