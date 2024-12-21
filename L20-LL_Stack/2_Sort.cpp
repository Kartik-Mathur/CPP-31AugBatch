#include <iostream>
#include <algorithm>
using namespace std;

bool meraFunction(int a, int b) {
	cout << "Comparing " << b << ", " << a << endl;
	return a < b;
}


void insertionSort(int *a, int n) {
	int j;
	for (int i = 1; i < n; ++i)
	{
		int t = a[i];
		for (j = i - 1; j >= 0 and meraFunction(a[j], t); --j)
		{
			cout << "Comparing  " << a[j] << ", " << t << endl;
			a[j + 1] = a[j];
		}

		a[j + 1] = t;
	}
}


int main() {

	int a[] = {5, 1, 3, 0, 2};
	int n = sizeof(a) / sizeof(int);

	// insertionSort(a, n);
	// sort(startingAddress, endingAddress+1, functionName(user ko create karna h));
	sort(a, a + n, meraFunction);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}

	cout << endl;



	return 0;
}
















