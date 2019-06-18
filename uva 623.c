#include<stdio.h>
int main()
{
   int n,i,j,k,x,tmp,fac[3000];
   while(scanf("%d",&n)==1)
   {
       fac[0]=1;
       k=1;
       tmp=0;
       for(i=1;i<=n;i++)
       {
           for(j=0;j<k;j++)
           {
               //printf("1st fac %d\n",fac[j]);
               x=fac[j]*i+tmp;
               // printf("x %d\n",x);
               fac[j]=x%10;
               // printf("2nd fac %d\n",fac[j]);
               tmp=x/10;
               // printf(" tmp %d\n",tmp);
           }
           while(tmp>0)
           {
               fac[k]=tmp%10;
               tmp=tmp/10;
               k++;
           }
       }
       printf("%d!\n",n);
       for(i=k-1;i>=0;i--)
        printf("%d",fac[i]);
       printf("\n");
   }
   return 0;
}
