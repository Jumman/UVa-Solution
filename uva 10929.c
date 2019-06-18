#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,x,sum;
    char num[1010];
    while(scanf("%s",num)==1)
    {
       l=strlen(num);
       if(l==1)
       {
           x=num[0]-48;
           if(x==0)
            break;
       }
       sum=0;
       for(i=0;i<l;i++)
       {
           x=num[i]-48;
           if(i%2!=0)
            x=x*(-1);
           sum=sum+x;
       }
       if(sum%11==0)
            printf("%s is a multiple of 11.\n",num);
       else
            printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
