#include<stdio.h>
int main()
{
    int n,s,t,a,b;
    while((scanf("%d",&n))==1&&n!=0)
    {
        s=n;
        t=0;
        while(s>1){
            if(s==2){
                s=3;
            }
            a=s/3;
            b=s%3;
            t=t+a;
            s=a+b;
        }
        printf("%d\n",t);
    }
}
