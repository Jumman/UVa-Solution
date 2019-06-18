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
    int c;
    cin>>c;
    while(c--)
    {
        int n,t,m,a[1500];
        cin>>n>>t>>m;
        t*=2;
        for(int i=0;i<m;i++)
            cin>>a[i];
        int time=0,total_time=0;
        for(int i=(m+n-1)%n;i<m;i+=n)
        {
            if(total_time>a[i]) time=total_time;
            else time=a[i];
            total_time=time+t;
        }
        printf("%d %d\n", total_time-t/2,(m+n-1)/n);
        //cout<<total_time-t/2<<" "<<(m+n-1)/n<<endl;
    }
    return 0;
}

