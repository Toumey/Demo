#include<iostream>
using namespace std;
int huanshui(int shui,int ping,int gai,int x)
{
	ping=shui+ping%2;
	gai=shui+gai%3;
	shui=ping/2+gai/3;
	x=x+shui;
	if(shui==0) return x;
	return huanshui(shui,ping,gai,x);
}
int main()
{
	int shui,ping,gai,qian,x;
	cin>>qian;
	shui=qian;
	x=shui;
	cout<<huanshui(shui,ping,gai,x);
	return 0;
}




	
