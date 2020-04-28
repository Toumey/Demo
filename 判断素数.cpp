#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int a)
{
int i,x=1;
if(a==1&&a==2)
x=0;
 else for(i=2;i<a;i++)
{x=a%i;
if(x==0) break;}
return x;
}

int main()
{
    unsigned short a;
    cin>>a;
    if (isPrime(a))
        cout<<"Y"<<endl;
    else
        cout<<"N"<<endl;
}

