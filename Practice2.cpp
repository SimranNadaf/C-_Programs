#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float basic_salary,deduct_per,allow_per,ans;
	cout<<"Enter Basic Salary\n";
	cin>>basic_salary;
	cout<<"Enter Deduction Percentage\n";
	cin>>deduct_per;
	cout<<"Enter Allowance Percentage\n";
	cin>>allow_per;
	ans=basic_salary+basic_salary*allow_per/100-basic_salary*deduct_per/100;
	cout<<"Net Salary: "<<ans;
	return 0;
}
