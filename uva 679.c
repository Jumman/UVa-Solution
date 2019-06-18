#include<stdio.h>
int main()
{
    int t,i,dep,d_ball,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&dep,&d_ball);
        p=1;
        for(i=1;i<dep;i++)
        {
            if(d_ball%2==0)
            {
                p=(p*2)+1;
                d_ball/=2;
            }
            else
            {
                p*=2;
                d_ball=(d_ball+1)/2;
            }
        }
        printf("%d\n",p);
    }
    scanf("%d",&t);
    return 0;
}
