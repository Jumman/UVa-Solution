#include<stdio.h>
#include<math.h>
#define sz 10000005
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
    long long int n,root,c,l,max;
    sieve();
    while((scanf("%lld",&n))==1&&n!=0){
            if(n<0){
                n=n*-1;
            }
        root=sqrt(n);
        max=0,c=0,l=0;
        while(pr[l]<=root&&l<k){
            while(n%pr[l]==0){
                n=n/pr[l];
                if(pr[l]>max){
                    max=pr[l];
                    c++;
                }
                if(n==1){
                    break;
                }
            }
            if(n==1){
                break;
            }
              l++;
    }
    if(n!=1){
               max=n;
               c++;
               }
    if(c>1){
    printf("%lld\n",max);
    }
    else{
            max=-1;
        printf("%lld\n",max);
    }
    }
    return 0;
}
