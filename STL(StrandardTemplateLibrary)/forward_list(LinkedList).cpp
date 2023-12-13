#include<iostream>
#include<forward_list>
using namespace std;

int main(){
	forward_list<int> l;				//  liked list
	l.push_front(10);			// added element at front
	l.push_front(100);
	l.push_front(50);
	l.push_front(20);
	
	forward_list<int>::iterator itr;
	for(itr=l.begin();itr!=l.end();itr++){
		cout<<*itr<<endl;
	}

	l.pop_front();			// delete element from front
	cout<<"\n";
	forward_list<int>::iterator itr1;
	for(itr1=l.begin();itr1!=l.end();itr1++){
		cout<<*itr1<<endl;
	}
	return 0;
}
