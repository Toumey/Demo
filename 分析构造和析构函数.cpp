#include <iostream>
#include <string>
using namespace std;

class CStudent
{
public:
static int count;
CStudent()
{
	cout<<name<<" is contructing"<<endl;
	count++;
}
~CStudent()
{
	cout<<name<<" is destructing"<<endl;
	count--;
}
CStudent(string NAME,int AGE)
{
name=NAME;
age=AGE;
cout<<name<<" is contructing"<<endl;
count++;
}
static int getcount()
{
	return count;
}
void printname()
{
	cout<<"name:"<<name<<endl;
}

private:
int age;
string name="noname";

};
//请在这里初始静态成员变量
int CStudent::count=0;


int main()
{
	cout << "现在有学生" << CStudent::getcount() << endl;
	{
		CStudent stuB[5];
		stuB[4].printname();
		cout << "现在有学生" << CStudent::getcount() << endl;
	}
	cout << "现在有学生" << CStudent::getcount() << endl;
	{
		CStudent stuA[2] = {CStudent("Tom", 3), CStudent("Jerry", 2)};
		for (int i = 0; i < 2; i++)
		{
			stuA[i].printname();
		}
		cout << "现在有学生" << CStudent::getcount() << endl;
	}
	cout << "现在有学生" << CStudent::getcount() << endl;

	return 0;
}

