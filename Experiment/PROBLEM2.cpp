
#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	float unpaid, total;
    int gallons;
	const int charge = 20;	

	
	cout << "Amount of Unpaid Balance: \n";
	cin >> unpaid;
	cout << "How many gallons of water were you able to consume from the recent and last month?:\n"; 
	cin >> gallons;
	
		if (unpaid <= 0)
	{
	total = (35 + (gallons*1.10));
		cout << "Total Water Bill:" << total; 
	}
	    else 
		{
			total = (35 + (gallons*1.10) + unpaid + charge);
		cout << "Total Water Bill:" << total; 
		 } 
	getch ();
	return 0;
}
