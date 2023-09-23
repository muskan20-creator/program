#include <iostream>
using namespace std;

int main()
{
	float c,r;
	c=2.0;
	r=1;
	while(c<=100)
	{
		r=r+1.0/c;
		c=c+2;
	}
	cout << "result is:" << r << endl;
	return 0;
}
