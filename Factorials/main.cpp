/*This program will allow the user to find the factorial to a number.*/

#include <iostream>
using namespace std;

// This is called a 'type alias'. Now you can change the bounds of the function easily
// just by changing this
// using NumberType = int;

// for example, to a type that can hold much larger numbers
// on my machine (2012 Macbook Pro), this stops working at 65
using NumberType = unsigned long long int;

// To go even further, you'll need to use a custom number type:
// http://stackoverflow.com/a/15400100/2958070
// or a special algorithm:
// http://stackoverflow.com/a/36898176/2958070


// Look into the header <limits> to get the largest number holdable in each type
// (there's good stuff in the example on this page)
// http://en.cppreference.com/w/cpp/types/numeric_limits


NumberType factorial(NumberType a);

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	cout << number << "! = " << factorial(number) << endl;

	system("PAUSE");
	return 0;
}

NumberType factorial(NumberType a)
{
	NumberType b = 1;
	NumberType c = a;
	NumberType fact;

	for (a = a - 1; a > 0; a--)
	{
		b = b * a;
	}

	fact = b * c;
	return fact;
}
