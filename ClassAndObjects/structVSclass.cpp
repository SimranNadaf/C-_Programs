#include<iostream>
using namespace std;
// struct is public -- all data and method are public, no protection
struct student{
	string name;
	int marks1,marks2;
	
	int average(){   
		return (marks1+marks2)/2;
	}
};
//classs may be public or private -- here we can protect data and method
class StudentClass{
	string name;     // by default parameter are private
	int marks1,marks2;
	
	int average(){    
		return (marks1+marks2)/2;
	}
};
int main(){
	
	student s;
	s.marks1=10;
	s.marks2=20;
	s.name="Simran";
	cout<<"Average: "<<s.average()<<endl;
	
	StudentClass s1;
//	s1.marks1=10;   //[Error] 'int StudentClass::marks1' is private
	
	return 0;
}
