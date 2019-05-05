#include <iostream>
#include <conio.h>
#include <list>

using namespace std;

int main()
{
	int a;
	int x = b;
	int b =0;

	do
	{
		cout << "Enter a number: "; cin >> a;
		if(a <= 0)
		{
			cout << "Thank you.";
			break;
		}
		
		for (int i=0; i<=a; i++)
		{
			x +=i;
		}
		cout << "The sum of whole numbers from 1 to " << a << " is " << x << endl;
		x = 0;
	}
	
	while(a!=0);
	
	getch();
	return 0;
}
