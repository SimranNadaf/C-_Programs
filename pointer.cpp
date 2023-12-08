#include<iostream>
using namespace std;

int main(){
	// pointer
	int x=10;
	int *p; // declaration 
	p=&x; // initilalization
	
//	cout<<x<<endl;
//	cout<<&x<<endl;
//	cout<<p<<endl;
//	cout<<&p<<endl;
//	cout<<*p<<endl; // derefencing
	
	//pointer arithmatic
	int A[5]={1,2,3,4,5};
	int *p1=A;
	
	for(int i=0;i<=5;i++){
		cout<<*(p1+i)<<endl;
	}
	
	cout<<*p1<<endl;
	// 1. p++
	p1++;
	cout<<*p1<<endl;
	// 2. p--
	p1--;
	cout<<*p1<<endl;
	// 3. p+4
	cout<<p1<<endl;
	p1=p1+2;
	cout<<p1<<endl;
	cout<<*p1<<endl;
	// 4. p-2
	cout<<p1<<endl;
	p1=p1-2;
	cout<<p1<<endl;
	cout<<*p1<<endl;
	
	//Heap memory allocation - Dynamic Allocation
	int *p2=new int[5];
	p2[2]=2;
	cout<<*(p2+2)<<endl;
	delete []p2; // Deallocation
	p2=NULL;
	cout<<p2<<endl;
	
	// Problems in pointer
	//1. uninitialize
	int y=2;
	int *ptr;
	cout<<ptr<<endl;
	
	//2. Memory leak
	int *ptr1=new int[2];
//	ptr1=NULL; - wrong
//	delete ptr1;
//	ptr1=NULL; - right

	//3. dangling poinetr
//	cout<<ptr1<<endl; // used deleted pointer
	return 0;
}
