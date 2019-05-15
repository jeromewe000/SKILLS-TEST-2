#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	float a,b,c;
	cout << "Please input three DIFFERENT numbers\n";
	cout << "Please input the first number: ";
	cin >> a;
	cout << "Please input the second number: ";
	cin >> b;
	cout << "Please input the third number: ";
	cin >> c;

	if (a >b && a>c)
		cout << "The largest number of the THREE is: " << a;
	else if (b > a&& b>c)
		cout << "The largest number of the THREE is: " << b;
	else if (c > a&& c>b)
		cout << "The largest number of the THREE is: " << c;

	else 
		cout << "INVALID INPUT";

	getch();
	return 0; 
}
