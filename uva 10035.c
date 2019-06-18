#include<stdio.h>
int main()
{
    long long int i,j,k,tmp,s,cnt;
    while((scanf("%lld%lld",&i,&j))==2&&i!=0&&j!=0){
        if(i<j){
            tmp=i;
            i=j;
            j=tmp;
        }
        s=0,cnt=0;
        while(i!=0){
            tmp=i%10;
            i=i/10;
            k=j%10;
            j=j/10;
            s=tmp+k+s;
            if(s>9){
                cnt++;
                s=s/10;
            }
            else{
                s=0;
            }
        }
        if(cnt==1){
            printf("%d carry operation.\n",cnt);
        }
        else if(cnt>1){
            printf("%d carry operations.\n",cnt);
        }
        else{
            printf("No carry operation.\n");
        }
    }
    return 0;
}
