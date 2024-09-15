#include <iostream>
using namespace std;

int main() {

	char a = 'A';
	char b = 'A';

	cout << 'A' + 'A' << endl;
	cout << a + b << endl;

	char x = 65;

	cout << x << endl; // A
	cout << x + 1 << endl;  // 66

	x = x + 1;
	cout << x << endl; // B


	// Explicit Typeconversion
	cout << (int)'A' << endl;
	cout << (char)68 << endl;

	return 0;
}
















