#include<iostream>
using namespace std;

class Base{								// Abstract class  - Interface
	public:
		virtual void display()=0;  		// Pure Virtual Fuction 
};
class Derived:public Base{				// derived class must override base function or not then it is also abstract class
	public:
		void display(){
			cout<<"Derived class"<<endl;
		}
};

int main(){
	
	Base *ptr=new Derived;			// Base b; it is not accessable; only pointer will create. - abstract class
	ptr->display();
	
	return 0;
}
