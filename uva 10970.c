#include<stdio.h>
int main()
{
    int M,N,min_split;
    while((scanf("%d%d",&M,&N)==2)&&(M&&N)!=0){
        min_split=(M-1)+(N-1);
        printf("%d\n",min_split);
    }
    return 0;
}
