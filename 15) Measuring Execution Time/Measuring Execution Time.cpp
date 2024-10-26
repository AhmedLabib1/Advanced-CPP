#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t start = time(NULL);

	for (int i = 1; i < 100000; i++)
	{
		cout << i << endl;
	}

	time_t end = time(NULL);

	double elapsed = difftime(end, start);

	cout << "Time taken for loop " << elapsed << " seconds." << endl;

	return 0;
}