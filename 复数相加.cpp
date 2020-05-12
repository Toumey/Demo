#include<iostream>
#include<iomanip>
using namespace std;
void fsxj(float x1,float y1,float x2,float y2)
{
	float x3,y3;
	if(x1<x2) {x3=x2-x1;cout<<"-"<<fixed<<setprecision(2)<<x3<<" ";}
	else {x3=x1-x2;cout<<fixed<<setprecision(2)<<x3<<" ";}
	if(y1<y2) {y3=y2-y1;cout<<"-"<<fixed<<setprecision(2)<<y3;}
	else {y3=y1-y2;cout<<fixed<<setprecision(2)<<y3;}
}
int main()
{
	float x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	fsxj(x1,y1,x2,y2);
	return 0;
}
