#include <iostream>
using namespace std;

int main() {

	int n, row, number, i;
	cin >> n;

	number = 1;
	row = 1;
	while (row <= n) {

		i = 1;
		while (i <= row) {

			// Work
			cout << number << " ";
			number = number + 1;

			i = i + 1;
		}

		cout << endl;
		row = row + 1;
	}

	return 0;
}
















