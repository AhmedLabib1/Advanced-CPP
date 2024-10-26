#include <iostream>
#include <vector>

using namespace std;

int main ()
{
//! how to print 1D array using Ranged loop
	int arr1[5];

	// [i] from datatype (int) because the array [arr] from the datatype (int)
	for (int &i : arr1) cin >> i;
	for (int i : arr1) cout << i;

//! how to print 2D array using Ranged loop
    int arr2[3][3];

    for (auto &row : arr2) //* Iterate over each row 
    {
        for (auto col : row) //* Iterate over each element in the row
        {
            cout << col << " "; //* Print the element
        }
        cout << endl; //* Print newline after each row
    }

//! how to print vector using Ranged loop
	vector<float>v1(5);

	// [i] from datatype (float) because the vector [v1] from the datatype (float)
	for (float &i : v1) cin >> i;
	for (float i : v1) cout << i;
}