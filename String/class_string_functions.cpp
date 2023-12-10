#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str="HELLO";
	
	cout<<"Length: "<<str.length()<<endl;
	cout<<"Size: "<<str.size()<<endl;
	cout<<"Capacity: "<<str.capacity()<<endl;
	str.resize(30);
	cout<<"Resized Capcity: "<<str.capacity()<<endl;
	cout<<"Max_size: "<<str.max_size()<<endl;
	cout<<"IS Empty: "<<str.empty()<<endl;
	str.clear();
	cout<<"string length after clear(): "<<str.length()<<endl;
	str.append(" Simran");
	cout<<"Appending string str: "<<str<<endl;
	cout<<"insert at 3 to 'kk'"<<str.insert(3,"kk")<<endl;
	cout<<"replace at 0 to length 6 to SIM"<<str.replace(0,6,"SIMRAN")<<endl;
	cout<<"Erase str: "<<str.erase()<<endl;
	string str2="Simran";
	str2.push_back('Z');
	cout<<"Push element at end: "<<str2<<endl;
//	str2.pop_back();
	cout<<"Pop element from end: "<<str2<<endl;
	
	//COPY and FIND
//	string str3;
//	str2.strcopy(str3);
//	cout<<str3<<endl;
	str2="Programming Developer";
	cout<<str2.find("Dev")<<endl;
	
	cout<<str2.find('r')<<endl;
	cout<<str2.rfind('r')<<endl;
	
	cout<<str2.find_first_of('r',3)<<endl;
	cout<<str2.find_last_of('r',3)<<endl;
		
	cout<<str2.substr(0,7)<<endl;
	
	string s1="hello";
	string s2="Hello";
	cout<<s1.compare(s2)<<endl;
		
	// Operator
	cout<<"at()"<<s1.at(0)<<endl;
//	cout<<"front()"<<s1.front()<<endl;
//	cout<<"back() "<<s1.back()<<endl;
	s1=s2; // =
	
	
	return 0;
}
