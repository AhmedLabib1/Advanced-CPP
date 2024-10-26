#include <iostream>
#include "Sum_Two_Numbers.h";
#include "isPalindrome.h";

using namespace std;
using namespace MyLib1;
using namespace MyLib2;

int main ()
{
	int Num1, Num2;
	cout << "Enter two Numbers to get their sum" << endl;
	cin >> Num1 >> Num2;
	cout << sumTwoNumbers(Num1, Num2) << endl;

	int Num;
	cout << "Enter Num to check if it Palindrome or not" << endl;
	cin >> Num;
	
    if (isPalindrome(Num) == 1) cout << "Palindrome" << endl ;
    if (isPalindrome(Num) == 0) cout << "Not Palindrome" << endl ;
}