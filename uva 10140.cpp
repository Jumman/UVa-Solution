#include<stdio.h>
#include<math.h>
#include<vector>
#define sz 10000010
using namespace std;
vector<long long>sg,segment;
long long pr[sz],k;
bool ar[sz];
void sieve()
{
    long long i,j;k=0;
    pr[k]=2;
    k++;
    ar[0]=ar[1]=1;
    for(i=3;i<sz;i+=2)
    {
        if(ar[i]==0)
        {
            for(j=i*i;j<sz;j+=(2*i))
                ar[j]=1;
            pr[k]=i;
            k++;
        }
        ar[i+1]=1;
    }
}
void segmented_sieve(long long l,long long u)
{
    long long root,start,i,j,si;
    sg.clear();
    root=sqrt(u)+1;
    for(i=l;i<=u;i++)
        sg.push_back(i);
    if(l==0)
        sg[1]=0;
    else if(l==1)
        sg[0]=0;
    for(i=0;pr[i]<=root;i++)
    {
        si=pr[i];
        start=si*si;
        if(start<l)
            start=((l+si-1)/si)*si;
        for(j=start;j<=u;j+=si)
            sg[j-l]=0;
    }
}
int main()
{
    long long int i,j,l,u,min,max,f;
    long long cd[10];
    sieve();
    while(scanf("%lld%lld",&l,&u)==2)
    {
        segmented_sieve(l,u);
        min=99999999,max=0;
        for(i=l;i<=u;i++)
        {
            if(sg[i-l]!=0)
            {
                segment.push_back(sg[i-l]);
            }
        }
        j=segment.size();
        for(i=0;i<j;i++)
        {

                if(i>0&&(segment[i]-segment[i-1])<min)
                {
                    cd[0]=segment[i-1];
                    cd[1]=segment[i];
                    min=segment[i]-segment[i-1];
                }
                if(i>0&&(segment[i]-segment[i-1])>max)
                {
                    cd[2]=segment[i-1];
                    cd[3]=segment[i];
                    max=segment[i]-segment[i-1];
                }
        }
        if(max!=0&&min!=99999999&&j>=2)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",cd[0],cd[1],cd[2],cd[3]);
        else
            printf("There are no adjacent primes.\n");
        sg.clear();
        segment.clear();

    }
    return 0;
}
