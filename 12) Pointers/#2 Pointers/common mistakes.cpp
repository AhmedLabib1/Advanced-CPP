#include <iostream>

using namespace std;

// common mistakes

int main()
{
	int x, * p;

// mistake 1____________________________

	// Wrong! 
	// p is pointer store addresses only but x is value not address
	//! p = x;  ==> This will raise error

	// Correct!
	// p store addresses and &x is address
	p = &x;

// mistake 2___________________________

	// Wrong!
	// &x is an address
	// *p is the value stored in x
	//! *p = &x;  ==> This will raise error

	// Correct! 
	// *p is value and so x
	*p = x;
}