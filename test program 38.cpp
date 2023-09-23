#include <iostream>
using namespace std;

int main()
{
	int product = 1;
	for(int i=1; i<=10; i=i+2){
		product*=i;
		cout << "old number is:" << i << "   "<< "product is:" << product << endl; 
	}
	return 0;
}
