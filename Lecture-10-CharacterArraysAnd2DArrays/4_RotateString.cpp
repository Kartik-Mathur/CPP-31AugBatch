#include <iostream>
using namespace std;

void rotateString(char*a, int n) {
	// cout << "Original String: " << a << endl;

	// 1. Shift all characters n pos ahead
	int len_a = strlen(a);

	int i = len_a - 1;
	while (i >= 0) {
		a[i + n] = a[i];
		i--;
	}

	// cout << "After Shift: " << a << endl;

	// 2. Bring last N characters to front
	i = len_a;
	int j = 0;
	while (j < n) {
		a[j] = a[i];
		i++;
		j++;
	}

	a[len_a] = '\0';
	// cout << a << endl;
}

int main() {

	char a[1000] = "Coding";
	int n = 123249;
	n %= strlen(a);

	rotateString(a, n);
	cout << a << endl;
	return 0;
}
















