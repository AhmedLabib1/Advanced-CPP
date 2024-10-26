#include <iostream>

using namespace std;

void printNumbers (int Num1, int Num2)
{
	if (Num1 <= Num2)
	{
		cout << Num1 << endl;
		printNumbers(Num1 + 1, Num2);	// Recursive call - Recursion
	}
	
}

int MyPower (int Base, int Power)
{
	if (Power == 0)
	{
		return 1;
	}

	else 
	{
		return (Base * MyPower(Base, Power - 1));
	}
}

int Factorial (int Num)
{
	if (Num == 1 || Num == 0)
	{
		return 1;
	}
	else 
	{
		return Num * Factorial(Num - 1) ;
	}
}

int main ()
{
	int Num1, Num2;
	cin >> Num1 >> Num2;

	printNumbers(Num1, Num2);
	cout << "____________________" << endl;

	cout << MyPower(Num1, Num2) << endl;
	cout << "____________________" << endl;
	
	cout << Factorial(Num1);
	cout << "____________________" << endl;

	return 0;
}

/*
					   **** call stack ****

	Active Frame ==> main						PUSH
	next Active Frame ==> printNumbers (1, 4)	PUSH	Print 1
	next Active Frame ==> printNumbers (2, 4)	PUSH	Print 2
	next Active Frame ==> printNumbers (3, 4)   PUSH	Print 3
	next Active Frame ==> printNumbers (4, 4)   PUSH	Print 4
	next Active Frame ==> printNumbers (5, 4)   PUSH	Will Not Print 5
	next Active Frame ==> printNumbers (4, 4)   POP		Will Not Print 4
	next Active Frame ==> printNumbers (3, 4)   POP		Will Not Print 3
	next Active Frame ==> printNumbers (2, 4)   POP		Will Not Print 2
	next Active Frame ==> printNumbers (1, 4)   POP		Will Not Print 1
	next Active Frame ==> main					POP		return 0

	Call To	  ==>  يعني هو بيتنادي فين
	Call From ==>  يعني هو بينادي اية جواة
*/