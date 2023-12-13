#include<iostream>
using namespace std;

class Demo{
	public:
		int x=10;
		int y=20;
	void display()const{	// this function can't modify any variable
	cout<<x<<y<<endl;
	x++;				// [Error] increment of member 'Demo::x' in read-only object
	}
};

int main(){
	
//	const int x=10;
//	int const x=10;
//	x++;				// [Error] Read only x variable
//	x=20;			   // [Error] Read only x variable

	int x=10;
	int y=20;
//	const int *ptr=&x;
//	int const *ptr=&x;
//	++*ptr;				// [Error] Read-only location *ptr
//	ptr=&y;				// ptr location can point to another location   -> ptr point to y
	
	
//	int *const ptr=&x;
//	++*ptr;				// can modity value.   -> 11
//	ptr=&y;				//[Error] assignment of read-only variable ptr
	
//	const int *const ptr=&x;
//	--*ptr;				// [Error] decrement of read-only location '*(const int*)ptr'
//	ptr=&y;			   //  [Error] assignment of read-only variable 'ptr'
	
	return 0;
}
