#include<iostream>
using  namespace std;

class Student{
	private:
		int marks1,marks2;
		string name;
	public:								// type of functions in class
		Student();                          // Constructor
		Student(int m1,int m2, string n);   // Constructor
		Student(Student &obj);				// Constructor
		void setMarks(int m1,int m2);		// Mutator
		void setNmae(string n);				// Mutator
		int getMarks1();					// Accessor
		int getMarks2();					// Accessor
		int average();						// Facilitation
//		int percentage();					// Facilitation
		~Student();							// Deconstructor
		
	int percentage(){								// Inline funtion - that is declared in class
			return (marks1+marks2)/200*100;			
		}
};

	inline int Student::average(){                 // Non-inline Function - :: scope resolution operator - declared outside class
		return (marks1+marks2)/2;				  //  To make non-inline funtion to inline function use "inline" keyword.
	}

int main(){
	
	return 0;
}
