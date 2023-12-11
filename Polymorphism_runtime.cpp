#include<iostream>
using namespace std;


class car{ 									// base class as general term - when use virtual function
	public:
		virtual void start(){
			cout<<"Basic car start"<<endl;
		}
};
class Innova:public car{
	public:
		void start(){
			cout<<"Innova start"<<endl;
		}
};
class Swift:public car{
	public:
		void start(){
			cout<<"Swift start"<<endl;
		}
};

int main(){
	
	car *c1=new Innova;   // as it has base pointer then also it call its own functions - when use virtual function.
	car *c2=new Swift;
	c1->start();
	c2->start();
	
	return 0;
}
