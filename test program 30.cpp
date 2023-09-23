#include <iostream>
using namespace std;

int main ()
{
	int num, i, factorial;
	i = 1;
	factorial = 1;
	cout << "enter a number:";
	cin >> num;
	while(i<=num)
	{
		factorial = factorial * i;
		i++;
	}
	cout << "factorial is:" << factorial << endl;
	return 0;
}
