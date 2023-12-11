#include<iostream>
using namespace std;

class Base{
	public:
		Base(){
			cout<<"non-para base class"<<endl;
		}
		Base(int x){
			cout<<"Para of base class: "<<x<<endl;
		}
};

class Derived:public Base{
	public:
	Derived(){
			cout<<"non-para Derived class"<<endl;
		}
	Derived(int a){
			cout<<"Para of Derived class: "<<a<<endl;
		}
	Derived(int x,int a):Base(x){
			cout<<"Para of Derived class: "<<a<<endl;
	}
};

int main(){
	
	// Derived constructor Called then go to Base constructor and start execute from base.
	
	Derived d;   // Base default constructor execute then Derived Defualt constructor
	
	Derived d1(10);  // Base default constructor execute then Derived parameterized constructor
	
	Derived d2(10,20);  // Base parameterized constructor execute then Derived parameterized constructor
	return 0;
}
