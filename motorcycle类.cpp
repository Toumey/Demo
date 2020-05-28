#include "iostream"
using namespace std;

class vehicle{
	private:
		int maxspeed,weight;
	public:
		vehicle(int a,int b):maxspeed(a),weight(b){
			cout<<"vehicle constructor called. "<<"maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;
		}
		void run(){
			cout<<"vehicle run"<<endl;
		}
		void stop(){
			cout<<"vehicle stop"<<endl;
		}
		~vehicle(){
			cout<<"vehicle destructor called. "<<"maxspeed:"<<maxspeed<<"; weight"<<weight<<endl;
		}
};
class bicycle:virtual public vehicle{
	private:
		int height;
	public:
		bicycle(int a,int b,int c):vehicle(a,b),height(c){
			cout<<"bicycle constructor called. height:"<<height<<endl;
		}
		~bicycle(){
			cout<<"bicycle destructor called. height:"<<height<<endl;
		}
};
class motorcar:virtual public vehicle{
	private:
		int seatnum;
	public:
		motorcar(int a,int b,int c):vehicle(a,b),seatnum(c){
			cout<<"motorcar constructor called. seatnum:"<<seatnum<<endl;
		}
		~motorcar(){
			cout<<"motorcar destructor called. seatnum:"<<seatnum<<endl;
		}
};
class motorcycle:public bicycle,public motorcar{
	public:
		motorcycle(int a,int b,int c,int d):bicycle(c,d,a),motorcar(c,d,b),vehicle(c,d){
			cout<<"motorcycle constructor called"<<endl;
		}
		~motorcycle(){
			cout<<"motorcycle destructor called"<<endl;
		}
};


int main(int argc, char *argv[])
{
    motorcycle m(1, 2, 3, 4);//1表示height，2表示setnum，3表示maxspeed，4表示weight
    m.run();
    m.stop();
    return 0;
}

