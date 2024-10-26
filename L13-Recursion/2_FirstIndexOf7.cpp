#include <iostream>
using namespace std;

int solve(int *a, int n) {
	// base case
	if (n == 0) return -1;

	// recursive case
	if (a[0] == 7) return 0;

	int indx = solve(a + 1, n - 1);
	return (indx == -1) ? -1 : indx + 1;
}

int main() {

	int a[] = {1, 2, 3, 7, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n) << endl;

	return 0;
}
















