#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,len;
    char s[1000],y[1000];
    while(gets(s))
    {
        len=strlen(s);
        l=0;
        for(i=0;i<len;i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1;j>=0;j--)
                {
                    if(s[j]==' '||s[j]=='\0')
                        break;

                    y[l]=s[j];
                    l++;
                }
                y[l++]=s[i];
            }
            else if(s[i+1]=='\0')
            {
                for(j=i;j>=0;j--)
                {
                    if(s[j]==' '||s[j]=='\0')
                        break;

                    y[l]=s[j];
                    l++;
                }
            }
        }
         for(i=0;i<l;i++)
           printf("%c",y[i]);
           printf("\n");
    }
    return 0;
}
