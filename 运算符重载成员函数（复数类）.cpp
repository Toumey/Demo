#include <iostream>
using namespace std;

class Complex{
	public:
		Complex(double a=0,double b=0)
		{
			real=a;
			imag=b;
		}
		Complex operator + (Complex c2)
		{
			Complex c;
			c.real=c2.real+real;
			c.imag=c2.imag+imag;
			return Complex(c.real,c.imag);
		}
		Complex operator + (double x)
		{
			Complex c;
			c.real=real+x;
                        c.imag=imag;
			return Complex(c.real,c.imag); 
		}
		Complex operator - (Complex c2)
		{
			Complex c;
			c.real=real-c2.real;
			c.imag=imag-c2.imag;
			return Complex(c.real,c.imag);
		}
		Complex operator - (double x)
		{
			Complex c;
			c.real=real-x;
                        c.imag=imag;
			return Complex(c.real,c.imag);
		}
		void print()
		{
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
	private:
		double real;
		double imag;
}; 



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

    return 0;
}


