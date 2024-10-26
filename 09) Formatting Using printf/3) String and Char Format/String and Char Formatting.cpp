#include <iostream>

using namespace std;

int main ()
{
	char Name[] = "A7med Labib";
	char schoolName[] = "Programming Advices";

	printf("Dear %s, How are you? \n", Name);
	printf("Welcome to %s school \n", schoolName);

	char s = 'a';

	printf("Setting the width of c: %*c \n", 1, s);
	printf("Setting the width of c: %*c \n", 2, s);
	printf("Setting the width of c: %*c \n", 3, s);
	printf("Setting the width of c: %*c \n", 4, s);
	printf("Setting the width of c: %*c \n", 5, s);

	// Convert Ascii Digits to Chars
	printf("%c - %c \n", 65, 90);
	printf("%c - %c \n", 97, 122);
	printf("%c - %c \n", 48, 57);
}