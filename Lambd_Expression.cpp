#include<iostream>
using namespace std;

template <class t>
void fun(t p){
	p(10,30);			// calling p(10,30) actual it as f(10,30)
}

int main(){
	// [capture_list](parameter_list)->return type{body};   -> unname function
	
	[](){cout<<"Hello"<<endl;}();			// (); calling the function
	
	int x=[](int x,int y){return x+y;}
	(10,20);								// calling lambd function
	cout<<x<<endl;							// store the return in x
	
	auto f=[](int x,int y){cout<<x+y<<endl;};
	
	f(20,30);					// variable work as function
	
	auto f1=[](int x,int y)->int{return x+y;};				// return type is optional
	int y=f1(50,80);
	cout<<y<<endl;
	
	int a=10;
	[a](){cout<<a<<endl;}		// can use a but not modify
	();
	
	[&a](){cout<<++a<<endl;}			// passing reference of a, a can be modify and accessable.
	();
	cout<<a<<endl;
	
	int b=30;
	[&](){cout<<++a<<" "<<++b<<endl;}			// passing & -> can access and modify all variables
	();
	cout<<a<<" "<<b<<endl;
	
	fun(f);								// lambd function can be pass as argument
	
	return 0;
}
