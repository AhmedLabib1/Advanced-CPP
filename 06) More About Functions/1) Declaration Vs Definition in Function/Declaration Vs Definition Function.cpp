#include<iostream>

using namespace std;

//Function Declaration 
void add(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	add(a, b);
}

//Function Definition
void add(int a , int b)
{
	cout << (a + b);
}
