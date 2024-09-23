#include <iostream>
using namespace std;

int main() {

	int a[100];
	int n = 15, key, i;

	for (int i = 0; i < n; ++i)
	{
		a[i]  =  i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << "  ";
	}
	cout << endl;

	cout << "Enter key: ";
	cin >> key;

	for (i = 0; i < n; ++i)
	{
		if (a[i] == key) {
			cout << "Key Found at index: " << i << endl;
			break;
		}
	}

	if (i == n) {
		cout << "Key Not Found\n";
	}

	return 0;
}
















