//accepted
#include<stdio.h>
#include<math.h>
#define sz 1000005
int pr[sz],ar[sz],sum[sz],i,j,k;
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3;i<sz-5;i+=2){
        if(ar[i]==0){
                for(j=i*i;j<sz-5;j+=(i*2)){
                    ar[j]=1;
                }
                pr[k]=i;
                k++;
        }
        ar[i+1]=1;
    }
}
int main()
{
    int n,a,cnt,root;
    sieve();
    for(i=0;i<=sz;i++){
        sum[i]=0;
    }
    for(i=2;i<=sz;i++){
        if(ar[i]==0){
            sum[i]=sum[i-1]+1;
        }
        else{
                k=0,a=i,cnt=0;
                root=sqrt(a);
            for(k=0;pr[k]<=root;k++){
                while(a%pr[k]==0){
                    a=a/pr[k];
                    cnt++;
                }
            }
            if(a>1){
                cnt++;
            }
            sum[i]=sum[i-1]+cnt;
        }

    }

    while((scanf("%d",&n))==1&&n!=0){
        printf("%d\n",sum[n]);
    }
   return 0;
}

