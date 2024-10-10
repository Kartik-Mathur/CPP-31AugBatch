#include <iostream>
using namespace std;

void mergeSortedArrays(int a[], int m,
                       int b[], int n) {

	int i = m - 1, j = n - 1,
	    k = m + n - 1;

	while (i >= 0 and j >= 0) {
		if (a[i] < b[j]) {
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k] = a[i];
			k--;
			i--;
		}
	}

	// Agar loop se bahar aakar j wale elements bach gaye toh unhe array a[] mei daaldo
	while (j >= 0) {
		a[k] = b[j];
		k--;
		j--;
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[10000] = {3, 5, 6, 7, 8};
	int m = 5;

	int b[] = {1, 2, 9};
	int n = sizeof(b) / sizeof(int);

	mergeSortedArrays(a, m, b, n);

	printArray(a, m + n);

	return 0;
}
















