#include<iostream>
using namespace std;

class Base{
	public: int a;
	private: int b;
	protected: int c;
	
	friend void fun();    		// friend keyword: this function act as friend of class. it not invalve it, but it access all data of class.
};

void fun(){
	Base obj;       			// only access data using object of that class
	obj.a=10;					// public
	obj.b=20;					// private
	obj.c=30;					// protected
	cout<<obj.a<<obj.b<<obj.c<<endl;
}

int main(){
	fun();
	return 0;
}
