#include <iostream>
#include <climits> // INT_MIN: -2^31, INT_MAX: 2^31-1
using namespace std;

int main() {

	int n, i, num, largest;

	cin >> n;

	largest = INT_MIN;
	i = 1;
	while (i <= n) {

		cin >> num;

		if (num > largest) {
			largest = num;
		}

		i = i + 1;
	}

	cout << "Largest number: " << largest << endl;

	return 0;
}
















