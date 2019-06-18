#include<stdio.h>
int main()
{
    int t,i,j,max,r[100];
    char s[10][100];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        for(j=0;j<10;j++){
            scanf("%s%d",&s[j],&r[j]);
        }
        max=0;
        for(j=0;j<10;j++){
            if(r[j]>max){
                max=r[j];
            }
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++){
            if(r[j]==max){
                printf("%s\n",s[j]);
                    }
        }
    }
    return 0;
}
