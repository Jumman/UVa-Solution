#include<stdio.h>
int main()
{
    double ff,inh,hac,has,dc,h,u,d,f;
    int count;
    while((scanf("%lf%lf%lf%lf",&h,&u,&d,&f))==4&&h!=0){
        count=1;
        ff=(f/100)*u;
        inh=0;
        dc=u;
        hac=u+inh;
        while(1){
        if(hac>h){
            printf("success on day %d\n",count);
                break;
            }
             has=hac-d;
        if(has<0){
            printf("failure on day %d\n",count);
                break;
            }
            inh=has;
            dc=dc;
            dc=dc-ff;
            if(dc<0){
                dc=0;
            }
            hac=inh+dc;
            count++;
        }
    }
    return 0;
}
