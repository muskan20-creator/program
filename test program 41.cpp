#include <iostream>
using namespace std;

int main()
{
	int num, reversed_number=0, remainder;
	cout << "enter a number: " ;
	cin >> num;
	while(num != 0){
		remainder = num%10;
		reversed_number = reversed_number * 10 + remainder;
		num/=10;
	}
	cout << "reversed number = "  << reversed_number;
	return 0;
}
