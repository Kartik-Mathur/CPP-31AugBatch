#include <iostream>
using namespace std;

int knapsack(int *price, int *wt, int n, int capacity) {
	if (n == 0 || capacity == 0) return 0;

	int op1 = INT_MIN, op2 = INT_MIN;

	if (capacity >= wt[n - 1]) {
		op1 = price[n - 1] + knapsack(price, wt, n - 1, capacity - wt[n - 1]);
	}
	op2 = knapsack(price, wt, n - 1, capacity);
	return max(op1, op2);
}

int topDown(int *price, int *wt, int n, int capacity, int dp[][100]) {
	if (n == 0 || capacity == 0) return dp[n][capacity] = 0;

	if (dp[n][capacity] != -1) return dp[n][capacity];

	int op1 = INT_MIN, op2 = INT_MIN;

	if (capacity >= wt[n - 1]) {
		op1 = price[n - 1] + topDown(price, wt, n - 1, capacity - wt[n - 1], dp);
	}

	op2 = topDown(price, wt, n - 1, capacity, dp);

	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int N, int capacity) {
	int dp[100][100] = {};

	for (int n = 0; n <= N; ++n)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			if (n == 0 || cap == 0) dp[n][cap] = 0;
			else {
				int op1 = INT_MIN, op2 = INT_MIN;
				// Chori karo
				if (cap >= wt[n - 1]) {
					op1 = price[n - 1] + dp[n - 1][cap - wt[n - 1]];
				}
				// Chori mat karo
				op2 = dp[n - 1][cap];

				dp[n][cap] = max(op1, op2);
			}
		}
	}
}

int main() {

	int price[] = {5, 4, 8, 2};
	int wt[] = {2, 3, 3, 1};
	int n = sizeof(wt) / sizeof(int);

	int capacity = 5;
	cout << knapsack(price, wt, n, capacity) << endl;
	int dp[100][100];
	memset(dp, -1, sizeof (dp));
	cout << topDown(price, wt, n, capacity, dp) << endl;

	return 0;
}
















