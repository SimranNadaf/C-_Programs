#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum day{mon,tue,wend,thur,fri,sat,sun
};

typedef int marks;
typedef int rollno;
int main(int argc, char** argv) {
	marks m1=90,m2=70,m3=50;
	rollno r1=12,r2=13,r3=14;
	day d=sun;
	cout<<m1<<m2<<m3<<r1<<r2<<r3;
	return 0;
}
