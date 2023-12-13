#include<iostream>
using namespace std;

class MyException{
	public:
		char* Error(){
			return "classException";
		}
};
class MyException2:public MyException{
	public:
		char* Error(){
			return "classException 2";
		}
};

int division(int a,int b)throw(MyException){			// trrow() - no throw in function
	if(b==0)											// throw(throw type)
//		throw 'e';
//		throw 1.1f;
		throw MyException();
	return a/b;
}

int main(){
	
	int a=10,b=0,c;
	
	try{
//		if(b==0)
//			throw 1;								// throw type can be any like int, float, char, Class
//		c=a/b;
//		c=division(a,b);
		cout<<c<<endl;
		
		try{											// inside a Try block, You can write try catch block
			int d=0;
			if(d==0)
				throw 1;
		}
		catch(int e){
			cout<<"innter try catch block "<<e<<endl;
		}
		throw MyException2();
		throw "Error";
		
	}
	catch(int e){
		cout<<"Division by zero "<<e<<endl;
	}
	catch(char e){
		cout<<"Division by zero "<<e<<endl;
	}
	catch(float e){
		cout<<"Division by zero "<<e<<endl;
	}	
	catch(MyException2 e){								// catching MyException2 throw - it is a child class - first
		cout<<"Division by zero "<<e.Error()<<endl;
	}
	catch(MyException e){								// catching MyException throw - it is a parent class - second
		cout<<"Division by zero "<<e.Error()<<endl;
	}
	catch(...){											// this catch block must be last, and it can handle any type of throw
		cout<<"Handle Any Exception"<<endl;
	}
	
	cout<<"Bye"<<endl;									// Out side of try block - it will run in any case.
	
	return 0;
}

