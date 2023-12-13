#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;				// doubly liked list
	l.push_back(20);			// added element at end
	l.push_back(30);
	l.push_front(10);			// added element at front
	l.push_front(100);
	
	list<int>::iterator itr;
	for(itr=l.begin();itr!=l.end();itr++){
		cout<<*itr<<endl;
	}
	
	l.pop_back();			// delete element fron end
	l.pop_front();			// delete element from front
	
	cout<<"Size of List: "<<l.size();
	return 0;
}
