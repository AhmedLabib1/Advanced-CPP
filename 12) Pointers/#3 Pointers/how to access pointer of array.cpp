#include <iostream>

using namespace std;

// how to access pointer of array

int main ()
{
	int arr[4] = { 10,20,30,40 };
	
	int* ptr;
	ptr = arr;

	cout << ptr + 0 << endl;    // Output: the address of the first element.
	cout << ptr + 1 << endl;    // Output: the address of the second element.
	cout << ptr + 2 << endl;    // Output: the address of the third element.
	cout << ptr + 3 << endl;    // Output: the address of the fourth element.

	cout << "_______________________________" << endl;

	cout << *(ptr + 0) << endl; // Output: the value of the first element (10).
	cout << *(ptr + 1) << endl; // Output: the value of the second element (20).
	cout << *(ptr + 2) << endl; // Output: the value of the third element (30).
	cout << *(ptr + 3) << endl; // Output: the value of the fourth element (40).

}