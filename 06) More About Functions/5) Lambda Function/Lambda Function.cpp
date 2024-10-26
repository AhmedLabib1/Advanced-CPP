#include <iostream>

using namespace std;

/*
	a lambda function (or lambda expression) is a way to define an anonymous (unnamed) function
	within the code, especially for short operations or when passing functions as arguments.
	They were introduced in C++11 and have become popular for their conciseness and flexibility.

	Basic Syntax of Lambda Functions:
	=================================
	[capture_clause] (parameters) -> return_type {
    	function body
	};

	There are different ways to capture variables:
	[]      : Capture nothing from the surrounding scope.
	[=]     : Capture all variables by value (makes copies).
	[&]     : Capture all variables by reference (can modify the original variables).
	[x]     : Capture only x by value.
	[&x]    : Capture only x by reference.
	[=, &x] : Capture all variables by value except x, which is captured by reference.
	[&, x]  : Capture all variables by reference except x, which is captured by value.
*/

int main ()
{
	int a = 10;
	int b = 20;

	// Capture all variables by value
	auto sum = [=]()-> int{
		return a + b;
	};
	
	// Capture all variables by reference
	auto increment = [&](){
		a++;
		b++;
	};

	cout << sum() << endl;

	increment();
	cout << "a: " << a << "\n" << "b: " << b << endl;

// ----------------------------------------------------------------

	auto print = [](auto x){ cout << x << endl; };

	print(5);
}