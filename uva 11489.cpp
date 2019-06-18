#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j,l,sum,sm;
    char s[1010];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        l=strlen(s);
        sum=0,sm=0;
        for(i=0;i<l;i++)
        {
            sum=sm;
            for(j=i+1;j<l;j++)
                sum+=s[i]-48;
            if(sum%3==0&&sum!=3)
            {
                s[i]='0';
                sum=0;
                sm=0;
            }
            else
                sm+=s[i]-48;
        }
        if(sum==0&&i%2==1)
            printf("S\n");
        else if(sum!=0&&i%2==1)
            printf("T\n");
        else if(sum!=0&&i%2==0)
            printf("S\n");
        else if(sum==0&&i%2==0)
            printf("T\n");
    }
    return 0;
}
