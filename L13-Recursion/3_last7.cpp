#include <iostream>
using namespace std;

int solve(int *a, int i) {
	// base case
	if (i == -1) return -1;

	// recursive case
	if (a[i] == 7) return i;
	return solve(a, i - 1);
}

int main() {

	int a[] = {7, 7, 1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n - 1) << endl;

	return 0;
}
















