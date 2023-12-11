#include<iostream>
using namespace std;

class your;				// to avoid error in My class

class My{
	public: int a;
	private: int b;
	protected: int c;
	
	friend your;		// your class will act as friend of my class. so, your class can access all data of my class.
};

class your{
	public:
	My m;
	void show(){			// access all data of my class through my class object.
	m.a=10;
	m.b=20;
	m.c=30;
	cout<<m.a<<m.b<<m.c<<endl;
}
};

int main(){
	
	your y;
	y.show();
	return 0;
}
