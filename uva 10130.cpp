#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int cost[1020],weight[1020],dp[1020][35],n;
int func(int i,int w,int cap)
{
    int profit1,profit2;
    if(i==n)
        return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w+weight[i]<=cap)
        profit1=cost[i]+func(i+1,w+weight[i],cap);
    else
        profit1=0;
    profit2=func(i+1,w,cap);
    dp[i][w]= max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<1020;j++)
                for(int k=0;k<35;k++)
                    dp[j][k]=-1;
    while(t--)
    {
        int p,w;
        cin>>n;
        //vector<int>cost(n),weight(n);
        for(int i=0;i<n;i++)
        {
            cin>>p>>w;
            cost[i]=p,weight[i]=w;
        }
        int g,ans;
        cin>>g;
        vector<int>grp(g);
        for(int i=0;i<g;i++)
            cin>>grp[i];
        ans=0;
        for(int i=0;i<g;i++)
        {
            ans+=func(0,0,grp[i]);
            for(int j=0;j<1020;j++)
                for(int k=0;k<35;k++)
                    dp[j][k]=-1;
        }


        cout<<ans<<endl;
        for(int i=0;i<=n;i++)
        {
            cost[i]=0;
            weight[i]=0;
        }
    }
    return 0;
}

