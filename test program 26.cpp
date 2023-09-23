#include <iostream>
using namespace std;
int main() 
{
	int i = 1,sum = 0;
	while(i<=5)
	{
		cout << i << endl;
		sum+=i;
		i++;
	}
	cout << "sum is : " << sum << endl;
	return 0;
	
}
