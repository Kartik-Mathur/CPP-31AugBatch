#include <iostream>
using namespace std;

int main() {

	int a[] = {5, 4, 0, 2, 1}, j;
	int n = sizeof(a) / sizeof(int);

	for (int i = 1; i < n; ++i)
	{
		int t = a[i];
		for (j = i - 1; j >= 0 and a[j] > t; --j)
		{
			a[j + 1] = a[j];
		}

		a[j + 1] = t;
	}


	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	return 0;
}

















