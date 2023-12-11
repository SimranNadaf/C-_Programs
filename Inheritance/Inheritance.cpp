#include<iostream>
using namespace std;

class Base{
	public: int a;
	void display(){
		cout<<"Base Class "<<a<<endl;
	}
};
class Derived: public Base{
	public:
		void show(){
			cout<<"derived Class"<<endl;
		}
};
int main(){
	
	Derived d;
	d.a=10;			// can access public parameter properties and methods of base class
	d.display();
	d.show();
	
	return 0;
}
