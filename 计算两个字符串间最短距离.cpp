#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[10],b[10];
	int x,i,j,min,n,m;
	cin>>a;
	cin>>b;	
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n;i++)
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
	for(i=0;i<m;i++)
		if(b[i]>='A'&&b[i]<='Z')
			b[i]=b[i]+32;

	for(i=0,min=27;i<n;i++)
		for(j=0;j<m;j++)
			{if(a[i]>b[j]) x=a[i]-b[j];
			else x=b[j]-a[i];
			if(x<min) min=x;}
	cout<<min;
	return 0;
}



