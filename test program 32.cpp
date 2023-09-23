#include <iostream>
using namespace std;

int main ()
{
	int a=1, n, sum=0;
	cout << "enter the value of n:";
	cin >> n;
	do{
		sum = sum + a;
		a=a+1;
	}while(a<=n);
	cout << "sum is:" << sum;
	return 0;
}
