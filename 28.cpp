#include<iostream>
using namespace std;
class X
{
public:

    double x,y;

    X(double a,double b):x(a),y(b){}
};
bool operator==(const X &a,const X &b)
    {
        if(a.x==b.x&&a.y==b.y)
            return 1;
        else
            return 0;
    }
int main()
{
    X ob1(10.65,12.09),ob2(10,12.09);
    if(ob1==ob2)
        cout<<"Object are same"<<endl;
    else
        cout<<"Object are different"<<endl;
    return 0;
}
