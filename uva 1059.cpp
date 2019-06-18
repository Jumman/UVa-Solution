#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,m;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n;

        if(n<10) m=n*n;
        else m=n;

        while(m>9)
        {
            ll sum=0;
            while(m!=0)
            {
                sum+=(m%10)*(m%10);
                m/=10;
            }
            m=sum;
        }
    if(m==1)
        printf("Case #%lld: %lld is a Happy number.\n",i,n);
    else
        printf("Case #%lld: %lld is an Unhappy number.\n",i,n);

    }
    return 0;
}
