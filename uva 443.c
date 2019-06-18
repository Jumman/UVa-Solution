#include<stdio.h>
int main()
{
    int hm[5842]={1},t2=0,t3=0,t5=0,t7=0;
    int tmp,i,n;
    for(i=1;i<5842;i++)
    {
        while(hm[t2]*2<=hm[i-1]) t2++;
        while(hm[t3]*3<=hm[i-1]) t3++;
        while(hm[t5]*5<=hm[i-1]) t5++;
        while(hm[t7]*7<=hm[i-1]) t7++;
        tmp=hm[t2]*2;
        if(hm[t3]*3<tmp) tmp=hm[t3]*3;
        if(hm[t5]*5<tmp) tmp=hm[t5]*5;
        if(hm[t7]*7<tmp) tmp=hm[t7]*7;
        hm[i]=tmp;
    }
    while((scanf("%d",&n))==1&&n!=0)
    {
         printf("The %d",n);
        if(n%10==1&&n%100!=11){
                printf("st");
        }
        else if(n%10==2&&n%100!=12){
                printf("nd");
        }
        else if(n%10==3&&n%100!=13){
                printf("rd");
        }
        else{
            printf("th");
        }
        printf(" humble number is %d.\n",hm[n-1]);
    }
    return 0;
}
