#include <iostream>
using namespace std;

int x = 100;

int main() {

	int x = 1;

	if (x > 0) {
		x++;
		int x = 10;
		x++;
		cout << x << endl;
	}
	// Scope resolution operator ::
	cout << ::x << endl;
	cout << x++ << endl;
	cout << x << endl;


	return 0;
}
















