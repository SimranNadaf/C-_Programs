#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ofstream ofs;
//	ofstream ofs("My.txt")
	ofs.open("My.txt",ios::trunc);		// by default -> ios::trunc  , to append data use ios::app
	
	ofs<<"Simran"<<endl;
	ofs<<50<<endl;
	ofs<<"Computer"<<endl;
	
	ofs.close();				// file object msut be close
	return 0;
}
