#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,l,rem4,rem100,rem400,rem15,rem55,leap,f;
    char y[1000010];
    j=1;
    while(scanf("%s",y)==1)
    {
        if(j!=1)
            printf("\n");
        j=0;
        l=strlen(y);
        rem4=rem100=rem400=rem15=rem55=leap=f=0;
        for(i=0;i<l;i++)
        {
            rem4=((rem4*10)+(y[i]-'0'))%4;
            rem100=((rem100*10)+(y[i]-'0'))%100;
            rem400=((rem400*10)+(y[i]-'0'))%400;
            rem15=((rem15*10)+(y[i]-'0'))%15;
            rem55=((rem55*10)+(y[i]-'0'))%55;
        }
        if((rem4==0&&rem100!=0)||rem400==0)
        {
            printf("This is leap year.\n");
            leap=1;
            f=1;
        }
        if(rem15==0)
        {
             printf("This is huluculu festival year.\n");
             f=1;
        }
        if(leap==1&&rem55==0)
            printf("This is bulukulu festival year.\n");
        if(f==0)
            printf("This is an ordinary year.\n");
        }
    return 0;
}
