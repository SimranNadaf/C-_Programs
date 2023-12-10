#include<iostream>
using namespace std;

class Student{
	private:
		int marks1,marks2;
		string name;
//		int *p;
		
	public:
//		Student(){				// Default or Non_Parameterized Constructor
//			marks1=0;
//			marks2=0;
//			name="";
////			p=new int[5];       // pointer to heap memory 
//		}
		Student(int m1=0, int m2=0, string n=""){   // Parameterized Constructor
			marks1=m1;										// -when it has a default parameter value, it is same as default constructot
			marks2=m2;
			name=n;
		}
		Student(Student &obj){       // Copy constructor - Shadow copy constructor
			marks1=obj.marks1;						
			marks2=obj.marks2;
			name=obj.name;
//			p=obj.p;                // point to obj heap memory array
		}
//		Student(Student &obj){       // Deep copy constructor
//			marks1=obj.marks1;						
//			marks2=obj.marks2;
//			name=obj.name;
////			p=new int[5];                // point to its seperate heap memory array
//		}
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
		int average(){      // by default class parameter method are public
		return (marks1+marks2)/2;
	}
};

int main(){
	
	Student s;
	cout<<"Average: "<<s.average()<<endl;
	
	Student s1(50,50,"Simran"); // called parameterized constructor
	cout<<"Average: "<<s1.average()<<endl;
	
	Student s2(s1);             // called Copy constructor
	cout<<"Average: "<<s2.average()<<endl;
	return 0;
}
