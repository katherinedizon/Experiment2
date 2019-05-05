#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()

{
	string Package; 
	int hours, total;
	
	cout << "Package A: P995/mo \n" ;
	cout << "Package B: P1495/mo \n";
	cout << "Package C: P1995/mo \n";
	cout << "Please enter the package are you currently subscribed to (A, B, or C): \n";
	cin >> Package;
	
	cout << "How many hours were you able to use? \n";
	cin >> hours;
	
	if ((Package == "A") || (Package == "B") || (Package == "C")) 
	
	
	if (Package == "A")
	
	if (hours <= 10) 
	{ cout << "Total Amount Due: P995.00";
}
	else if (hours > 10);
	{
	total = 995 + (hours - 10)*(20);
	cout << "Total Amount Due:" << total;
    }

	if (Package == "B")
	if (hours <=20) 
	{
	cout << "Total Amount Due: P1495.00";
}
	else if (hours > 20)
	{

	total = 995 + (hours - 20)*(10);
	cout << "Total Amount Due:" << total;
}

	if (Package == "C")
	if (hours >= 1)
{ cout << "Total Amount Due: P1995.00";
}
	getch ();
	return 0;
}
