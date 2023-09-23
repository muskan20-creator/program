#include <iostream>
using namespace std;

int main()
{
	int sum =0;
	int x=2;
	for(int i=1; i<5; i++){
		sum+=i*x;
		x*=(i+1);
	}
	cout << "sum of series is: " << sum << endl;
	return 0;
}
