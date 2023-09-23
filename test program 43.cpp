#include <iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cout << "enter a positive integer:";
	cin >> n;
	for(int i=1; i<=n; i++){
		sum+=i*i;
		cout << "sum of square from 1 to " << n <<":"<< sum << endl;
	}
	return 0;
}
