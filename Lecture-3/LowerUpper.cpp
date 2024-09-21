#include <iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		cout << "UPPERCASE\n";
	}
	else if (ch >= 'a' && ch <= 'z') {
		cout << "lowercase\n";
	}
	else {
		cout << "Invalid\n";
	}

	return 0;
}
















