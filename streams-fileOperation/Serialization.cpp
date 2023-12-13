#include<iostream>
#include<fstream>
using namespace std;

class Student{
	public:
		string name;
		int roll;
		string branch;
		
		friend ofstream & operator<<(ofstream &ofs, Student &s);
		friend ifstream & operator>>(ifstream &ifs, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s){				// overload operator << ofstream
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;
	return ofs;
}

ifstream & operator>>(ifstream &ifs, Student &s){				// overload operator >> ifstream
	ifs>>s.name>>s.roll>>s.branch;
	return ifs;
}

int main(){
	
	ofstream ofs("Serialize.txt");
	Student s;
	cout<<"Enter Name, rollno, Branch of student"<<endl;
	cin>>s.name>>s.roll>>s.branch;
	if(ofs){
		cout<<"File Opened and write Student object"<<endl;
	}
//	s.name="Simran";
//	s.roll=55;
//	s.branch="Computer";
	ofs<<s;
	ofs.close();
	
	ifstream ifs("Serialize.txt");
	Student s1;
	if(ifs){
		cout<<"File opened"<<endl;
	}
	ifs>>s;
	cout<<"Name: "<<s.name<<endl;
	cout<<"Roll: "<<s.roll<<endl;
	cout<<"Branch: "<<s.branch<<endl;
	ifs.close();
	
	return 0;
}
