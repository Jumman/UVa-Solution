#include<stdio.h>
int main()
{
    int T,l,v,o;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&l,&v,&o);
        if(l*l+o*o==0){
            printf("\n");
        }
        else if(o*o==l*l+v*v){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }

    }
    return 0;
}
