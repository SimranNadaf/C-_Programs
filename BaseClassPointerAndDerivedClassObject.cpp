#include<iostream>
using namespace std;

class BasicCar{
	public:
		void start(){
			cout<<"Basic car start"<<endl;
		}
};
class AdvancedCar:public BasicCar{
	public:
		void PlayMusic(){
			cout<<"Play Music"<<endl;
		}
};

int main(){
	
	AdvancedCar c;
	c.start();
	c.PlayMusic();
	
	BasicCar *p=&c;   // we point to Advanced car as basic car
	p->start();  // Basic car start
//	p->PlayMusic(); // [Error] 'class BasicCar' has no member named 'PlayMusic' 
// - we said it is basic car so we can't access advanced car functions

//	BasicCar *c1=new AdvancedCar;  - it is not possible - we can't say to basic Car as Advanced car.
//	c1->PlayMusic();
	
	return 0;
}
