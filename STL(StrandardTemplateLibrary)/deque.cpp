#include<iostream>
#include<deque>						// Deque -> push from front and back, pop from front and back	
using namespace std;

int main(){
	deque<int> d;			
	d.push_back(10);
	d.push_back(20);
	d.push_front(5);
	d.push_front(2);
	
	deque<int>::iterator itr;
	for(itr=d.begin();itr!=d.end();itr++){
		cout<<*itr<<endl;
	}
	
	cout<<"size of set: "<<d.size()<<endl;
	
	d.pop_back();
	d.pop_front();
	
	deque<int>::iterator itr1;
	for(itr1=d.begin();itr1!=d.end();itr1++){
		cout<<*itr1<<endl;
	}
	
	cout<<"size of set: "<<d.size()<<endl;

	return 0;
}
