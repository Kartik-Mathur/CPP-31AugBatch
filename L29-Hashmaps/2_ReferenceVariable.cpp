#include <iostream>
using namespace std;

void update(int &a) {
	a = a + 1;
}

int main() {

	int a = 1;
	update(a);
	cout << a << endl;

	return 0;
}
















