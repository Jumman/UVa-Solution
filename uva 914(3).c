#include<stdio.h>
#define sz 1000010
int ara[sz],p1[sz],count[500];
int i,j,k,max;
void sieve()
{
    for(i=2;i<sz;i++) {
    ara[i]=1;
    }
    for(i=2;i<sz;i++) {
            if(ara[i]==1) {
                for(j=2;i*j<sz;j++) {
                    ara[i*j]=0;
                            }
                            }
                            }
                            }
int main()
{
    int a,b,T,d,sum,x,d_max,r;
    sieve();
    scanf("%d",&T);
    for(i=1;i<=T;i++) {
            scanf("%d%d",&a,&b);
            k=0; sum=0;
            if(a>b) {
            x=a;
            a=b;
            b=x;
            }
            for(j=a;j<=b;j++) {
            if(ara[j]==1){
                p1[k]=j;
                k++;
                }
                }
                for(j=0;j<500;j++) {
                        count[j]=0;
                }
                d_max=0;
                max=0;
                if(k==0){
                    sum=2;
                }
                else if(k==1) {
                    d=p1[0];
                    d_max=1;
                    count[d]=1;
                }
                else {
                    for(j=1;j<k;j++) {
                    d=p1[j]-p1[j-1];
                    count[d]++;
                    if(d>d_max) {
                    d_max=d;
                    }
                    if(count[d]>max) {
                            max=count[d];
                            r=d;
                    }
        }
        }
        for(j=0;j<=d_max;j++) {
                if(max==count[j]) {
                    sum++;
        }
         }
          if(sum==1) {
                printf("The jumping champion is %d\n",r);
          }
          else { printf("No jumping champion\n");
           }
           }
           return 0;
            }
