#include<iostream>
#include<queue>
#include<algorithm>
#include<stdio.h>
using namespace std;
/*struct data{
        long long v;
};
bool operator<(const data &a , const data &b){
        return a.v>b.v;
}*/
int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        priority_queue<long long>pq;
        for(int i=0;i<n;i++)
        {
            long long v;
            cin>>v;
            pq.push(-v);
        }
        long long sum=0;
        while(pq.size()>1)
        {
            long long a=pq.top()*-1;
            pq.pop();
            long long b=pq.top()*-1;
            pq.pop();
            long long s=a+b;
            pq.push(-s);
            sum+=s;
        }
        cout<<sum<<endl;
    }
    return 0;
}
