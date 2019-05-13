#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int Gallons, Balance;
	
	cout << "Water Bill \n";
	cout << "Gallons Used: ";
	cin >> Gallons;
	cout << "Unpaid Balance: ";
	cin >> Balance;

	cout << "Consumption Charge: " << Gallons * 1.10 <<endl; 
	cout << "Water Demand charge: 35Php \n";

	cout << " " << endl;

	 if (Balance > 0)
	 cout << "Water Bill: " << (Gallons * 35) + (1.10 * Gallons) + 20 + Balance;
	 else 
	 cout << "Water Bill: " << (Gallons * 35) + (1.10 * Gallons) + Balance;

_getch ();
return 0;
}