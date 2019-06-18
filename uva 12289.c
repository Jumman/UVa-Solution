#include<stdio.h>
#include<string.h>
int main()
{
    int t,l;
    char w[10];
    scanf("%d",&t);
    while(t--){
        scanf("%s",w);
        l=strlen(w);
        if(l==3){
            if(w[0]=='o'&&w[1]=='n'){
                printf("1\n");
            }
            else if(w[0]=='o'&&w[2]=='e'){
                    printf("1\n");
            }
            else if(w[1]=='n'&&w[2]=='e'){
                printf("1\n");
            }
            else {
                printf("2\n");
            }

        }
        else if(l==5){
                printf("3\n");
            }
    }
    return 0;
}
