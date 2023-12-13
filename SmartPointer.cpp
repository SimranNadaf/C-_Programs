#include<iostream>
#include<memory>
using namespace std;


class Rectangle{
	public:
		int length=0;
		int breadth=0;
	Rectangle(int l,int b){
		length=l;
		breadth=b;
	}
	int area(){
		return length*breadth;
	}
};

int main(){
	
	// unique ptr
	
	unique_ptr<Rectangle> ptr(new Rectangle(30,80));		// unique ptr will be delete before program end -> no new to delete object manually
//	cout<<ptr->area()<<endl;
	
	unique_ptr<Rectangle> ptr2;
	ptr2=move(ptr);										// ptr pointer move to ptr2, but unique ptr can only assign one addess to one ptr, 
	cout<<"ptr2 area: "<<ptr2->area()<<endl;			// no multiple ptr assign to single adrress
//	cout<<"ptr1 area: "<<ptr->area();					// not execute 
	
	// shared_ptr										// shared ptr can be same to anther prt and also maintain count of shared ptrs.
	shared_ptr<Rectangle> ptr3(new Rectangle(5,2));
	cout<<ptr3->area()<<endl;
	
	shared_ptr<Rectangle> ptr4;
	ptr4=ptr3;
	cout<<"ptr3 area: "<<ptr3->area()<<endl;
	cout<<"ptr4 area: "<<ptr4->area()<<endl;
	cout<<"count of ptr: "<<ptr4.use_count()<<endl;
	
	// weak_ptr											// same as shared ptr but not maintain count of shared ptrs

	return 0;
}
