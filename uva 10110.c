#include<stdio.h>
#include<math.h>
int main()
{
    long long n,root;
    while((scanf("%lld",&n))==1&&n!=0)
    {
        root=sqrt(n);
        if(root*root==n) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
