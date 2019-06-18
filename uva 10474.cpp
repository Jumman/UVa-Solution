#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[100010],n;
int lowr_bound(int num)
{
    int low,high,mid,index;
    low=0,high=n-1,index=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
        {
            index=mid;
            high=mid-1;
        }
        if(num<arr[mid])
            high=mid-1;
        else if(num>arr[mid])
            low=mid+1;
    }
    return index;
}

int main()
{
    int i,q,num,x,qu[100010],cs=1;
    while(scanf("%d%d",&n,&q)==2&&n!=0&&q!=0)
    {
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(i=0;i<q;i++)
            scanf("%d",&qu[i]);
            printf("CASE# %d:\n",cs++);
        for(i=0;i<q;i++)
        {
            num=qu[i];
            x=lowr_bound(num);
            if(x>=0)
                printf("%d found at %d\n",num,x+1);
            else if(x<0)
                printf("%d not found\n",num);
        }
    }
    return 0;
}
