#include<stdio.h>
int arr[50010],n;

int lower_bound(int num)
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
            high=mid-1;
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
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(num==arr[mid])
            low=mid+1;
        if(num<arr[mid])
            high=mid-1;
        else if(num>arr[mid])
            low=mid+1;
    }
    return low;
}

int main()
{
    int i,num,l,h,q,lu[25010];

        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&q);
        for(i=0;i<q;i++)
            scanf("%d",&lu[i]);
        for(i=0;i<q;i++)
        {
            num=lu[i];
            l=lower_bound(num);
            h=higher_bound(num);

            if((l<0||arr[l]==0||arr[l]==num)&&(arr[h]==0||arr[h]==num||h>n))
                printf("X X\n");

            else if(arr[h]==0||arr[h]==num)
                printf("%d X\n",arr[l]);

            else if(arr[l]==0||arr[l]==num)
                printf("X %d\n",arr[h]);

            else
                printf("%d %d\n",arr[l],arr[h]);
        }
    return 0;
}
