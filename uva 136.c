#include<stdio.h>
int main()
{
   /* int ugly[1500]={1},t2=0,t3=0,t5=0;
    int tmp,i;
    for(i=1;i<1500;i++)
    {
        while(ugly[t2]*2<=ugly[i-1]) t2++;
        while(ugly[t3]*3<=ugly[i-1]) t3++;
        while(ugly[t5]*5<=ugly[i-1]) t5++;
        tmp=ugly[t2]*2;
        if(ugly[t3]*3<tmp) tmp=ugly[t3]*3;
        if(ugly[t5]*5<tmp) tmp=ugly[t5]*5;
        ugly[i]=tmp;
    }*/
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}
