#include <iostream>

using namespace std;
/*
	Pointer Arithmetic
	-------------------
	1) increment a pointer (p + 1)
	2) decrement a pointer (p - 1)
	3) subtracing pointers (p - q)
	4) pointer comparison  (p > q) , (p < q), (p == q), (p != q)
*/
int main ()
{
	int a = 5;
	int b = 10;

	int* ptr1 = &a;
	int* ptr2 = &b;
    
	cout << ptr1 << " " << ptr2 << endl;

	cout << ptr1 << endl;
	cout << ptr1 + 1 << endl;     // increment a pointer
	cout << ptr1 - 1 << endl;     // decrement a pointer
	cout << ptr1 - ptr2 << endl;  // subtracing pointers

	if (ptr1 > ptr2) // pointer comparison
	{
		cout << "yes" << endl;
	}
	else 
	{
		cout << "no" << endl;
	}
}