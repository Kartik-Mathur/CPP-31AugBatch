#include <iostream>
using namespace std;

int main() {

	int i, number;

	for (i = 0; i <= 10; i++) {
		cout << i << " ";
	}
	cout << endl;

	i = 0;
	for ( ; i <= 10; ) {
		cout << i << " ";

		i++;
	}
	cout << endl;

	// Print 10 numbers starting from 10
	for (i = 1, number = 10; i <= 10; ++i, number++)
	{
		cout << number << " ";
	}
	cout << endl;


	return 0;
}
















