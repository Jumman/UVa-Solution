#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#define sz 1000005
using namespace std;
map<string,int>mp;
int main()
{
    int n,i,j,k,l,max1,m,cnt;
    char s[sz],s_cpy[11],s_max[11];
    while(scanf("%d",&n)==1)
    {
        getchar();
        gets(s);
        max1=0;
        l=strlen(s);
        for(i=0;i<l-n+1;i++)
        {
            k=i;
            for(j=0;j<n;j++)
            {
                s_cpy[j]=s[k];
                k++;
            }
               cnt= mp[s_cpy]++;
               if(cnt>max1)
               {
                   max1=cnt;
                  strcpy(s_max,s_cpy);
               }
        }
        s_max[n]='\0';
        printf("%s\n",s_max);
        mp.clear();
    }
    return 0;
}

