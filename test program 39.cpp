#include <iostream>
using namespace std;

int main()
{
	int factorial=1, number;
	cout << "number is: ";
	cin >> number;
	for(int i=1; i<=number; i++){
		factorial*=i;
		cout << "factorial is:" << factorial << endl;
	}
	return 0;
}
