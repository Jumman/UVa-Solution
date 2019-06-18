#include<stdio.h>
int main()
{
    int T,i,N,max,m;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        max=0;
        while(N--){
            scanf("%d",&m);
            if(m>max){
                max=m;
            }

        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
