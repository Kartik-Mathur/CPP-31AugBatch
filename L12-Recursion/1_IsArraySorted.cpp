#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	//  base case
	if (n == 0 || n == 1)return true;

	// recursive case
	bool kyaChotaSortedHai = isSorted(a + 1, n - 1); // Pure assumption
	if (a[0] < a[1] and kyaChotaSortedHai) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted2(int *a, int n) {
	//  base case
	if (n == 0 || n == 1)return true;

	// recursive case
	bool kyaChotaSortedHai = isSorted2(a, n - 1);
	if (kyaChotaSortedHai and a[n - 1] > a[n - 2]) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted3(int *a, int n, int i) {
	//  base case
	if (i == n - 1 || i == n)return true;

	// recursive case
	bool kyaChotaSortedHai = isSorted3(a, n, i + 1);
	if (kyaChotaSortedHai and a[i] < a[i + 1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 2, 13, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isSorted3(a, n, 0)) {
		cout << "sorted\n";
	}
	else {
		cout << "Not sorted\n";
	}

	return 0;
}
















