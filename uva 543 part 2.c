#include<stdio.h>
#include<math.h>
int PRIME(int a){
     int i,root;
    if(a==2){
        return 1;
    }
    if(a%2==0){
        return 0;
    }
    root=sqrt(a);
    for(i=3;i<=root;i=i+2){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
   int n,i,k,j,l,a,b,m,p,max;
    int ar[10000];
    while((scanf("%d",&n))==1&&n!=0){
            l=0;
            max=0;
            m=0,p=0;
    for(i=2;i<=n;i++){
        if(1==PRIME(i)){
            ar[l]=i;
            l++;
        }
    }
    for(k=0;k<l;k++){
            for(j=k+1;j<l;j++){
            a=ar[k],b=ar[j];
        if((a+b)==n){
           if((b-a)>max){
            max=b-a;
            m=a,p=b;
           }
           }
    }
    }
    if(m+p==n){
    printf("%d = %d+ %d\n",n,m,p);
    }
    else {
        printf("Goldbach's conjecture is wrong.\n");
    }
    }
    return 0;
}

