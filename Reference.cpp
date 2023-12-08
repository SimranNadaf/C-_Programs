#include<iostream>
using namespace std;

int main(){
	int x=10;
	int &y=x; // l-value : x as Address

//	&y=x;  // Error- assignment while declaration

	y++;
	x++;
	cout<<x<<endl;
	
	int a;
	a=x; // r-value : x as data
	x=25; // l-value: x as address
	
//	&y=a; // Error - not assign to another variable.

	cout<<&x<<"\n"<<&y<<endl; //reference variable does not use any memory, its addtress same as its actual variable
	
	return 0;
}
