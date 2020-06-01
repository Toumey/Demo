#include <iostream>
using namespace std;
class Point{
	public:
		Point(int x=0,int y=0)
		{
			m_x=x;
			m_y=y;
		}
		Point& operator ++ ();
		Point operator ++ (int);
		friend ostream & operator << (ostream &out,const Point &c);
	private:
		int m_x;
		int m_y;
};
Point& Point::operator ++()
{
	m_x++;
	m_y++;
	return * this;
}
Point Point::operator ++(int)
{
	Point old=*this;
	++( * this);
	return old;
}
ostream & operator << (ostream &out,const Point &c)
{
	out<<"("<<c.m_x<<","<<c.m_y<<")"<<endl;
 } 

int main()
{
    Point a(1,3);
    cout<<a;
    cout<<a++;
    cout<<++a;
    return 0;
}

