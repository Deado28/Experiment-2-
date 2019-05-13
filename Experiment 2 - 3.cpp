#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;
	float a, V;
	const float z = 2.5;

	cout << "Enter Value of x: \n";
	cin >> x;
	cout << "Enter Value of y \n";
	cin >> y; 

	switch (x)
	{ 
	case 1:
		if (x == 1 && 1 < y < 5)
		V = x * y * z;
		else if (y >= 5)
		V = x + (y / z);
		else
		V = x + y + z;
		
	case 2: 
		if (y <= 5)
		{
			V = (x - y) / z;
		float a = abs(V);
			V = a;
		}
		else if (y > 5)
		{ 
			V = x - (sqrt( y + z));
		}
		else 
		V = x + y + z;
		break;
	}
	cout << "V = " << setw(10) << fixed << setprecision(2) << V;

	_getch();
	return 0;
}