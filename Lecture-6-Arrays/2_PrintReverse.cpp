#include <iostream>
using namespace std;

int main() {

	int a[1000];
	int n = 10;

	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}

	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return 0;
}
















