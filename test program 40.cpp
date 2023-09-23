#include <iostream>
using namespace std;

int main ()
{
	int num,lenght;
	cout << "enter lenght:";
	cin >> lenght;
	cout << "enter a number: ";
	cin >> num;
	for(int i=1; i<=lenght; i++){
		cout << num << " * " << i << " = " << i*num << endl;
}
	return 0;
}
