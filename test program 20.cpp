#include <iostream>
using namespace std;

int main()
{
	int tempreture;
	cout << "enter tempreture:";
	cin >> tempreture;
	if(tempreture>35){
		cout << "hot day";
	}else if (tempreture>=25){
		cout << "pleasent day";
	}else{cout << "cool day";
	}
	return 0;
   
}
