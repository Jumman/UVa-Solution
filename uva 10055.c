#include<stdio.h>
int main()
{
    int ha,op,dif;
    while((scanf("%d%d",&ha,&op))==2&&ha<op){
        dif=op-ha;
        printf("%d\n",dif);
    }
    return 0;
}
