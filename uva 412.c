#include<stdio.h>
#include<math.h>
int GCD(int p,int q){
int gcd,temp;
 if(p==0){
    gcd=p;
 }
 else if(q==0){
    gcd=q;
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
    int n,i,j,k,p,q,gCd,to,count,l;
    double root,pi;
    int m[50];
    while((scanf("%d",&n))==1&&n!=0){
          count=0;
            to=0;
        for(i=0;i<n;i++){
            scanf("%d",&m[i]);
        }
        for(j=0;j<n;j++){
            for(k=j+1;k<n;k++){
                p=m[j],q=m[k];
                to++;
                gCd=GCD(p,q);
                if(gCd==1){
                    count++;
                }

            }
        }
         if(count>0){
           pi=(to*6.0)/count;
            root=sqrt(pi);
            printf("%0.6lf\n",root);
        }
           else{
            printf("No estimate for this data set.\n");
        }

    }
    return 0;

}
