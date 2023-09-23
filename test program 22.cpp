#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout << "enter three number:";
	cin >> x >> y >> z;
	if(x>y&&x>z){
	    cout << "maximum number is x:" << x;
	}else if(y>x&&y>z){
	    cout << "maximun number is y:" << y;
	}else{cout << "maximum number is z:" << z;
	}
	return 0;
}
