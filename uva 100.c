#include<stdio.h>
int main()
{
    int i,j,count,max,k,l,m,n,temp;
   while((scanf("%d%d",&i,&j))==2&&i!=0&&j!=0){
        m=i,n=j;
        if(i>j){
            temp=i;
            i=j;
            j=temp;
        }
        max=0;
        for(k=i;k<=j;k++){
          count=0;
          l=k;
        while(l!=1){
                    if(l%2==0){
                            count++;
                    l=l/2;
                    }
                    else{
                            count++;
                    l=3*l+1;
                    }
                    }
                    if(count>max){
                            max=count;
                    }
                    }
                         printf("%d %d %d\n",m,n,max+1);
                         }
                    return 0;
                    }
