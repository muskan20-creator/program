#include <iostream>
using namespace std;

int main ()
{
	int row=6;
	for(int i=0; i<row; i++){
		for(int j=0; j<=i; j++){
			cout <<j;
		}
		cout << endl;
	}
	return 0;
}
