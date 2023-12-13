#include<iostream>
using namespace std;

#define PI 3.1425

//#define PI 3       // [Warning] "PI" redefined

#ifdef PI			// it define if it is not define
	#define PI 4
#endif

#define max(x,y) (x>y?x:y)   // replace max(x,y) with expression

#define msg(x) #x			// replace msg(x) with string(x)

int main(){
	
	cout<<PI<<endl;
	cout<<max(10,20)<<endl;
	cout<<msg(hello world)<<endl;
	return 0;
}
