#include<iostream>
using namespace std;

class Complex{
	public:
		int real,img;
	
	friend Complex operator+(Complex c1,Complex c2);   	//Friend Operator OverLoading - work as global function
	
};

Complex operator+(Complex c1,Complex c2){			
		Complex temp;									// without scope resolution :: operator
		temp.real=c1.real+c2.real;
		temp.img=c1.img+c2.img;
		return temp;
	}
	
int main(){
	
	Complex c1,c2,c3;
	c1.real=10;c1.img=5;
	c2.real=3;c2.img=7;
	
	c3=c1+c2;
//	c3=c1.operator+(c2);
	cout<<c3.real<<"+i"<<c3.img<<endl;
	
	return 0;
}
