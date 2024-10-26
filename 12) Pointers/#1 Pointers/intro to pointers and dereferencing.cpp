#include <iostream>

using namespace std;

// intro to pointers and dereferencing

int main()
{
	int a = 10;

	cout << "value of (a)   :" << a  << endl;     // a   ==> value of a
	cout << "address of (a) :" << &a << endl;	// &a  ==> address of a 
	
	cout << "_______________________________" << endl;

	int* ptr;
	ptr = &a; // pointer is variable memorize (refrences - address) only
			  	
	cout << "value of (ptr): " << ptr  << endl;   // ptr  ==> value of ptr which memorize address of a
	cout << "address of (ptr): " << &ptr << endl;   // &ptr ==> address of ptr
	cout << "value of (a) via (ptr): " << *ptr << endl;   // *ptr ==> value of a

	// address of a = value of ptr   (in other words) &a = ptr
	// value of a = asterisk of ptr  (in other words) a  = *ptr

	cout << "_______________________________" << endl;

	*ptr = 20; // dereferencing

	cout << "value of (a) :" << a << endl;
	cout << "value of (a) :" << *ptr << endl;

	cout << "_______________________________" << endl;

	*ptr = 30; // dereferencing

	cout << "value of (a) :" << a << endl;
	cout << "value of (a) :" << *ptr << endl;
}