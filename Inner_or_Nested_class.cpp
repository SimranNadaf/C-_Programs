#include<iostream>
using namespace std;

class Outter{
	public:
		int a=10;
		
		class Inner{
			public:
			int b=100;
			void display(){
				cout<<b<<endl;
			}
		};
		Inner i;				// craeted inner class object and access public data
		void displayInner(){
			cout<<i.b<<endl;
		}
};

int main(){
	
	Outter o;
	o.displayInner();
	
	Outter::Inner i;  		// can assess inner class using OutterClass::InnerClass if Inner class is public
	i.display();
}
