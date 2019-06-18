#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int i,n,x,card;

    while(scanf("%d",&n)==1&&n!=0)
    {
        x=0,i=1,card=1;
        while(x<=n)
        {
            x=pow(2,i++);
            if(x<=n)
                card=x;
        }
        if(card==n)
            printf("%d\n",n);
        else
            printf("%d\n",(n-card)*2);
    }
    return 0;
}
