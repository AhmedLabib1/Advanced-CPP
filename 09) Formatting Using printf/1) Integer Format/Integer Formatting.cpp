#include <iostream>
using namespace std;

int main() {
    int Page = 1, totalPages = 10;

    printf("The page number = %d \n", Page);
    printf("You are in page %d of %d \n", Page, totalPages);
    cout << "---------------------------" << endl;

    // Width Specification
    printf("The page number = %0*d \n", 2, Page);
    printf("The page number = %0*d \n", 3, Page);
    printf("The page number = %0*d \n", 4, Page);

    int Num1 = 20, Num2 = 30;
    printf("The result of %d + %d = %d \n", Num1, Num2, Num1 + Num2);

    // Convert Chars to ASCII Code
    printf("%d - %d \n", 'A', 'Z');
    printf("%d - %d \n", 'a', 'z');
    printf("%d - %d \n", '0', '9');

    return 0;
}