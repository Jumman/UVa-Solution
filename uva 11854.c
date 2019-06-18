#include<stdio.h>
int main()
{
    int la,vu,ot,max;
        while((scanf("%d%d%d",&la,&vu,&ot))==3&&la!=0&&vu!=0&&ot!=0){
                max=0;
            if(la>max){
              max=la;
               }
            if(vu>max){
                max=vu;
               }
            if(ot>max){
                max=ot;
               }
            if(max==ot){
                if((max*max)==(la*la)+(vu*vu)){
                    printf("right\n");
                }
                else {
                    printf("wrong\n");
                }
               }
               else if(max==vu){
                if((max*max)==(la*la)+(ot*ot)){
                    printf("right\n");
                }
                else {
                    printf("wrong\n");
                }
               }
              else if(max==la){
                if((max*max)==(vu*vu)+(ot*ot)){
                    printf("right\n");
                }
                else {
                    printf("wrong\n");
                }
               }
        }
    return 0;
}
