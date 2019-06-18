#include<stdio.h>
int main()
{
    int n,q,i,j,k,l,m,cnt,f,max,r1,r2;
    int a[100050];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%d",&q);

        for(i=0;i<n;i++)
            scanf("%d",&a[i]);


        for(i=0;i<q;i++)
        {
            max=0;
            scanf("%d%d",&k,&j);
            for(l=0;l<n;l++)
            {
                if(a[l]>=k)
                {
                    r1=l;
                    break;
                }
            }
            for(l=0;l<n;l++)
            {
                if(a[l]<=j)
                {
                    r2=l;
                }
            }
            for(l=r1;l<=r2;l++)
            {
                 f=a[l];
                    cnt=1;
                    for(m=r1+1;m<=r2;m++)
                    {
                        if(a[m]==f)
                            cnt++;
                    }
                    if(cnt>max)
                     max=cnt;
            }
            printf("%d\n",max);
        }
    }
    return 0;
}
