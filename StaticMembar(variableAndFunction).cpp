#include<iostream>
using namespace std;

class Test{
	public:
		int a;
		static int count;			// create once - its same for all objects.
		
		Test(){
			a=10;
			count++;
		}
		static int getCount(){
//			a++;					// only access static variable in static function
			return count;
		}
};

int Test::count=0;				// can access and modify the static variavle set as global and it in class and outside of class using ClassName::

int main(){
	
	Test t1,t2,t3;
	cout<<t1.getCount()<<endl;
	cout<<t2.getCount()<<endl;
	cout<<t3.getCount()<<endl;
	
	cout<<Test::count<<endl;
	
	return 0;
}
