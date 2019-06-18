#include<stdio.h>
#define sz 20000005
#define sz1 20000000
int pr[sz1],ar[sz],tw[sz1],tw1[sz1];
int i,j,k,p,q;
void sieve()
{
    long long int i,j,k,p,q;
    int l,z;
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
    q=0;
    for(p=0;pr[p]<=sz1;p++){
        if(pr[p]+2==pr[p+1]){
            l=pr[p],z=pr[p+1];
            tw[q]=l;
            tw1[q]=z;
            q++;

        }
    }
}
int main()
{
    int s;
    char c=32;
    sieve();
    while((scanf("%d",&s))==1&&s!=0){
        printf("(%d,%c%d)\n",tw[s-1],c,tw1[s-1]);
    }
    return 0;
}
