#include<iostream>
#include<fstream>
using namespace std;
struct student{
	short sth_id;
	short score;
}; 
int main()
{
	int n,i;
	cin>>n;
	student *a=new student[n];
	student *b=new student[n];
	for(i=0;i<n;i++)
	cin>>a[i].sth_id>>a[i].score;
	ofstream f1("out.txt",ios_base::out|ios_base::binary);
	f1.write((char*)a,sizeof(a));
	f1.close();
	ifstream f2("out.txt",ios_base::in|ios_base::binary);
	if(f2)
	{
		for(i=0;i<n;i++)
		f2.read((char*)(b+i),sizeof(b+i));
	}
	else
	{
		cout<<"ERROR: Cannt open file 'out.txt'."<<endl;
	}
	ofstream f3("out.txt",ios_base::app);
	f3.write((char*)b,sizeof(b));
	f3.close();
	return 0;
}

