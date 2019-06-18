#include<stdio.h>
int GCD(int i,int j){
    int gcd,temp;
     if(i==0){
        gcd=i;
     }
     else if(j==0){
        gcd=j;
     }
     else{
        while(j!=0){
            temp=j;
            j=i%j;
            i=temp;
        }
        gcd=i;
     }
     return gcd;
}
int main()
{
    int i,j,N,G;
    while((scanf("%d",&N))==1&&N!=0){
            G=0;
        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}
