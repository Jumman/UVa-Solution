#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,s,total,A,r,a_r_c,a_s_c,a_v_t,pi=acos(-1);
    while((scanf("%lf%lf%lf",&a,&b,&c))==3){
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        a_r_c=pi*pow((A/s),2);
        a_v_t=A-a_r_c;
        total=pi*pow(((a*b*c)/(4*A)),2);
        a_s_c=total-A;
        printf("%.4lf %.4lf %.4lf\n",a_s_c,a_v_t,a_r_c);
    }
    return 0;
}
