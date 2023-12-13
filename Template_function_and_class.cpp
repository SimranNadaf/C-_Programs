#include<iostream>
using namespace std;

template <class T>
class Stack{
	public:
		T *stk;
		int top;
		int size;
	
	Stack(int s){
		size=s;
		top=-1;
		stk=new T[s];
	}
	void push(T p);
	T pop();
};

template <class T>
void Stack<T>::push(T p){
	if(top>=size)
		cout<<"Stack is Full"<<endl;
	else
		top++;
		stk[top]=p;
}
template <class T>
T Stack<T>::pop(){
	T x;
	if(top==-1)
		cout<<"stack is Empty"<<endl;
	else
		x=stk[top];
		top--;
		return x;
}

int main(){
	
	Stack<int> s(5);
	s.pop();
	s.push(10);
	s.push(20);
	s.push(30);	
	s.push(40);		
	s.push(50);	
	cout<<s.pop()<<endl;

	for(int i=0;i<5;i++){
		cout<<s.stk[i]<<endl;
	}
	
	Stack<char> s1(10);
	s1.push('A');
	s1.push('B');
	s1.push('C');
	s1.push('D');
	s1.push('E');
	for(int i=0;i<5;i++){
		cout<<s1.stk[i]<<endl;
	}
	cout<<s1.pop()<<endl;
	return 0;
}
