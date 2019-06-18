#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[10000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            s[i]=s[i]-7;
        }
        printf("%s\n",s);
    }
    return 0;
}
