#include<iostream>
using namespace std;

class Base{
	private: int a=10;
	protected: int b=20;
	public: int c=30;
};

class Derived:public Base{			// object can assess anything all derived from base is public
	void display(){					// class will access it
		b=10;
		c=30;
	}
		// derived class can get access of all parameters except private.
};

//class Derived:protected Base{			// object can't assess anything all derived from base is protected
//	void display(){						// class will access it
//		b=10;
//		c=30;
//	}
//		// derived class can get access of all parameters except private.
//};

//class Derived:private Base{			// object can't assess anything all derived from base is private
//	void display(){						// class will access it
//		b=10;
//		c=30;
//	}
//		// derived class can get access of all parameters except private.
//};

int main(){
	// derived class can get access of all parameters except private.
	Derived d;
//	d.a=10; 	// [Error] 'int Base::a' is private
//	d.b=20;     // [Error] 'int Base::b' is protected
	d.c=30;     
	return 0;
}
