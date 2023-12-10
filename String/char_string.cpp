#include<iostream>
using namespace std;

int main(){
	char s[]="hello";
	cout<<s<<endl;
	
	char s1[]={65,66,67,68,69,'\0'};
	cout<<s1<<endl;
	
	char *s3="HELLO";
	cout<<s3<<endl;
	
	//reading from user
	char str[100];
//	cin>>str;  // get one word

//	cin.get(str,50); - get only once
//	cin.get(str,50);  - exit the program

//	cin.get(str,50);
//	cin.ignore();
//	cin.get(str,50); - working properly

	cin.getline(str,50); - get whole line.
	cout<<str<<endl;
	
	return 0;
}
