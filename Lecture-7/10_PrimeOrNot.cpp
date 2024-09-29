#include <iostream>
using namespace std;

bool isPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	// Yaha aa gaye matlab n kisi i se divide nhi hua, thus its prime
	return true;
}

int main() {

	int n;
	cin >> n;

	if (isPrime(n)) {
		cout << "Prime\n";
	}
	else {
		cout << "Not prime\n";
	}

	return 0;
}
















