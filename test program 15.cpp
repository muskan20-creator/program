#include <iostream>
using namespace std;

int main ()
{
	float salary;
	cout << "enter the salary:";
	cin >> salary;
	int grade;
	cout << "enter the grade:";
	cin >> grade;
	if(grade>15){
		cout << "salary is:" << salary + salary*50.0/100.0;
	}else if(grade<=15){
		cout << "salary is:" << salary + salary*25.0/100.0;
	}else{
		cout << "salary is:" << salary;
	}
	return 0;	
}
