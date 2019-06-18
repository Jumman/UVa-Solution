#include<stdio.h>
using namespace std;

int main()
{
    int n,tmp,fac[50000];
    while(scanf("%d",&n)==1)
    {
        fac[0]=1;
        int k=1;
        tmp=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<k;j++)
            {
                int x=fac[j]*i+tmp;
                fac[j]=x%10;
                tmp=x/10;
            }
            while(tmp>0)
            {
                fac[k]=tmp%10;
                tmp/=10;
                k++;
            }
        }

        printf("%5d -> ",n);
        for(int i=0;i<k;i++)
            if(fac[i]!=0)
            {
                printf("%d\n",fac[i]);
                break;
            }
    }
    return 0;
}
