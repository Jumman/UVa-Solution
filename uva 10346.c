#include<stdio.h>
int main()
{
    int n,k,a,b,c,t;
    while(scanf("%d%d",&n,&k)==2){
        a=n,t=0;
        while(a>=k){
            b=a/k;
            c=a%k;
            a=b+c;
            t=t+b;
        }
        printf("%d\n",n+t);
    }
    return 0;
}
