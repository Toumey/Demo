#include <iostream>
#include <iomanip>
using namespace std;
//请在此处补充Account类的定义
class Account{
public:
void init(char a[],char b[],char c[],int d,double e);
void printmoney();
void deposit(double x);
void withdraw(double y);
private:
char *n;
double m,mm;
};
void Account::init(char a[],char b[],char c[],int d,double e)
{
n=b;
mm=e*100;
if(mm-int(mm)!=0)  cout<<"您输入的金额不合法"<<endl;
else m=e;
}
void Account::printmoney()
{
cout<<fixed<<setprecision(2)<<n<<"的存款为"<<m<<endl;
}
void Account::deposit(double x)
{
mm=x*100;
if(mm-int(mm)!=0) cout<<"您输入的金额不合法"<<endl;
else m=m+x;
}
void Account::withdraw(double y)
{
mm=y*100;
if(mm-(int)mm!=0) cout<<"您输入的金额不合法 "<<endl;
else if(y>m) cout<<"您的存款金额不足"<<endl;
else m=m-y;
}


int main()
{
    Account tom;
    tom.init("32020320011001876X", "Tom Black", "男", 19, 2000.89);
    tom.printmoney();//输出：Tom Black的存款为2000.89
    tom.deposit(89.471);//输出：您输入的金额不合法
    tom.printmoney();//输出：Tom Black的存款为2000.89
    tom.deposit(10000);
    tom.printmoney();//输出：Tom Black的存款为12000.89
    tom.withdraw(10001);
    tom.printmoney();//输出：Tom Black的存款为1999.89
    tom.withdraw(10000.123);//输出：您输入的金额不合法
    tom.printmoney();//输出：Tom Black的存款为1999.89
    tom.withdraw(10000.9);//输出：您的存款金额不足
    tom.printmoney();//输出：Tom Black的存款为1999.89
    Account jerry;
    jerry.init("320203200910116569", "Jerry Black", "女", 11, 100.956);//输出：您输入的金额不合法
    jerry.printmoney();//输出：Jerry Black的存款为0.00
}

