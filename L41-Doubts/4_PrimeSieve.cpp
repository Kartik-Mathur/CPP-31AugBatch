#include <iostream>
#include <vector>
using namespace std;
vector<bool> a(100000, true);

void primeSieve(int n) {
	for (int i = 2; i <= n; ++i)
	{
		if (a[i]) {
			cout << i << " ";
			for (int j = 2 * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}
}

void primeOptimised(int n) {
	a[0] = a[1] = false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (a[i]) {
			for (int j = i * i; j <= n; j += i)
			{
				a[j] = false;
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		if (a[i])cout << i << " ";
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	primeOptimised(n);



	return 0;
}
















