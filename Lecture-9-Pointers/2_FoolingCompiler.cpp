#include <iostream>
using namespace std;

int main() {

	char ch = 'A';

	cout << (int)ch << endl;

	cout << &ch << endl; // Address of ch is &ch
	cout << (int*)(&ch) << endl;
	// Fool compiler by telling &ch is integer ka address using int*

	cout << (float*)(&ch) << endl;
	cout << (double*)(&ch) << endl;
	cout << (void*)(&ch) << endl;

	return 0;
}
















