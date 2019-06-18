#include<stdio.h>
int main()
{
    int c,N,i,sum,av,j,count;
    float ans;
    int a[10000];
    scanf("%d",&c);
    while(c--){
        scanf("%d",&N);
        sum=0,count=0;
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
            av=sum/N;
        }
        for(j=0;j<N;j++){
            if(a[j]>av){
                count++;
            }
        }
        ans=((float)count/(float)N);
        printf("%.3f%%\n",ans*100);
    }
    return 0;
}
