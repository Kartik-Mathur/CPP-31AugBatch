#include <iostream>
using namespace std;

int main() {

	int a[1000];
	int n;
	cout << "Enter n(max:1000): ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		// a[i] = i + 1;
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















