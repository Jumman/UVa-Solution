#include<stdio.h>
int main()
{
    int jo[100000],di[100000],n,i,j,c,dif,f1,tmp;
    while((scanf("%d",&n))==1&&n!=0)
    {
        f1=0,c=0;
        for(i=0;i<n;i++)
            scanf("%d",&jo[i]);
        for(i=0;i<n-1;i++)
        {
                dif=jo[i]-jo[i+1];
                if(dif<0)
                {
                    dif=dif*-1;
                    di[i]=dif;
                }
                else
                    di[i]=dif;
                    c++;

        }
        for(i=0;i<c;i++)
        {
            for(j=i+1;j<c;j++)
            {
                if(di[i]>di[j])
                {
                    tmp=di[i];
                    di[i]=di[j];
                    di[j]=tmp;
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(di[i]!=i+1)
            {
                f1=1;
            }
        }
        if(f1==1) printf("Not jolly\n");
        else if(f1==0) printf("Jolly\n");
    }
    return 0;
}
