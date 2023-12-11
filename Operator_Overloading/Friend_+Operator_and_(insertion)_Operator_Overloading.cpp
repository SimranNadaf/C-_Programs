#include<iostream>
using namespace std;

class Complex{
	public:
		int real,img;
	
	friend Complex operator+(Complex c1,Complex c2);   	//Friend Operator +  OverLoading - work as global function
	
	friend ostream & operator<<(ostream &out, Complex &c);  //Friend Operator Insertion << OverLoading - work as global function

//	friend void operator<<(ostream &out, Complex &c);  //Friend Operator Insertion << OverLoading - work as global function

};

Complex operator+(Complex c1,Complex c2){			
		Complex temp;									// without scope resolution :: operator
		temp.real=c1.real+c2.real;
		temp.img=c1.img+c2.img;
		return temp;
	}
	
ostream &operator<<(ostream &out, Complex &c){			// return cout.
	out<<c.real<<"+i"<<c.img<<endl;
}

//void operator<<(ostream &out, Complex &c){			// return nothing.
//	out<<c.real<<"+i"<<c.img<<endl;
//}
	

int main(){
	
	Complex c1,c2,c3;
	c1.real=10;c1.img=5;
	c2.real=3;c2.img=7;
	
	c3=c1+c2;
//	c3=c1.operator+(c2);
//	cout<<c3.real<<"+i"<<c3.img<<endl;
	cout<<c3<<endl;   // if return nothing it - Error for for anything after Object;
					// if return ostream(cout) it - no Error for for anything after Object;
	return 0;
}
