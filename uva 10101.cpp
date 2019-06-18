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

long long x[4]={10000000,100000,1000,100};
char y[4][6]={"kuti","lakh","hajar","shata"};

void result(ll n)
{
    for(int i=0;i<4;i++)
    {
        if(n>=x[i])
        {
            result(n/x[i]);
            printf(" %s", y[i]);
            n%=x[i];
        }
    }
    if(n) printf(" %lld",n);
}
int main()
{
    IOS
    ll n;
    int c=1;
    while(scanf("%lld",&n)==1)
    {
        printf("%4d.",c++);
        if(n==0)  printf(" 0");
        result(n);
        printf("\n");
    }
    return 0;
}
