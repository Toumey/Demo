#include <iostream>
using namespace std;
//请在这里补充类Boat和Car的定义
class Car;
class Boat
{
public:
Boat(int x){weight=x;}
friend int totalweight(Boat &b,Car &c);
private:
int weight;
};
class Car
{
public:
Car(int y){weight=y;}
friend int totalweight(Boat &b,Car &c);
private:
int weight;
};

int totalweight(Boat& b,Car& c)
{
    return b.weight+c.weight;
}
int main()
{
    Boat b(100);
    Car c(200);
    cout<<totalweight( b, c)<<endl;
    return 0;
}


