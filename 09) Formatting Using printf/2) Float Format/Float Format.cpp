#include <iostream>

using namespace std;

int main ()
{
	float PI = 3.14159265;

	printf("Precision Specification of %.*f \n", 1, PI);
	printf("Precision Specification of %.*f \n", 3, PI);
	printf("Precision Specification of %.*f \n", 5, PI);
	printf("Precision Specification of %.*f \n", 8, PI);

	float x = 7, y = 8;

	printf("The float division is: %.3f / %.3f = %.3f \n", x, y, x/y);

	double z = 12.65;

	printf("The double value is: %.3f \n", z);
	printf("The double value is: %.4f \n", z);

}