#include<stdio.h>
#define sz 1000005
#define sz1 784941
int i,j,k;
int pr[sz1],ar[sz];
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
        ar[i+1]=1;
    }
    printf("%d",pr[k-1]);
}
int main()
{
    int n,d;
    sieve();
    while((scanf("%d",&n))==1&&n!=0){
       for(i=0;i<=n;i++){
        d=n-pr[i];
        if(ar[d]==0){
            break;
        }
       }
       if(pr[i]+d==n&&pr[i]<=d){
        printf("%d = %d + %d\n",n,pr[i],d);
       }
       else{
        printf("Goldbach's conjecture is wrong.\n");
       }
    }
    return 0;
}

