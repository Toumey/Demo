#include<iostream>
using namespace std;
int main()
{
	int a[8][8];
	int i,j,k,x=0;
	char b[8];
	for(i=0;i<8;i++)
		cin>>b[i];

	for(i=0;i<8;i++)
		{for(j=0;j<8;j++)
			a[i][j]=0;}	

	for(i=0;i<8;i++)
		{if(b[i]=='*')
			continue;
	     else
			{b[i]=b[i]-48;

			for(j=0;j<8;j++)
				a[i][j]=1;
			for(k=0;k<8;k++)
				a[k][b[i]-1]=1;

			for(k=i+1,j=b[i];k<8&&j<8;k++,j++)
				a[k][j]=1;
			for(k=i+1,j=b[i]-2;k<8&&j>=0;k++,j--)
				a[k][j]=1;
			for(k=i-1,j=b[i];k>=0&&j<8;k--,j++)
				a[k][j]=1;
			for(k=i-1,j=b[i]-2;k>=0&&j>=0;k--,j--)
				a[k][j]=1;}
	}
	for(i=0;i<8;i++)
		{for(j=0;j<8;j++)
			if(a[i][j]==0)
			{x=1;break;}
			if(x==1)
				break;
			
	}
	
	if(x==0)
		cout<<"No Answer";
	else
		cout<<j+1;

	return 0;
}


	






