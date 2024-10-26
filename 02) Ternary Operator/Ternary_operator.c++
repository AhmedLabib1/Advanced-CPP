#include<iostream> 

using namespace std;

int main()
{
	//check if student is Pass or Fail using Normal IF

	int mark1;
	string result1;

	cout << "Enter your degree" << endl;
	cin >> mark1;

	if(mark1 >= 50) result1 = "Pass";
	else            result1 = "Fail";

	cout << result1 << endl;

	//check if student is Pass or Fail using Ternary Operator

	int mark2;

	cout << "Enter your degree" << endl;
	cin >> mark2;

	string result2 = (mark2 >= 50) ? "Pass" : "Fail";
	cout << result2 << endl;

	// check if the number is positive or negative using Ternary Operator

	int num1;

	cout << "Enter number to check if positive or negative" << endl;
	cin >> num1;

	string result3 = (num1 > 0) ? "Positive" : "Negative";
	cout << result3 << endl;

	// check if the number is zero, positive or negative using Nested Ternary Operator

	int num2;

	cout << "Enter number to check if positive or negative or zero" << endl;
	cin >> num2;

	string result4 = (num2 == 0) ? "Zero" : (num2 > 0) ? "Positive" : "Negative";
	cout << result4 << endl;
}