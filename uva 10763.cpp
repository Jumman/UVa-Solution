#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        vector< int >s(n),t(n);
        for(int i=0;i<n;i++)
            cin>>s[i]>>t[i];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
