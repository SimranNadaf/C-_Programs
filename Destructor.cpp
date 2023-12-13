#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
		cout<<"Constructor of Base"<<endl;
	}
	~Base(){
		cout<<"Destructor of Base"<<endl;
	}
};

int main(){
	
	Base b;   // afetr constructor -> Destructor called when object is destroy

	Base *ptr=new Base; // only constructor called 
	delete ptr; 		// now destructor called
	return 0;	
}
