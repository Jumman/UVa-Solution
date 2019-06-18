#include<stdio.h>
int i,j,a,ar[]={2,3,5,7},hum[6000];
void humble()
{
    long long n,num;
    i=1;
    num=2;
    hum[0]=1;
    while(i!=5842)
    {
        n=num;
        j=0;
        while(n!=1&&j<4)
        {
            if(n%ar[j]==0){
              n=n/ar[j];
            }
            else{
              j++;
            }
        }
        if(n==1){
            hum[i]=num;
            i++;
        }
        num++;
    }
}
int main()
{
    humble();
    while((scanf("%d",&a))==1&&a!=0)
    {
        printf("The %d",a);
        if(a%10==1&&a%100!=11){
                printf("st");
        }
        else if(a%10==2&&a%100!=12){
                printf("nd");
        }
        else if(a%10==3&&a%100!=13){
                printf("rd");
        }
        else{
            printf("th");
        }
        printf(" humble number is %d\n",hum[a-1]);
    }
    return 0;
}
