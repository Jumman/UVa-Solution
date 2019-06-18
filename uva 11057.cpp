#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int arr[10010],n;
int lowr_bound(int num)
{
    int low,high,mid;
    low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
        {
            high=mid-1;
            //break;
        }
        if(num<arr[mid])
            high=mid-1;
        else if(num>arr[mid])
            low=mid+1;
    }
    return high;
}
int higher_bound(int num)
{
    int low,high,mid;
    low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
        {
            low=mid+1;
           // break;
        }
        if(num<arr[mid])
            high=mid-1;
        else if(num>arr[mid])
            low=mid+1;
    }
    return low;
}
int main()
{
    int i,m,l,h,num;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        scanf("%d",&m);
        num=m/2;

        l=lowr_bound(num);
        num=m-arr[l];

        h=higher_bound(num);

        if(arr[l]==arr[h])
            printf("Peter should buy books whose prices are %d and %d.\n",arr[l],arr[h]);
        if(arr[l]<arr[h])
            printf("Peter should buy books whose prices are %d and %d.\n",arr[l],arr[h]);
        else if(arr[h]>arr[l])
            printf("Peter should buy books whose prices are %d and %d.\n",arr[l],arr[h]);
        printf("\n");
    }
    return 0;
}

