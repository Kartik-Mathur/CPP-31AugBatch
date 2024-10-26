#include <iostream>
using namespace std;

int stringToInt(char*a, int n) {
	// base case
	if (n == 0) return 0;
	// recursive case
	int d = a[n - 1] - '0';
	int chotaInt = stringToInt(a, n - 1);
	return chotaInt * 10 + d;
}

int main() {

	char a[] = "1234";

	int ans = stringToInt(a, strlen(a));
	cout << ans << endl;
	cout << ans + 10 << endl;


	return 0;
}
















