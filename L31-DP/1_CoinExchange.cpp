#include <iostream>
#include <vector>
using namespace std;

int solve(int amount, int *coins, int n) {
	if (amount == 0) return 0;

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotaAns = solve(amount - coins[i], coins, n);
			if (chotaAns != INT_MAX) ans = min(ans, chotaAns + 1);
		}
	}
	return ans;
}

int topDown(int amount, int *coins, int n, vector<int> &dp) {
	if (amount == 0) return dp[amount] = 0;

	if (dp[amount] != -1) return dp[amount];

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i]) {
			int chotaAns = topDown(amount - coins[i], coins, n, dp);
			if (chotaAns != INT_MAX) ans = min(ans, chotaAns + 1);
		}
	}
	return dp[amount] = ans;
}

int bottomUp(int amount, int *coins, int n) {
	vector<int> dp(amount + 1, INT_MAX);

	dp[0] = 0;

	for (int amt = 1; amt <= amount; ++amt)
	{
		int ans = INT_MAX;
		for (int j = 0; j < n; ++j)
		{
			if (amt >= coins[j]) {
				int chotiAmt = amt - coins[j];
				if (dp[chotiAmt] != INT_MAX) {
					ans = min(ans, dp[chotiAmt] + 1);
				}
			}
		}

		dp[amt] = ans;
	}

	return dp[amount];
}


int main() {

	int coins[] = {7, 10};
	int n = sizeof(coins) / sizeof(int);

	vector<int> dp(10000, -1);

	cout << bottomUp(10, coins, n) << endl;
	cout << topDown(10, coins, n, dp) << endl;
	cout << solve(10, coins, n) << endl;

	return 0;

}
















