#include <iostream>
using namespace std;
class Complex{
	public:
		Complex(double a=0,double b=0)
		{
			real=a;
			imag=b;
		}
		friend Complex operator + (Complex c1,Complex c2);
		friend Complex operator + (Complex c1,double x);
		friend Complex operator - (Complex c1,Complex c2);
		friend Complex operator - (Complex c1,double x);
		void print()
		{
			cout<<"("<<real<<")"<<"+"<<"("<<imag<<"i)"<<endl;
		}
	private:
		double real;
		double imag;
};
Complex operator + (Complex c1,Complex c2)
{
	return Complex(c2.real+c1.real,c2.imag+c1.imag);
}
Complex operator + (Complex c1,double x)
{
	return Complex(c1.real+x,c1.imag);
}
Complex operator - (Complex c1,Complex c2)
{
	return Complex(c1.real-c2.real,c1.imag-c2.imag);
}
Complex operator - (Complex c1,double x)
{
	return Complex(c1.real-x,c1.imag);
}

int main()
{
    Complex a(3,4),b(1,-1),c;
    c=a+b;
    cout<<"a+b=";
    c.print();
    cout<<endl;
    c=a-b;
    cout<<"a-b=";
    c.print();
    cout<<endl;
    c=a+100;
    cout<<"a+100=";
    c.print();
    cout<<endl;
    c=a-2.5;
    cout<<"a-2.5=";
    c.print();
    cout<<endl;
    c=100+a;
    cout<<"100+a=";
    c.print();
    cout<<endl;
    c=2.5-a;
    cout<<"2.5-a=";
    c.print();
    cout<<endl;
    return 0;
}


