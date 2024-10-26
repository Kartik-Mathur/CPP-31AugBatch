#include <iostream>
using namespace std;

int solve(int x, int n) {
	// base case
	if (n == 0) return 1;

	// recursive case
	return x * solve(x, n - 1);
}

int main() {

	cout << solve(2, 5) << endl;


	return 0;
}
















