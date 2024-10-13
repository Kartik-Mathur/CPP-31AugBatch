#include <iostream>
using namespace std;

int main() {

	char a[] = "Hello";

	int i = 0, j = strlen(a) - 1;

	while (i < j) {
		swap(a[i], a[j]);
		i++;
		j--;
	}

	cout << a << endl;

	return 0;
}
















