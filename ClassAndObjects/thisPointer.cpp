#include<iostream>
using namespace std;

class Student{
	private:
		int marks1,marks2;
		string name;
		
	public:
		void setMarks(int marks1, int marks2){    // Mutator method
			if(marks1>=0)
//				marks1=marks1;			// Confuse - which is class parameter and which is method formal parameter
				this->marks1=marks1;    // this pointer is refer to this class parameter
			else
				this->marks1=0;
			if(marks2>=0)
				this->marks2=marks2;
			else
				this->marks2=0;
		}
		void setName(string name){    // Mutator method
			if(name.length()>=2)
				this->name=name;
			else
				this->name="";
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
	s.setMarks(50,50);
	s.setName("Simran");
	cout<<"mark1: "<<s.getMarks1()<<endl;
	cout<<"mark2: "<<s.getMarks2()<<endl;
	cout<<"Name: "<<s.getName()<<endl;
	return 0;
}
