#include <iostream>
using namespace std;

void merge(int *a, int *b, int *c,
           int s, int e) {
	int mid = (s + e) / 2;
	int i = s, j = mid + 1, k = s;
	while (i <= mid and j <= e) {
		if (b[i] < c[j]) {
			a[k] = b[i];
			k++;
			i++;
		}
		else {
			a[k] = c[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		a[k++] = b[i++];
	}

	while (j <= e) {
		a[k++] = c[j++];
	}
}

void mergeSort(int *a, int s, int e) {
	// base case
	if (s >= e) {
		return;
	}

	// recursive case
	// 1. Divide
	int mid = (s + e) / 2;
	int b[1000], c[1000];
	for (int i = s; i <= mid; ++i)
	{
		b[i] = a[i];
	}

	for (int i = mid + 1; i <= e; ++i)
	{
		c[i] = a[i];
	}

	// 2. Sort: Assumptions
	mergeSort(b, s, mid);
	mergeSort(c, mid + 1, e);
	// 3. Merge
	merge(a, b, c, s, e);
}

int main() {

	int a[] = {5, 4, 7, 8, 1, 2, 0};
	int n = sizeof(a) / sizeof(int);

	mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















