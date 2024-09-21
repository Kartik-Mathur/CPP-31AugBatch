#include <iostream>
using namespace std;

int main() {

	int N, num, i;
	bool kyaNumPrimeHai;

	cin >> N;
	// Print all primes till N
	for (num = 2; num <= N; num++) {
		// Only print num when its prime
		// num should not be divisible by number in range [2,num-1]
		kyaNumPrimeHai = true;
		for (i = 2; i <= num - 1; i++) {
			if (num % i == 0) {
				kyaNumPrimeHai = false;
				break;
			}
		}

		// Agr num prime hai toh print kardo, else kch mat kro
		if (kyaNumPrimeHai  ==  true) {
			cout << num << " ";
		}
	}

	cout << endl;



	return 0;
}
















