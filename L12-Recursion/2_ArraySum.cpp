#include <iostream>
using namespace std;

int sumArray(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}

	// recursive case
	return a[0] + sumArray(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << sumArray(a, n) << endl;

	return 0;
}
















