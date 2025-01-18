#include <iostream>
#include <vector>
using namespace std;

int fibo(int n) {
	if (n <= 1) return n;

	return fibo(n - 1) + fibo(n - 2);
}

int solve(int n, vector<int> &dp) {
	if (n <= 1) return dp[n] = n;

	if (dp[n] != -1) return dp[n];

	int ans = solve(n - 1, dp) + solve(n - 2, dp);
	// Agar calculate kia hai answer ko toh usse store kar lena in dp ka array
	dp[n] = ans;
	return dp[n];
}

int bottomUp(int n) {
	vector<int> dp(n + 1);
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	return dp[n];
}

int main() {
	int n;
	cin >> n;

	vector<int> dp(n + 1, -1);

	cout << solve(n, dp) << endl;
	cout << bottomUp(n) << endl;
	cout << fibo(n) << endl;


	return 0;
}
















