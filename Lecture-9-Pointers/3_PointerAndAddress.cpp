#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int b[] = {10, 12, 13, 14, 15};
	int n = sizeof(a) / sizeof(int);
	int m = sizeof(b) / sizeof(int);

	int *x = a;
	for (int i = 0; i < n; ++i)
	{
		// cout << x[i] << " ";
		cout << *(x + i) << " ";
	}
	cout << endl;


	// a = b;
	x = b;
	for (int i = 0; i < m; ++i)
	{
		// cout << x[i] << " ";
		cout << *(x + i) << " ";
	}
	cout << endl;


	return 0;
}
















