#include <iostream>
using namespace std;

int main()
{
	float r;
	cout << "the value of r= ";
	cin >> r;
	const int pi= 3.14;
	cout << "Area of a cube= " << 4*3.14*r*r << endl;
	cout << "circumference of a cube= " << 4.0/3.0*3.14*r*r*r;
	return 0;
}
