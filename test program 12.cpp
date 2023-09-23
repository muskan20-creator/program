#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cout << "formula for area of the triangle=[s(s-a)(s-b)(s-c)]^1/2";
	cin >>a>>b>>c;
	float s= a+b+c/2;
	cout << s << endl;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << area;
	return 0;
}
