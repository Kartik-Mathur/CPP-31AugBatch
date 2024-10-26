#include <iostream>
using namespace std;
/*
bool solve(int *a, int n) {
	// base case
	if (n == 0) return false;

	// recursive case
	// 0th index par 7 nahi hota agar
	if (a[0] == 7) return true;
	// n-1 wale array mei 7 present hai toh 7 hoga, else nahi hoga
	bool kya7Milla = solve(a + 1, n - 1);
	return (kya7Milla == false) ? false : true;
}
*/
/*
bool solve(int *a, int n) {
	// base case
	if (n == 0) return false;

	// recursive case
	if (a[0] == 7) return true;
	return solve(a + 1, n - 1);
}
*/
/*
bool solve(int *a, int n) {
	// base case
	if (n == 0) return false;

	// recursive case
	return (a[0] == 7) ? true : solve(a + 1, n - 1);
}
*/

bool solve(int *a, int n) {
	return (n == 0) ? false : (a[0] == 7) ? true : solve(a + 1, n - 1);
}


int main() {

	int a[] = {1, 2, 3, 7, 4, 5};
	int n = sizeof(a) / sizeof(int);

	cout << solve(a, n) << endl;

	return 0;
}
















