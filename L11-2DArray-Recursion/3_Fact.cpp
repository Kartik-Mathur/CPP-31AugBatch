#include <iostream>
using namespace std;

// int fact(int n) {
// 	// base case
// 	if (n == 0) return 1;

// 	// recursive case: fact(n) = n * fact(n-1)
// 	int chotiProblem = fact(n - 1); // Pure assumption

// 	int badiProblem = n * chotiProblem;
// 	return badiProblem;
// }


int fact(int n) {
	// base case
	if (n == 0) return 1;

	// recursive case: fact(n) = n * fact(n-1)
	return n * fact(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << fact(n) << endl;


	return 0;
}
















