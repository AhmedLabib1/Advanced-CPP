#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/* 
	The rand() function is part of the standard library <cstdlib>
    and is used to generate pseudo-random numbers
*/

int main ()
{
	cout << "Max Number rand function can Generate: " << RAND_MAX << endl;
	
	cout << "---------------------------------------------" << endl;
	// Print Random Numbers From 0 To 32767
	cout << "(0) ==> (32767)" << endl;
	for (int i = 1; i < 10; i++)
	{
		cout << rand() << endl;
	}

	cout << "---------------------------------------------" << endl;

	// But how to print Random Numbers From 0 To 10 for examble?
	cout << "(0) ==> (10)" << endl;
	for (int i = 1; i < 10; i++)
	{
		cout << rand() % 10 + 1 << endl;
	}

	cout << "---------------------------------------------" << endl;
	
	/* 
		How to print Random Numbers From 20 To 50 for examble?
		Ther are an equation to do that.
		20 ==> small number(s)
		50 ==> large number(l)
		equation is: rand() % (l - s + 1) + s 
	*/

	cout << "(20) ==> (50)" << endl;

	for (int i = 1; i < 10; i++)
	{
		cout << rand() % (50 - 20 + 1) + 20 << endl;
	}
	
	cout << "---------------------------------------------" << endl;

	/* 
		Before using rand(), you typically need to seed the random number
		generator using srand() to ensure different sequences of random 
		numbers each time your program runs. 
		This is done by calling srand() with a seed value. 
		A common approach is to use the current time as the seed
	*/

	srand(time(NULL)); // NULL - nullptr - 0 ==> all is correct

	cout << "(1) ==> (3)" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << rand() % (3 - 1 + 1) + 1 << endl;
	}
}