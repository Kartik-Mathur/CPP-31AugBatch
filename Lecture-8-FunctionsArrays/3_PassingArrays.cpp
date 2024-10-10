#include <iostream>
using namespace std;

void updateArray(int arr[5], int n) {
	// Arrays are always passed as reference
	for (int i = 0; i < n; ++i)
	{
		arr[i] = arr[i] + 1;
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

	int a[5] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	updateArray(a, n);
	printArray(a, n);


	return 0;
}
















