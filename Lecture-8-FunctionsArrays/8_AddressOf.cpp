#include <iostream>
using namespace std;

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << "arr    : " << arr << endl;
	cout << "&arr[0]: " << &arr[0] << endl;

	int a = 1;
	double f = 1.11;

	cout << "Address of a : " << &a << endl;
	cout << "Size of Address(a) : " << sizeof(&a) << endl;

	cout << "Address of f : " << &f << endl;
	cout << "Size of Address(f) : " << sizeof(&f) << endl;

	return 0;
}
















