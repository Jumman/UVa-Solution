// 2 tai e  accepted
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,sum,low,high,ans,arr[100010];
    while(scanf("%d%d",&n,&s)==2)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        low=0,high=0,ans=n+1,sum=arr[0];
        while(high<n)
        {
            if(sum>=s)
            {
                int length=high-low+1;
                if(length<ans) ans=length;
            }
            if(sum>=s&&low<high)
            {
                sum-=arr[low];
                low++;
            }
            else if(sum<s)
            {
                high++;
                if(high<n)
                    sum+=arr[high];
            }
        }
        if(ans==n+1) ans=0;
        printf("%d\n",ans);
    }
       return 0;
}
/*
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,minn,sum,length,low,high,arr[100010];
    while(scanf("%d%d",&n,&s)==2)
    {
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        low=0,high=1,length=1e9,minn=1e9,sum=0;
        while(low<n)
        {
            sum=arr[low];
            if(sum>=s)
            {

                minn=1;
                break;
            }
            for(high=low+1;high<n;high++)
            {
                sum+=arr[high];
                if(sum>=s)
                {
                    length=high-low+1;
                    if(length<minn)
                        minn=length;
                    break;
                }
            }
            low++;
            }
            if(minn==1e9) minn=0;
            printf("%d\n",minn);
        }
       return 0;
    }
*/

