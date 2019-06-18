#include<stdio.h>
#include<string.h>
#define sz 1000
int pr[sz],ar1[sz],i,k,j;
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=1;
    k++;
    pr[k]=2;
    k++;
    ar1[0]=1;
    for(i=3;i<sz-5;i+=2){
        if(ar1[i]==0){
            for(j=i*i;j<sz-5;j+=(i*2)){
                ar1[j]=1;
            }
            pr[k]=i;
            k++;
        }
        ar1[i+1]=1;
    }
}
int main()
{
    sieve();
    int ar[150],l,t,j=1;
    char w[22];
    for(i=97;i<=122;i++){
        ar[i]=j;
        j++;
    }
    for(i=65;i<=90;i++){
        ar[i]=j;
        j++;
    }
    while((gets(w))){
            l=strlen(w);
            t=0;
    for(i=0;i<l;i++){
        t=t+ar[w[i]];
    }
    if(ar1[t]==0){
        printf("It is a prime word.\n");
    }
    else{
        printf("It is not a prime word.\n");
    }
    }
    return 0;
}
