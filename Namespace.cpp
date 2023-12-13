#include<iostream>
using namespace std;

namespace First{
	void fun(){
		cout<<"first fun"<<endl;
	}
}
namespace Second{
	void fun(){
		cout<<"second fun"<<endl;
	}
}
using namespace First;		// define defualt namespace as First
int main(){
	
	fun();				// using defualt namespace
	Second::fun();		// to call fun of Second use :: 
	
	return 0;
}
