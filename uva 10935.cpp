#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    int i,n,x;
    queue<int>q;
    while((scanf("%d",&n))==1&&n!=0)
    {
        for(i=1;i<=n;i++)
            q.push(i);

        printf("Discarded cards:");
        while(q.size()>1)
        {
            printf(" %d",q.front());
            q.pop();
            x=q.front();
            q.pop();
            if(!q.empty())
                printf(",");
            q.push(x);

        }
        printf("\nRemaining card: %d\n",q.front());
        q.pop();
    }
    return 0;
}
