#include<stdio.h>
using namespace std;

int main()
{
    int n,k,tmp,sum,fac[3000];
    while(scanf("%d",&n)==1)
    {
        fac[0]=1;
        k=1;
        tmp=sum=0;
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
                tmp=tmp/10;
                k++;
            }
        }
        for(int i=k-1;i>=0;i--)
            sum+=fac[i];
        printf("%d\n",sum);
    }
    return 0;
}
