#include <iostream>
using namespace std;

int main() {

	int a = 10;
	float f = 1.11;

	char ch = 'A';

	cout << "&a: " << &a << endl;
	cout << "&f: " << &f << endl;
	cout << "&ch: " << &ch << endl;

	cout << "sizeof(&ch): " << sizeof(&ch) << endl;
	cout << "sizeof(&f): " << sizeof(&f) << endl;
	cout << "sizeof(&a): " << sizeof(&a) << endl;


	return 0;
}
















