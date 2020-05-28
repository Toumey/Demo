#include <iostream>
using namespace std;
const float pi=3.14159;
 class Shape{
 	public:
 		Shape(int a);
		int getID();
 		int getArea();
		~Shape();
	private:
		int m_ID;  
 };
 class Circle:public Shape{
 	private:
 		int r;
 	public:
 		Circle(int b,int a):r(b),Shape(a){
		 	cout<<"Circle constructor called:"<<getID()<<endl;
		 }
 		double getArea(){
 			return r*r*pi;
		 }
 		~Circle(){
 			cout<<"Circle destructor called:"<<getID()<<endl;
		 }
 };
 class Rectangle:public Shape{
 	private:
 		int h,w;
 	public:
 		Rectangle(int a,int b,int c):h(a),w(b),Shape(c){
 			cout<<"Rectangle constructor called:"<<getID()<<endl;
		 }
 		int getArea(){
 			return h*w;
		 }
 		~Rectangle(){
 			cout<<"Rectangle destructor called:"<<getID()<<endl;
		 }
 };
 Shape::Shape(int a){
 	m_ID=a;
 	cout<<"Shape constructor called:"<<m_ID<<endl;
 }
 int Shape::getID(){
 	return m_ID;
 }
 int Shape::getArea(){
 	return 0;
 }
 Shape::~Shape(){
 	cout<<"Shape destructor called:"<<m_ID<<endl;
 }

int main()
{
    Shape s(1);//1表示ID
    Circle c(4,2);//4表示半径，2表示ID
    Rectangle r(4, 5,3);//4和5表示长和宽，3表示ID
    cout<<"Shape的面积"<<s.getArea()<<endl;
    cout<<"Circle的面积"<<c.getArea()<<endl;
    cout<<"Rectangle的面积"<<r.getArea()<<endl;
}

