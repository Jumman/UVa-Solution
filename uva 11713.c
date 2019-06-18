#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len1,len2,a[150],count;
    a['a']=1,a['e']=1,a['i']=1,a['o']=1,a['u']=1;
    char s1[20],s2[20];
    scanf("%d",&n);
    while(n--){
        scanf("%s",s1);
        scanf("%s",s2);
        len1=strlen(s1);
        len2=strlen(s2);
        if(len1==len2){
            count=0;
            for(i=0;i<len1;i++){
                if(a[s1[i]]==1&&a[s2[i]]==1){
                    count++;
                }
                else if(s1[i]==s2[i]){
                    count++;
                }
            }
            if(count==len1){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
