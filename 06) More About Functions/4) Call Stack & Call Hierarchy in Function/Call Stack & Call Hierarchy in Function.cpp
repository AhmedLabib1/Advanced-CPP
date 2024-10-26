#include<iostream>

using namespace std;

void Function4()
{
	cout << "Hi I'm function4";
}

void Function3()
{
	Function4();
}

void Function2()
{
	Function3();
}

void Function1()
{
	Function2();
}

int main()
{
	Function1();
}

/*
Explanation:
============

1) main() .... calls Function1().
2) Function1() calls Function2().
3) Function2() calls Function3().
4) Function3() calls Function4().
5) Function4() prints "Hi I'm function4" to the console.

*/