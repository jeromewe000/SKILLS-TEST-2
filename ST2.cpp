#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int a,b;
	cout << "Please enter a number: ";
	cin >> a;
	cout << "Multiplication table of " << a << endl;

   for (b=1;b<=10;b++)
	 {
		 cout << b << " * " << a << "= " << a*b << "\n";
   }

		
	getch();
	return 0;
}

