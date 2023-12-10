#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char s[50]="HELLO";
	char s1[5];
	
	
	cout<<strlen(s)<<endl;
	
//	strcat(s1,s);
	strncat(s1,s,4);
	cout<<s1<<endl;
	
//	strncpy(s1,s,4);
	strcpy(s1,s);
	cout<<s1<<endl;
	
	char s3[]="Programming";
//	cout<<strstr(s3,"kk")<<endl;
	cout<<strchr(s3,'o')<<endl;
	
	char str[]="Hello";
	char str1[]="Aello";
	cout<<strcmp(str,str1)<<endl;
	
	char n[]="123";
	char n1[]="12.34";
	
//	float num=strtof(n1);
//	cout<<num<<endl;

//	long int num1=strtol(n);
//	cout<<num1<<endl;
	
	//Tokenlization
	char tok[]="x=10?y=20?z=30";
	char *token=strtok(tok,"=?");
	while(token!=NULL){
		cout<<token<<endl;
		token=strtok(NULL,"=?");
	}

	
	return 0;
}
