#include<stdio.h>
long int GCD(long int G,long int L){
  long int gcd,temp;
  if(G==0){
    gcd=L;
  }
  else if(L==0){
    gcd=G;
  }
  else{
    while(L!=0){
        temp=L;
        L=G%L;
        G=temp;
    }
    gcd=G;
  }
  return gcd;
}
long int LCM(long int G,long int L){
long int lcm,t;
t=GCD(G,L);
lcm=(G*L)/t;
return lcm;
}
int main()
{
    int t;
    long int G,L,gcd,lcm;
    scanf("%d",&t);
    while(t--){
        scanf("%ld%ld",&G,&L);
        gcd=GCD(G,L);
        lcm=LCM(G,L);
        if(gcd==G&&lcm==L){
            printf("%ld %ld\n",gcd,lcm);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
