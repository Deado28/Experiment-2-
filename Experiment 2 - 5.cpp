#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int a, b, x = 0, y = 1;

	cout << "Fibonacci Numbers: \n";
	for (a = 0; a<= 21; a++)
	{
		if (a <= 1)
			b = a;
		else
		{
			b = x + y;
			x = y;
			y = b;
		}
		cout << b << ", ";
	}
_getch();
return 0;
}