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

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {

	int n;
	cin >> n;
	printAllPrimes(n);

	return 0;
}
















