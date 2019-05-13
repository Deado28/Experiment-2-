#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int a, b, c = 0;

	do
	{ 
		cout << "Enter a number: ";
		cin >> a;

		if (a <= 0)
			cout << "Thank you!";
		else
		{
			for (b = 1; b <= a; b++)
			{
				c += b;
			}
			cout << "The Sum of All Whole Numbers From 1 to " << a << " is "<< c << "\n";
			c = 0;
		}
	}
	while (a != 0);

	return 0;
}

