#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,x,sum,degree;
    char s[1010];
    while(scanf("%s",s)==1)
    {
        l=strlen(s);
        if(l==1)
        {
            x=s[0]-48;
            if(x==0)
                break;
        }
        x=0;
        for(i=0;i<l;i++)
            x+=s[i]-48;
        degree=1;
        if(x%9==0)
        {
            printf("%s is a multiple of 9",s);
            sum=0;
            while(x!=9)
            {
                sum+=x%10;
                x/=10;
                if(x==0)
                {
                    x=sum;
                    sum=0;
                    degree++;
                }

            }
            printf(" and has 9-degree %d.\n",degree);
        }
        else
            printf("%s is not a multiple of 9.\n",s);
    }
    return 0;
}
