#include <iostream>
#include <cmath>
using namespace std;

//判断是否为素数
int isPrime(long num)
{
int i,x=1;
if(x>2)
for(i=2;i<num;i++)
if(num%i==0) x=0;
return(x);

}

//计算质因素分解，
void factorization(long n,long factor[100],
int &nf
)
{
int k;
for(k=2;k<=n;k++)
{while(isPrime(k)&&n%k==0)
{factor[nf]=k;nf=nf+1;n=n/k;}
}

    return;
}

int main()
{
    long n;
    long factor[100];
    int numofFactor = 0;
    cin >> n;
    factorization(n, factor, numofFactor);
    for (int i = 0; i < numofFactor; i++)
    {
        cout << factor[i] << " ";
    }
    cout << endl;
    return 0;
}

