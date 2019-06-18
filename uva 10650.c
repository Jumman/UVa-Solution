#include<stdio.h>
#define sz 100000
int pr[sz],ar[sz],i,j,k;
void sieve()
{
    for(i=2;i<sz;i++){
        ar[i]=0;
    }
    ar[1]=1;
    for(i=2;i<sz;i++){
        if(ar[i]==0){
            for(j=2;i*j<sz;j++){
                ar[i*j]=1;
            }
        }
    }
}
int main()
{
    int x,y,d[500],temp,l,pr1[100],m,n;
    sieve();
    while((scanf("%d%d",&x,&y))==2&&(x!=0||y!=0)){
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        k=0;
        for(i=x+1;i<y;i++){
            if(ar[i]==0){
                pr[k]=i;
                k++;
            }
        }
        j=0,m=0;
        for(i=1;i<k;i++){
            d[j]=pr[i]-pr[i-1];
            j++;
            if(j>1){
                if(d[j-1]==d[j-2]){
                        if(d[j-1]!=d[j]){
                            printf("%d",pr[j-2]);
                            for(l=j-1;l<=j;l++){
                                printf(" %d",pr[l]);
                            }
                            printf("\n");
                        }

                    }

                }
            }

    }
    return 0;
}
