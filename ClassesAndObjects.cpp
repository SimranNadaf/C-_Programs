#include<iostream>
using namespace std;

class Student{
	public:        // by default class parameter members are private
		string name;
		int marks1,marks2;
	
	int average(){      // by default class parameter method are public
		return (marks1+marks2)/2;
	}
};

int main(){
	
	cout<<"\t\tClassesAndObjects"<<endl<<endl;
	Student s;   // object memory allocated in stack
	s.name="Simran";
	s.marks1=50;
	s.marks2=50;
	cout<<"Average: "<<s.average()<<endl;;
	
	Student *s1=new Student;  // object memory allocated in heap
	//	Student *s1=&s;
	s1->marks1=50;
	s1->marks2=100;
	cout<<"Average: "<<s1->average()<<endl;

	return 0;
}
