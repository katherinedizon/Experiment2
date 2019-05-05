#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()

{
	int x; 
	int y;
	const float z= 2.5;
	float v;
	
	cout << setprecision(2) << fixed << showpoint;
	cout << "Enter first number (x):"; cin >> x;
	cout << "Enter second number (y):"; cin >> y;
	
	switch (x)
	{
	case 1: 
		{
		if (y > 1 && y < 5)
		v = (x*y*z);
		
		else if (y >= 5)
		v = (x+ y/z);

		break;
		}
	case 2: 
	{
		if(y <= 5)
		v = (fabs ((x-y)/z));
		
		else if (y > 5)
		v = (x - (sqrt (y+z)));
		
		break;
}
	default: 
	{
		v = (x+y+z);
		break;
	}
}
	cout << "V is equal to" << v;

	getch();
	return 0;
}
