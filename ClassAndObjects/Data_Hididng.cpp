#include<iostream>
using namespace std;

class Student{
	private:
		int marks1,marks2;
		string name;
		
	public:
		void setMarks(int m1, int m2){    // Mutator method
			if(m1>=0)
				marks1=m1;
			else
				marks1=0;
			if(m2>=0)
				marks2=m2;
			else
				marks2=0;
		}
		void setName(string n){    // Mutator method
			if(n.length()>=2)
				name=n;
			else
				name="";
		}
		int getMarks1(){   // Accessor method
			return marks1;
		}
		int getMarks2(){    // Accessor method
			return marks2;
		}
		string getName(){    // Accessor method
			return name;
		}
};

int main(){
	Student s;
//	s.name="122";   // Error Can't accessable
	s.setMarks(50,50);
//	s.setMarks(-50,-50);  // added validation in mutator method - can't asssign -ve value
	s.setName("Simran");
//	s.setName("A");  // added validation in mutator method - can't asssign name that length is less than 2
	cout<<"Marks1: "<<s.getMarks1()<<"\tMarks2: "<<s.getMarks2()<<endl;
	cout<<"name: "<<s.getName()<<endl;
	return 0;
}
