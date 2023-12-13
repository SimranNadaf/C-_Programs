#include<iostream>
#include<set>				
using namespace std;

int main(){
	set<int> s;				//  set -> unique values, unordered
	s.insert(100);
	s.insert(200);
	s.insert(200);
	s.insert(300);
	s.insert(50);
	
	set<int>::iterator itr;
	for(itr=s.begin();itr!=s.end();itr++){
		cout<<*itr<<endl;
	}
	
	cout<<"size of set: "<<s.size()<<endl;

	return 0;
}
