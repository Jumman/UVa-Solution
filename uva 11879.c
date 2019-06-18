#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,remainder;
    char s[110];
    while(scanf("%s",s)==1)
    {
        if(s[0]=='0')
            break;
        l=strlen(s);
        remainder=0;
        for(i=0;i<l;i++)
        {
            remainder=remainder*10+s[i]-48;
            remainder%=17;
        }
        if(remainder==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
