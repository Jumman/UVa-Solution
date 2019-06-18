#include<stdio.h>
#include<math.h>
#define sz 50000
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
    int g,l,n,root;
    sieve();
    while((scanf("%d",&g))==1&&g!=0){
        printf("%d = ",g);
        if(g<0){
           printf("-1 ");
           g=g*-1;
           if(g!=1){
            printf("x ");
           }
        }
        root=sqrt(g);
        l=0;
        while(pr[l]<=root&&l<k){
            while(g%pr[l]==0){
                    printf("%d",pr[l]);
            g=g/pr[l];
            if(g==1){
                    break;
            }
            else{
                printf(" x ");
            }
            }
            if(g==1){
                    break;
            }
            l++;
            }
             if(g!=1){
                printf("%d",g);
            }
             printf("\n");
            }
    return 0;
}

