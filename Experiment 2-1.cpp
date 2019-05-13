#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int Hours, Fee;
	char Package;

	const int PackageA = 995;
	const int PackageB = 1495;
	const int PackageC = 1995;
	
	cout << "Please choose the package deal that you have availed \n";
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr \n";
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr \n";
	cout << "Package C: For P1995/mo of unlimited access is provided \n";
	cin >> Package; 

	switch(Package)
	{ 
		case 'A':
		case 'a':
			cout << "Input the number of hours used: \n"; 
			cin >> Hours;
			if (Hours <= 10)
			{
				cout << "Total Bill: \n";
				cout << "995Php \n";
				break;
			}
			else (Hours > 10 );
			{
				cout << "Total Bill: \n";
				Fee = PackageA + ((Hours-10)*20);
				cout << Fee << "Php";
				_getch();
				return 0; 
			}
			 break;
		case 'B':
		case 'b':
			cout << "Input the number of hours used: \n"; 
			cin >> Hours;
			if (Hours <= 20)
			{
				cout << "Total Bill: \n";
				cout << "1495Php \n";
				break;
			}
			else (Hours > 20 );
			{
				cout << "Total Bill: \n";
				Fee = PackageB + ((Hours-20)*10);
				cout << Fee << "Php";
				_getch();
				return 0; 
			}
			break; 
		
		case 'C':
		case 'c':
			cout << "Input the number of hours used: ";
			cin >> Hours;
			cout << "1995Php";
			break; 

		default: 
			cout << "Invalid Input ";
			break;
	}
_getch();
return 0;

}


