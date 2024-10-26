#include <iostream>

using namespace std;

void demonstrateVariables()
{
	static int staticVar = 0;  // Static variable
	auto autovar = 3.14;       // automatic variable

	// Increment Both Variables
	staticVar++;
	autovar++;

	// Output their values
	cout << "value of staticVar is: " << staticVar << endl;
	cout << "value of autovar is: " << autovar << endl;

}

int main()
{
	cout << "First function call:" << endl;
	demonstrateVariables();

	cout << "\nSecond function call:" << endl;
	demonstrateVariables();

	cout << "\nThird function call:" << endl;
	demonstrateVariables();
}

/*

Automatic Variable (autovar):
=============================
Each time the demonstrateVariables() function is called, the automaticVar is reinitialized to 0.
It lives only for the duration of the function call, and its value doesn’t persist across calls.

Static Variable (staticVar):
============================
The staticVar is initialized only once when the function is called for the first time.
Even though the function ends, the static variable retains its value,
and its incremented value persists across subsequent function calls.

*/