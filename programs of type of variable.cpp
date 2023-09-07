#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	int marks = 60;
	char name[] = "Muskan Amin";
	int age = 18;
	string subject = "programming fundamental";
	float average = 21.08;
	cout << typeid(marks).name() << endl;
	cout << typeid(name).name() << endl;
	cout << typeid(age).name() << endl;
	cout << typeid(subject).name() << endl; 
	cout << typeid(average).name() <<endl;
	return 0;	
}
