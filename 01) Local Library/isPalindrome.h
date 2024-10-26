#pragma once
#include <iostream>

using namespace std;

namespace MyLib2
{
	bool isPalindrome(int Num)
	{
		int Temp, Digit, Rev = 0;
		Temp = Num;

		while(Num)
		{
			Digit = Num % 10;
			Rev = Rev * 10 + Digit;
			Num /= 10;
		}

		if (Rev == Temp)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}
}