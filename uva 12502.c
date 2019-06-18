#include<stdio.h>
int main()
{
    double t,x,y,z,d;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        d=(z/(x+y))*(x+(x-y));
        printf("%0.0lf\n",d);
    }
    return 0;
}
