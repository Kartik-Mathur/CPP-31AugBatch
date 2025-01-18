#include <iostream>
#include <vector>
using namespace std;

int minSteps(int n) {
	if (n == 1) return 0;

	int x = INT_MAX, y = INT_MAX, z = INT_MAX;
	x = minSteps(n - 1);
	if (n % 2 == 0) {
		y = minSteps(n / 2);
	}
	if (n % 3 == 0) {
		z = minSteps(n / 3);
	}

	return min(x, min(y, z)) + 1;
}

int topDown(int n, vector<int> &dp) {
	if (n == 1) return dp[n] = 0;

	if (dp[n] != -1) return dp[n];


	int x = INT_MAX, y = INT_MAX, z = INT_MAX;
	x = topDown(n - 1, dp);
	if (n % 2 == 0) {
		y = topDown(n / 2, dp);
	}
	if (n % 3 == 0) {
		z = topDown(n / 3, dp);
	}

	return dp[n] = min(x, min(y, z)) + 1;
}

int bottomUp(int n) {
	vector<int> dp(n + 1);

	dp[1] = 0;
	for (int i = 2; i <= n; ++i)
	{
		int x = INT_MAX, y = INT_MAX, z = INT_MAX;
		x = dp[i - 1];
		if (i % 2 == 0) y = dp[i / 2];
		if (i % 3 == 0) z = dp[i / 3];

		dp[i] = min(x, min(y, z)) + 1;
	}

	return dp[n];
}

int main() {

	int n;
	cin >> n;
	vector<int> dp(n + 1, -1);
	cout << topDown(n, dp) << endl;
	cout << bottomUp(n, dp) << endl;
	cout << minSteps(n) << endl;

	return 0;
}
















