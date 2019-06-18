#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,cnt,i,j;
    char s1[500000],s2[500000];
    while(scanf("%s%s",s1,s2)==2){
        j=0,cnt=0;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0;i<l2;i++){
            if(s1[j]==s2[i]){
                j++;
                cnt++;
            }
        }
        if(cnt==l1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
