#include <iostream>
using namespace std;

int main() {

	int digits = 0, special = 0, alphabets = 0, spaces = 0;

	char ch;
	ch = cin.get();
	while (ch != '$') {
		if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\n' || ch == '\t') {
			spaces++;
		}
		else if ((ch >= 'A' && ch <= 'Z') or (ch >= 'a' and ch <= 'z')) {
			alphabets++;
		}
		else {
			special++;
		}

		ch = cin.get();
	}

	cout << "Digits    : " << digits << endl;
	cout << "Alpha     : " << alphabets << endl;
	cout << "Spaces    : " << spaces << endl;
	cout << "Special   : " << special << endl;

	return 0;
}
















