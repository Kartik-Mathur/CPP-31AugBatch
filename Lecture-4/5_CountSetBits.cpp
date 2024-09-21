#include <iostream>
using namespace std;

int main() {

	int n, cnt = 0, rem;

	cin >> n;
	while (n != 0) {

		rem = n % 2;
		if (rem == 1) {
			cnt++;
		}

		n /= 2;
	}

	cout << "Set Bits: " << cnt << endl;

	return 0;
}
















