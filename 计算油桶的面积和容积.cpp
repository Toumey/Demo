#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.1415926
class cylinder{
public:
	cylinder(double a,double b);
	double getvolumn();
	double getarea();
	~cylinder(){cout<<"析构函数被调用"<<endl;};
private:
	double r,h;
};
cylinder::cylinder(double a,double b)
{
	h=a;
	r=b;
	cout<<"构造函数被调用"<<endl;
}
double cylinder::getvolumn()
{
	double v;
	v=PI*r*r*h;
	return v;
}
double cylinder::getarea()
{
	double s;
	s=2*PI*r*r+2*PI*r*h;
	return s;
}
int main()
{
    double d,h;
    cin>>d>>h;
    cylinder can(h,d/2);
    cout<<fixed<<setprecision(6);
    cout<<"油桶的容积是"<<can.getvolumn()<<" "<<endl;
    cout<<"铁皮的面积是"<<can.getarea()<<endl;
	return 0;
}
