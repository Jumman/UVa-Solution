#include<stdio.h>
#include<math.h>
using namespace std;
int last_mod(int a,int b)
{
    if(b==1)
        return a%1000;
    int x=last_mod(a,b/2);
    if(b%2==0)
        return x*x%1000;
    return x*x*(a%1000)%1000;
}
int main()
{
    int t,n,k,first,last;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);

        double p=log10(n)*k;
        p=p-(int)p;
        p=pow(10,p);

        first=p*100;

        last=last_mod(n,k);

        printf("%d...%03d\n",first,last);
    }
    return 0;
}
