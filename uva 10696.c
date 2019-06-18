#include<stdio.h>
int f91(int a)
{
    if(a<=100)  return (f91(f91(a+11)));
    if(a>=101) return (a-10);
}
int main()  //nicher niyooomeoo kora jabeeee.
{
    int n,ans;
    while(scanf("%d",&n)==1&&n!=0)
    {
        ans=f91(n);
        printf("f91(%d) = %d\n",n,ans);
    }
    return 0;
}
/*int main()
{
    int n,ans;
    while(scanf("%d",&n)==1&&n!=0)
    {
        if(n<=100)
        {   ans=91;
            printf("f91(%d) = %d\n",n,ans);
        }
        else if(n>=101)
        {
            ans=n-10;
            printf("f91(%d) = %d\n",n,ans);
        }
    }
    return 0;
}*/
