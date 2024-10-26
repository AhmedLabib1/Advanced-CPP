#include <iostream>
#include <ios> // For showpoint, fixed, scientific (implicitly included in iostream)
#include <iomanip> // For additional manipulators like setw, setfill and setprecision

using namespace std;

/*
	ios library
	===========
	showpoint, fixed, and scientific are manipulators that control the formatting
	of floating-point numbers when output to a stream. Each serves a different
	purpose and can be used in conjunction with each other to achieve specific
	formatting results

	1) Showpoint (4 zeros or digit if exsist)
		=========
		Purpose: Forces the output of the decimal point and trailing zeros for 
		        floating-point numbers, even if the fractional part is zero.
		Effect : Ensures that the output always includes a decimal point.
		
	2) Fixed
		=====
		Purpose: Sets the floating-point number output format to fixed-point notation.
		        The number of digits after the decimal point is controlled by setprecision.
		Effect : The output is displayed in fixed-point notation (no exponent).

	3) Scientific
		==========
		Purpose: Sets the floating-point number output format to scientific notation.
		        The number of digits after the decimal point is controlled by setprecision.
		Effect : The output is displayed in scientific notation (with an exponent).
*/

/*
	iomanip library
	===============
	The <iomanip> library in C++ is part of the Standard Library
	and provides facilities for manipulating input and output
	streams. The name stands for "input-output manipulators."

	I/P Stream ==> A Sequence of Characters from an input device to the computer
	O/P Stream ==> A Sequence of Characters from the computer to an output device

	Common Manipulators
	===================
	1) std::setw(int width): Sets the width of the next input/output field.
	2) std::setfill(char fill): Sets the fill character used for padding.
	4) std::left, std::right, std::internal: Control the alignment of the output.
	3) std::setprecision(int n): Sets the precision for floating-point output.
*/

int main()
{
	float f_Num1 = 15.524695476;
	float f_Num2 = 10.3;
	float f_Num3 = 123456.456789;
	float f_Num4 = .000000123456;

	cout << showpoint << f_Num1 << endl;
	cout << showpoint << f_Num2 << endl;

	cout << "---------------------------" << endl;
	
	cout << fixed << setprecision(5) << f_Num1 << endl;
	cout << fixed << setprecision(5) << f_Num2 << endl;

	cout << "---------------------------" << endl;
	
	cout << scientific << f_Num1 << endl;
	cout << scientific << f_Num3 << endl;
	cout << scientific << f_Num4 << endl;

	cout << "---------------------------" << endl;

	cout << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << endl;
	cout << "|" << setw(7) << setfill(' ') << left << "Length" << "|" << setw(7) << "Width" << "|" << setw(7) << "Area" << "|" << endl;
	cout << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << endl;
	cout << "|" << setw(7) << setfill(' ') <<  10 << "|" << setw(7) << 5 << "|" << setw(7) << 50 << "|" << endl;
	cout << right << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << setw(8) << setfill('-') << "+" << endl;

	cout << fixed << setprecision(3) << f_Num1 << endl;
	cout << fixed << setprecision(6) << f_Num1 << endl;
	cout << fixed << setprecision(9) << f_Num1 << endl;
}