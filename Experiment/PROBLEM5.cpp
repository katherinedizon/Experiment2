#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, b, c;
	
	cout << "The Fibonacci Sequence \n";
	
	for (int i=0; i<=20; i++)
	
		if (i==0)
	{
		cout << a << ", " << b << ", ";
	}
	else 
	{ 
	c = a + b;
	a = b;
	b = c;
	cout << c << ", ";
	}
	getch ();
	return 0;
}

