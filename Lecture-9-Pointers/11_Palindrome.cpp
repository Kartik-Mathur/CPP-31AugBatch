#include <iostream>
using namespace std;

bool isPalindrome(char *a) {
	int i = 0, j = strlen(a) - 1;

	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}

		i++;
		j--;
	}

	return true;
}


int main() {

	char a[1000] = "NAMAN";

	if (isPalindrome(a)) cout << "Palindrome\n";
	else cout << "Not a Palindrome\n";

	return 0;
}
















