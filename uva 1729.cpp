#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define momo(a,b) memset((a),(b),sizeof(a))
#define max3 (a,b,c) max(a,max(b,c))
#define min3 (a,b,c) min(a,min(b,c))
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  ((a*b)/__gcd(a,b))
#define mp make_pair
#define pb push_back
using namespace std;
const int mod=1000000007;
const int maxn=(int)1e5+10;
const int inf=(int)1e9;
const double pi=acos(-1.0);
typedef long long ll;
typedef pair<int,int>pii;

int main()
{
    IOS
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        int cnt[128]={},minn=maxn;
        for(int j=0;j<s.size();j++)
            cnt[s[j]]++;
        for(int j='a';j<='z';j++) minn=min(minn,cnt[j]);
        cout<<"Case "<<i<<": "<<minn<<endl;
    }
    return 0;
}


