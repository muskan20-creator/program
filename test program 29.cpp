#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int number;
	cout << "enter a number:";
	cin >> number;
	while(i<=10)
	{
		cout << i*number << endl;
		i++; 
	}
	return 0;
}
