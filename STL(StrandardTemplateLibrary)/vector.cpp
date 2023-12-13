#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;				// Vector has template -> define datatype as vector<int/float/char>
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	
//	for(int x:v){
//		cout<<x<<endl;
//	}
	
	// using iterator
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<endl;
//		cout<<++*itr<<endl;				// ++*ptr modify actual values of vector
//		cout<<itr<<endl;				// [Error] itr is pointer can access without *
	}
	

	v.pop_back();						// remove element from last

	cout<<"Size of vector: "<<v.size()<<endl;
	cout<<"Capacity of vector: "<<v.capacity()<<endl;			// it mutable array it can increase or decrease sixe of vector as needed.
	// using for loop
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(60);
//	cout<<"Capacity of vector: "<<v.capacity()<<endl;				// after pushing move than 8 (previous capacity) it change cpacity 8 to 16. 
	return 0;
}
