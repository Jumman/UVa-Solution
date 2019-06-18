#include<stdio.h>
#include<string.h>
int main()
{
    int l,t,i,j,f1,f2;
    char ch[150];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(ch);
        l=strlen(ch);
        if(l==0)
        {
            printf("Yes\n");
            continue;
        }
        f1=0;
        for(i=0;i<l;i++)
        {
              if((ch[i]==')'||ch[i]==']')&&f1==0)
              {
                  j=i-1;
                  while(ch[j]==' ')
                  {
                      j--;
                  }
                  if((ch[j]=='('&&ch[i]==')')||(ch[j]=='['&&ch[i]==']'))
                  {
                      ch[i]=' ';
                      ch[j]=' ';
                  }
                  else
                  {
                      f1=1;
                  }
              }
        }
        f2=0;
        for(i=0;i<l;i++)
        {
            if(ch[i]!=' ')
            {
                f2=1;
            }
        }
        if(f1==0&&f2==0)
        {
            printf("Yes\n");
        }
        else
        {
             printf("No\n");
        }
    }
    return 0;
}
