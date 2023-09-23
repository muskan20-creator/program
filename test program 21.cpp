#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "enter the value of a ";
	cin >> a; 
	cout << "enter the value of b ";
	cin >> b;
	cout << "enter the value of c ";
	cin >> c;
	if(a<b&&a<c){
		cout << "smallest number is a:" << a;
	}else if(b<a&&b<c){
		cout << "smallest number is b:" << b;
	}else {cout << "smallest number is c:" << c;
	}
	return 0;
}
