#include <iostream>
using namespace std;
//请在这里补充CPoint，CRectangle类的定义
class CPoint
{
public:
	CPoint(int x=0,int y=0);
	CPoint(CPoint & p);
	friend class CRectangle;
private:
	int x,y;
};
CPoint::CPoint(int a,int b)
{
	x=a;
	y=b;
	cout<<"CPoint contstructor with default value(0,0) is called."<<endl;
}
CPoint::CPoint(CPoint & p)
{
	x=p.x;
	y=p.y;
	cout<<"CPoint copy contstructor is called."<<endl;
}
class CRectangle
{
public:
	CRectangle();
	CRectangle(CPoint p1,CPoint p2);
	CRectangle(int a,int b,int c,int d);
	CRectangle(CRectangle & q);
	int GetArea();
private:
	CPoint P1;
	CPoint P2;
	int X,Y;
};
CRectangle::CRectangle():P1(0,0),P2(0,0)
{
	cout<<"CRectangle default contstructor is called."<<endl;
}
CRectangle::CRectangle(CPoint p1,CPoint p2):P1(p1),P2(p2)
{
	cout<<"CRectangle contstructor with (CPoint,CPoint) is called."<<endl;
}
CRectangle::CRectangle(int a,int b,int c,int d):P1(a,b),P2(c,d)
{
	cout<<"CRectangle contstructor with (int,int,int,int) is called."<<endl;
}
CRectangle::CRectangle(CRectangle & q):P1(q.P1),P2(q.P2)
{
	cout<<"CRectangle copy contstructor is called."<<endl;
}
int CRectangle::GetArea()
{
	int s;
	X=P1.x-P2.x;
	Y=P1.y-P2.y;
	s=X*Y;
	return s;
}


int main()
{
    int a=1, b=1, c=6, d=11;
    cout<<"# Define p1 ######"<<endl;
    CPoint p1;
    cout<<"# Define p2 ######"<<endl;
    CPoint p2(10,20);
    cout<<"# Define rect1 ######"<<endl;
    CRectangle rect1;
    cout<<"# Define rect2 ######"<<endl;
    CRectangle rect2(p1, p2);
    cout<<"# Define rect3 ######"<<endl;
    CRectangle rect3(a, b, c, d);
    cout<<"# Define rect4 ######"<<endl;
    CRectangle rect4(rect2);
    cout<<"# Calculate area ######"<<endl;
    cout << "rect1面积为" << rect1.GetArea() << endl;
    cout << "rect2面积为" << rect2.GetArea() << endl;
    cout << "rect3面积为" << rect3.GetArea() << endl;
    cout << "rect4面积为" << rect4.GetArea() << endl;
    system("pause");
    return 0;
}



