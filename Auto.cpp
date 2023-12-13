#include<iostream>
using namespace std;

int main(){
	
	int p=10;
	double y=10.7f;
	
	auto x=p*y+'A';				// automatically assign datatype
	
	cout<<x<<endl;
	
	decltype(y) z=111.70f;		// copy the datatype of y and assign to z.
	cout<<z<<endl;
	
	return 0;
}
