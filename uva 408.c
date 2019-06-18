#include<stdio.h>
int GCD(int p,int q){
    int temp,gcd;
    if(p==0){
        gcd=q;
    }
    else if(q==0){
        gcd=p;
    }
    else {
        while(q!=0){
            temp=q;
            q=p%q;
            p=temp;
        }
        gcd=p;
    }
    return gcd;
}
int main()
{
    int step,mod,fst,scnd,to,trd,i,j,p,q,gcd;
    while((scanf("%d%d",&step,&mod))==2&&step!=0&&mod!=0){
                p=step,q=mod;
                gcd=GCD(p,q);
                if(gcd==1){
                     printf("%10d%10d    Good Choice\n\n",step,mod);
                }
                else {
                     printf("%10d%10d    Bad Choice\n\n",step,mod);
                }
    }
    return 0;
}
