/*This program will allow the user to find the factorial to a number.*/

#include <iostream>
using namespace std;

int factorial(int a);

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	cout << number << "! = " << factorial(number) << endl;

	system("PAUSE");
	return 0;
}

int factorial(int a)
{
	int b = 1;
	int c = a;
	int fact;

	for (a = a - 1; a > 0; a--)
	{
		b = b * a;
	}

	fact = b * c;
	return fact;
}