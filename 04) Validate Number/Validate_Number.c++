#include<iostream>

using namespace std;

int ReadNumber ()
{
	int number;
	cout << "Please enter a number" << endl;
	cin >> number;

	while (cin.fail())
	{
		//! cin.clear(): is a method of the cin object that clears any error
		//! flags that may have been set due to previous failed input attempts.
		cin.clear();

		//! This line ignores characters in the input buffer up to the maximum possible number of characters
		//! (std::numeric_limits<std::streamsize>::max()) or until a newline character('\n') is found.
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Invalid number, Enter a valid one" << endl;
		cin >> number;
	}

	return number;
}

int main ()
{
	cout << "Your number is: " << ReadNumber();
}