#include <iostream>
using namespace std;
int main()
{
	int a = 50;
	int b = 30;
	// Arithmetic operators
	cout << "result of aethematic operators are " << endl;
	cout << "Adittion of a and b is " << a + b << endl;
	cout << "Subtraction of a and b is " << a - b << endl;
	cout << "Multiplication of a and b is " << a * b << endl;
	cout << "division of a and b is " << a / b << endl;
	cout << "Modulus of a and b is " << a % b << endl;
	cout << "increases the value of a variable by 1 using post increment " << a++ << endl;
	cout << "increases the value of a variable by 1 using pre increment " << ++a << endl;
	cout << "decrease the value of b variable by  1 using post increment " << b-- << endl;
	cout << "decrease the value of b variable by 1 using pre increment " << --b << endl;
	cout << "**************************" << endl;
	// Assignment Operator
	cout << "result of assignment and compound assignment operators are " << endl;
	int marks = 20;
	cout << "The marks are " << marks <<endl;
	// Compound Assignment or Additional Assignment Operators 
	marks += 20;
	marks -= 3;
	marks *= 3;
	marks /= 3;
	marks %= 3;
	// Comparison Operators
	cout << (a > b) << endl;
	cout << (a < b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a != b) << endl;
	cout << (a == b) << endl;
	// Logical Operators
	bool isStudent = true;
	bool isgirl = true;
	cout << "**************" << endl;
	cout << "Result of Logical Operators are " <<endl;
	cout << (isStudent && isgirl) << endl;
	cout << (isStudent || isgirl) << endl;
	cout << (isStudent) << endl;	
	return 0;
}
