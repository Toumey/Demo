#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int flag=0,i,j,n;
	double a[1000],t;
	ifstream fa("a.txt",ios_base::in);
	ofstream fb("b.txt",ios_base::out);
	if(fa)
	{
		while(!fa.fail())
		{
			fa>>a[flag];
			flag++;
		}
		n=flag-1;
	}
	else
	{
		cout<<"ERROR:Cannot open file 'fa'."<<endl;
	}
	fa.close();
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	for(i=0;i<n;i++)
	fb<<a[i]<<" ";
	fb.close();	
	return 0;
 } 

