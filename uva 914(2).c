#include<stdio.h>
#include<math.h>
#define sz 1000005
int pr[sz],ar[sz],i,j,k;
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3;i<sz-5;i+=2){
        if(ar[i]==0){
            for(j=i*i;j<sz;j+=(i*2)){
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
    sieve();
    int t,L,U,r,p,l,n,c,max,m,jc,temp,root;
    int pr2[100],d[200];
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&L,&U);
        i=0;
        if(L>U){
            temp=L;
            L=U;
            U=temp;
        }
        root=sqrt(L);
        n=0;
        while(pr[i]<=U){
            if(pr[i]>=L&&pr[i]<=U){
                pr2[n]=pr[i];
                n++;
            }
            i++;
        }
        j=0;
        for(r=1;r<n;r++){
            d[j]=pr2[r]-pr2[r-1];
            j++;
            if(j>1){
                if(d[j]==d[j+1]){
                    for(j=0;j<=j;j++){
                        printf("%d ",pr[j]);
                    }
                }
            }

        }


    }
    return 0;
}

