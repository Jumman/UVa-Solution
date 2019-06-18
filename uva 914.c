#include<stdio.h>
#define sz 1000005
int ar[sz],pr[sz],cnt[500];
int i,j,k;
void sieve()
{
    for(i=2;i<sz;i++){
        ar[i]=1;
    }
    for(i=2;i<sz;i++){
        if(ar[i]==1){
            for(j=2;i*j<sz;j++){
                ar[i*j]=0;
            }
        }
    }
}
int main()
{
    int T,L,U,temp,dif,d_max,max,sum,jc;
    sieve();
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&L,&U);
        if(L>U){
            temp=L;
            L=U;
            U=temp;
        }
        k=0,sum=0;
        for(i=L;i<=U;i++){
            if(ar[i]==1){
                pr[k]=i;
                k++;
            }
        }
        for(i=0;i<500;i++){
            cnt[i]=0;
        }
        d_max=0,max=0;
        if(k<2){
            sum=2;
        }
        else{
            for(i=1;i<k;i++){
                dif=pr[i]-pr[i-1];
                cnt[dif]++;
                if(dif>d_max){
                    d_max=dif;
                }
                if(cnt[dif]>max){
                    max=cnt[dif];
                    jc=dif;
                }
            }
        }
        for(i=0;i<=d_max;i++){
            if(max==cnt[i]){
                sum++;
            }
        }
        if(sum==1){
            printf("The jumping champion is %d\n",jc);
        }
        else{
            printf("No jumping champion\n");
        }
    }
    return 0;
}
