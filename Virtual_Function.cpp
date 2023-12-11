#include<iostream>
using namespace std;


class BasicCar{
	public:
		virtual void start(){
			cout<<"Basic car start"<<endl;
		}
};
class AdvancedCar:public BasicCar{
	public:
		void start(){
			cout<<"Advanced car start"<<endl;
		}
};

int main(){
 
	BasicCar *p=new AdvancedCar; 		// now it point to Basic car but in actual it is Advanced. so, execute advanced car function start()
	p->start();							// vitual - it runs logically
	
	return 0;
}
