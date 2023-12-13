#include<iostream>
using namespace std;

class Test{
	public:
		int x=10;				// in class intializer -> new in c++ 11
		int y=20;
	Test(int a, int b){
		x=a;
		y=b;
	}
	Test():Test(1,1){			// constructor delegation - > can call parameterized constructor in Defualt construct to avoid repitation of code.
	}
};

int main(){
	Test t;							// Test(1,1) called
	cout<<t.x<<" "<<t.y<<endl;
	
	Test t2(7,9);					// Test(7,9) called
	cout<<t2.x<<" "<<t2.y<<endl;
	return 0;
}
