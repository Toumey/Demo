#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Array
{
//请完成类的设计
public:vector<T>a;
       Array(int n){}
       void input(int n)
	   { 
		 for(int i=0;i<n;i++)
		 {
		   T item;
		   cin>>item;
		   a.push_back(item);
		 }
	   }
      T& operator [] (int i) 
	   {
		 return a[i];
	   }
};
int max(int n,int m)
{
	return n>m? n:m;
 } 
int min(int n,int m)
{
	return n<m? n:m;
}
class Fract
{
//请完成类的设计
public:Fract(int a=0,int b=1):n(a),m(b)
{
  int x,y,i;
  x=max(n,m);
  y=min(n,m);
for(i=y;i>=2;i--)
{
	if(y%i==0&&x%i==0)
	{
		n=n/i;
		m=m/i;
		break;
	}
}
}
 void show()
 {
   if(n==0||m==1)
	 cout<<n<<endl;
   else 
   {if(n>0&&m>0)
		cout<<n<<"/"<<m<<endl;
    else if(n<0&&m>0)
		cout<<-n<<"/"<<-m<<endl;
	else if(n<0&&m>0)
		cout<<n<<"/"<<m<<endl;
	else if(n>0&&m<0)
		cout<<-n<<"/"<<-m<<endl;
 	}
 }
Fract &operator += (Fract &p)
{
  Fract q(p.n*m+p.m*n,p.m*m);
  return *this=q;
}
friend istream &operator >> (istream &c,Fract &d)
{
  c>>d.n>>d.m;
  return c;
}
  private:
  	int n,m;
};


int main()
{
    unsigned int n;
    cin >> n;
    Array<double> db(n);
    db.input(n);
    double dbsum(0.0);
    for (unsigned int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(n);
    fr.input(n);
    Fract frsum(0, 1);
    for (unsigned int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}












