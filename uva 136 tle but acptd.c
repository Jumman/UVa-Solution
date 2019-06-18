#include<stdio.h>
int main()
{
    int i,cnt,ar[]={2,3,5};
    long long n,num;
    cnt=1;
    num=2;
    while(cnt!=1500)
    {
        n=num;
        i=0;
        while(n!=1&&i<3){
            if(n%ar[i]==0){
                n=n/ar[i];
            }
            else{
                i++;
            }
        }
        if(n==1){
            cnt++;
        }
        num++;
    }
    printf("The 1500'th ugly number is <%d>.",num-1);
    return 0;
}
