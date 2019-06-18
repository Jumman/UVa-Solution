#include<stdio.h>
using namespace std;
int main()
{
   int n,k,tmp,fac[3000],cnt[10];
   while(scanf("%d",&n)==1)
   {
       fac[0]=1;
       k=1;
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
               tmp=tmp/10;
               k++;
           }
       }

       for(int i=0;i<10;i++) cnt[i]=0;

       for(int i=k-1;i>=0;i--)
            cnt[fac[i]]++;

        printf("%d! --\n",n);
        for(int i=0;i<10;i++)
        {
            printf("   (%d) %d",i,cnt[i]);
            if(i==4) printf("\n");
        }
       printf("\n");
   }
   return 0;
}
