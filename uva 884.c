//TLE ,see part (2)
#include<stdio.h>
#define sz 1000010
int pr[sz],ar[sz],i,j,k;
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3;i<sz;i+=2){
        if(ar[i]==0){
                for(j=i*i;j<sz;j+=(i*2)){
                    ar[j]=1;
                }
                pr[k]=i;
                k++;
        }
        if(i+1<sz){
        ar[i+1]=1;
        }
    }
}
int main()
{
    long long int n,a,cnt,tmp;
    sieve();
    while((scanf("%lld",&n))==1&&n!=0) {
        cnt=0,a=0;
        for(i=0;pr[i]<=n;i++){
            tmp=pr[i];
            while(n/tmp>0){
                cnt+=n/tmp;
                tmp*=pr[i];
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
