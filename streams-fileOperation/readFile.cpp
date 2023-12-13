#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream ifs("My.txt");
	
	if(ifs.is_open())					// ifs is also use for checking
		cout<<"file is opened"<<endl;
	
	string name;
	int roll;
	string branch;
	
	ifs>>name>>roll>>branch;  			// you must know the format of file
	cout<<"Name: "<<name<<endl;
	cout<<"Roll: "<<roll<<endl;
	cout<<"Branch: "<<branch<<endl;
	
		
	ifs>>name>>roll>>branch;
	cout<<"Name: "<<name<<endl;
	cout<<"Roll: "<<roll<<endl;
	cout<<"Branch: "<<branch<<endl;
	
	ifs.close();
	
	return 0;
}
