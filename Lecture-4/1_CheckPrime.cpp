#include <iostream>
using namespace std;

int main() {

	int n, i;
	cin >> n;

	bool kyaPrimeHaiN = true;
	// We need to tell whether n is prime or not?
	// Let's write a loop that runs from [2,n-1]
	for (i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			// n is not a prime number, kyunki divide ho gaya
			kyaPrimeHaiN = false;
			break;// current loop se bahar nikal dega break
		}
	}


	// Loop se bahar let's check whether kyaPrimeHaiN is true or false
	if (kyaPrimeHaiN == true) {
		cout << n << endl;
	}


	return 0;
}
















