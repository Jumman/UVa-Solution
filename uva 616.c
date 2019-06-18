#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,root,i,j,fg;
    while((scanf("%d",&n))==1&&n>=0)
    {
        fg=0;
        root=sqrt(n)+1;
        for(i=root;i>=2;i--)
        {
            d=n;
            for(j=0;j<i&&d%i==1;j++)
            {
                d-=d/i+1;
            }
            if(d%i==0&&j==i)
            {
                fg=1;
                break;
            }
        }
        if(fg==1){
            printf("%d coconuts, %d people and 1 monkey\n",n,i);

        }
        else{
            printf("%d coconuts, no solution\n",n);
        }
    }
    return 0;
}
