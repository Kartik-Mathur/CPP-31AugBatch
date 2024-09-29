#include <iostream>
using namespace std;

int main() {

	int x = 2;

	if (x > 1) {
		cout << "Hello\n";
	}
	else {
		cout << "World\n";
	}

	(x > 1) ? cout << "Hello\n" : cout << "World\n";

	bool isEven = (x % 2 == 0) ? true : false;
	if (isEven) {
		cout << "Even\n";
	}
	else {
		cout << "Odd\n";
	}

	return 0;
}
















