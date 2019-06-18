#include<stdio.h>
#define sz 105
int ar[sz];
int main()
{
    int n,i,j,age;
    while((scanf("%d",&n))==1&&n!=0)
    {
        /*for(i=0;i<105;i++)
            ar[i]=0;*/

        for(i=1;i<=n;i++)
        {
            scanf("%d",&age);
            ar[age]=ar[age]+1;
        }
        for(i=1;i<=n;i++)
        {
            if(ar[i]>0)
            {
                for(j=1;j<=ar[i];j++)
                    printf("%d ",i);
            }
        }
        printf("\n");
    }
    return 0;
}

