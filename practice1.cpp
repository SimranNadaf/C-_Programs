#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int r;
	float pi=3.1325f,ans=0;
	cout<<"Enter radius\n";
	cin>>r;
	ans=r*r*pi;
	cout<<"Area of Circle="<<ans;
	return 0;
}
