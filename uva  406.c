#include<stdio.h>
#define sz 1000005
#define sz1 784941
int i,j,k;
int pr[sz1],ar[sz];
void sieve()
{
    long long int i,j;
    k=0;
    pr[k]=1;
    k++;
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
}
int main()
{
    int n,c,d,len,t;
    int a[10000];
    sieve();
    while((scanf("%d%d",&n,&c))==2&&n!=0&&c!=0){
            len=0;
        for(i=0;pr[i]<=n;i++){
            a[i]=pr[i];
            len++;
        }
        if(2*c>=len||2*c-1>=len){
            printf("%d %d:",n,c);
            for(j=0;j<len;j++){
                printf(" %d",a[j]);
            }
             printf("\n\n");
        }
        else if(len%2==0){
            d=(len-2*c)/2;
            if(d%2==0){
                t=d+2*c;
                printf("%d %d:",n,c);
                for(j=d;j<t;j++){
                    printf(" %d",a[j]);
                }
                printf("\n\n");
            }
            else{
                    t=d+2*c;
                    printf("%d %d:",n,c);
                for(j=d;j<t;j++){
                     printf(" %d",a[j]);
                }
                 printf("\n\n");
            }
        }
        else{
            d=(len-2*c-1)/2;
            if(d%2==0){
                t=d+2*c-1;
                printf("%d %d:",n,c);
                for(j=d+1;j<=t;j++){
                    printf(" %d",a[j]);
                }
                 printf("\n\n");
            }
            else{
                    t=d+2*c-1;
                    printf("%d %d:",n,c);
                for(j=d+1;j<=t;j++){
                    printf(" %d",a[j]);
                }
                 printf("\n\n");
            }
        }
    }
    return 0;
}
