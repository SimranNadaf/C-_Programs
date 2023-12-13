#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
		cout<<"Constructor of Base"<<endl;
	}
    virtual ~Base(){							// virtual Destructor
		cout<<"Destructor of Base"<<endl;
	}
};
class Derived:public Base{
	public:
	Derived(){
		cout<<"Constructor of Derived"<<endl;
	}
	~Derived(){
		cout<<"Destructor of Derived"<<endl;
	}
};

int main(){
	// constructor called -> base then derived
	Base *ptr=new Derived();
	delete ptr;					// not virtual, only Base Destructor called  // virtual, destructor called -> Derived then Base
	return 0;
}
