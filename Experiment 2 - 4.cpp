#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int a;
	
		for (a = 1; a <=10; a++)
		{
		  cout<<a<<",";
		}
		
		for (a = 11; a <=30; a++)
		{
			a += 1;
			cout << a << ", ";
		}
	_getch();
	return 0;
	
}