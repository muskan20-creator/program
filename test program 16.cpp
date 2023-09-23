#include <iostream>
using namespace std;

int main ()
{
	float salary;
	cout << "enter salary:";
	cin >> salary;
	if(salary>=20000){
		cout << "salary is:" << salary - salary*7.0/100.0;
	}else if(salary>=10000){
		cout << "salary is:" << salary - 1000;
	}else{
		cout <<"salary is:" << salary;
	}
	return 0;
}
