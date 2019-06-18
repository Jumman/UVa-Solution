#include <stdio.h>

using namespace std;

int main()
{

    long long int n,p,i;
    while(scanf("%lld",&n)==1)
    {
        p=1;
        for(i=1;;i++)
        {
            if(i%2==1)
                 p*=9;

            else
                 p*=2;
            if(p>=n)
                break;
        }
        if(i%2==1)
            printf("Stan wins.\n");

        else
            printf("Ollie wins.\n");
    }
    return 0;
}
