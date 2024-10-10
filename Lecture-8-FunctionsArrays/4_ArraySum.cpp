#include <iostream>
using namespace std;

int arraySum(int a[], int n) {
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans += a[i];
	}
	return ans;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int ans = arraySum(a, n);
	cout << ans << endl;

	return 0;
}
















