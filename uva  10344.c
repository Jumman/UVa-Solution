#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    while((scanf("%d%d%d%d%d",&a,&b,&c,&d,&e))==5&&(a||b||c||d||e)!=0){
        sum=a+b+c+d+e;
        if(sum>23||sum*2>23){
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }
    }
    return 0;
}
