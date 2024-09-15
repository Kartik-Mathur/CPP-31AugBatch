#include <iostream>
using namespace std;

int main() {

	int n, number, rows, i;
	cin >> n;

	for (rows = 1; rows <= n; rows++) {

		if (rows % 2 == 0) {// If row is even: number stars with 0
			number = 0;
		}
		else { // If row is odd: number stars with 1
			number = 1;
		}

		// Print row times numbers
		for (i = 1; i <= rows; i++) {
			cout << number << " ";
			number = 1 - number;
		}

		cout << endl;
	}

	return 0;
}
















