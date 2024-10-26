#include<iostream>

using namespace std;

int main ()
{
	int a = 5;    //! Binary: 0101
	int b = 3;    //! Binary: 0011
	int Bitwise_And_Operator = a &  b;   //! Binary result: 0001 (Decimal: 1)
	int Logical_And_Operator = a && b;   //! 5 (true) && 3 (true) = true (1)

	cout << Bitwise_And_Operator << endl;
	cout << Logical_And_Operator << endl;

	int x = 0;    //! Binary: 0000
	int y = 1;    //! Binary: 0001
	int Bitwise_Or_Operator = x |  y;  //! Binary result: 0001 (Decimal: 1)
	int Logical_Or_Operator = x || y;  //! 5 (flase) || 3 (true) = true (1)

	cout << Bitwise_Or_Operator << endl;
	cout << Logical_Or_Operator << endl;
}