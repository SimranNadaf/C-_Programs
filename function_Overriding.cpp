#include<iostream>
using namespace std;

class Base{
	public:
		void display(){
			cout<<"Display of Base"<<endl;
		}
};

class Derived:public Base{
	public:
		void diplay(){								// rebuilding the same function that is derived from base class
			cout<<"Diplay of Derived"<<endl;
		}
};

int main(){
	
	Base b;
	b.display();
	
	Derived d;
	d.diplay();
	return 0;
}
