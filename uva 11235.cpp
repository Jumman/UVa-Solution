#include<stdio.h>
#include<algorithm>
#define mx 100001
using namespace std;
int inf=1e9;
int arr[mx],tree[mx*3];

void build(int node,int start,int end)
{
    if(start==end)
    {
        tree[node]=arr[start];
        return;
    }
    int left=2*node+1;
    int right=2*node+2;
    int mid=(start+end)/2;

    build(left,start,mid);
    build(right,mid+1,end);

    tree[node]=min(tree[left],tree[right]);
}

int query(int node,int start,int end,int l,int r)
{
    if(l>end||r<start)
        return inf;
    if(start>=l&&end<=r)
        return tree[node];

    int left=2*node+1;
    int right=2*node+2;
    int mid=(start+end)/2;

    int p1=query(left,start,mid,l,r);
    int p2=query(right,mid+1,end,l,r);

    return min(p1,p2);
}

int main()
{
    int t,n,q,i,j,cs=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(int k=0;k<n;k++)
            scanf("%d",&arr[k]);
        build(0,0,n-1);
        printf("Case %d:\n",cs++);
        while(q--)
        {
            scanf("%d%d",&i,&j);
            printf("%d\n",query(0,0,n-1,i-1,j-1));
        }
    }
    return 0;
}

