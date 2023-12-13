#include<iostream>
#include<cstdarg>					// imp for use va_lis, va_start, va_arg
using namespace std;

int sum(int n,...){
	va_list list;				// create a list
	va_start(list,n);			// start list with size n 
	
	int x;
	int s=0;
	for(int i=0;i<n;i++){
		x=va_arg(list,int);		// accessing single element at a time
		s+=x;
	}
	return s;
}

int main(){
	
	cout<<sum(3,1,2,3)<<endl;
	cout<<sum(5,1,2,3,4,5)<<endl;
	
	return 0;
}
