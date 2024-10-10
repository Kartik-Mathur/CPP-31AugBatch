#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
	// Bubble sort algo
	for (int i = 0; i < n - 1; ++i)
	{
		int swappingCount = 0;
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j] > a[j + 1]) {
				swappingCount++;
				swap(a[j], a[j + 1]);
			}
		}

		if (swappingCount == 0) {
			break;
		}
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

	int a[] = {5, 4, 3, 2, 1};
	int n = sizeof(a) / sizeof(int);

	bubbleSort(a, n);

	// Print the sorted array
	printArray(a, n);


	return 0;
}
















