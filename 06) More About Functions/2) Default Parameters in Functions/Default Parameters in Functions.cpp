#include<iostream>

using namespace std;

int Mysum(int a, int b, int c = 0, int d = 0)
{
	return (a + b + c + d);
}

int main()
{
	cout << "sum is: " << Mysum(20, 15) << endl;
	cout << "sum is: " << Mysum(20, 15, 10) << endl;
	cout << "sum is: " << Mysum(20, 15, 10, 5) << endl;
}