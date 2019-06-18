#include<stdio.h>
#include<string.h>
int main()
{
    int n,dd,mm,yy,max=0,min=2147483647,total;
    char name[20],ma[20],mi[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s %d %d %d",name,&dd,&mm,&yy);
        total=dd+mm*12+yy*365;
        if(total<min)
        {
            min=total;
            strcpy(mi,name);
        }
        if(total>max)
        {
            max=total;
            strcpy(ma,name);
        }
    }
    printf("%s\n%s\n",ma,mi);
    return 0;
}
