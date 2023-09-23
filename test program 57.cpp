#include <iostream>
using namespace std;

int main()
{
	int row=5;
	for(int i=1; i<=row; i++){
		for(int k=1; k<i; k++){
			cout << " ";
		}
		for(int j=row; j>=i; j--){
		cout << "*";
	 }
	    cout << endl;
	}
	  return 0;
}
