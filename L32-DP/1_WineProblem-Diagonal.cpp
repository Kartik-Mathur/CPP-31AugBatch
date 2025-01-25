#include <iostream>
#include <cstring> // memset
using namespace std;

int wineProblem(int *price, int l, int r, int day) {
	if (l > r) return 0;

	int op1 = price[l] * day + wineProblem(price, l + 1, r, day + 1);
	int op2 = price[r] * day + wineProblem(price, l, r - 1, day + 1);

	return max(op1, op2);
}

int topDown(int *price, int l, int r, int day, int dp[][100]) {
	if (l > r) return dp[l][r] = 0;

	if (dp[l][r] != -1) return dp[l][r];

	int op1 = price[l] * day + topDown(price, l + 1, r, day + 1, dp);
	int op2 = price[r] * day + topDown(price, l, r - 1, day + 1, dp);

	return dp[l][r] = max(op1, op2);
}

int bottomUp(int *price, int n) {
	int dp[100][100] = {0};

	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = i; j < n; ++j)
		{
			int day = n - (j - i);

			int op1 = price[i] * day + (i + 1 < n ? dp[i + 1][j] : 0);
			int op2 = price[j] * day + (j - 1 >= 0 ? dp[i][j - 1] : 0);

			dp[i][j] = max(op1, op2);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[0][n - 1];
}

int wineproblemDiagonal(int *price, int n) {
	int dp[100][100] = {0};

	for (int k = 0; k < n; ++k)
	{
		int i = 0, j = k;
		while (i < n and j < n) {

			int day = n - (j - i);
			int op1 = price[i] * day + (i + 1 < n ? dp[i + 1][j] : 0);
			int op2 = price[j] * day + (j - 1 >= 0 ? dp[i][j - 1] : 0);

			dp[i][j] = max(op1, op2);

			i++;
			j++;
		}
	}

	return dp[0][n - 1];
}

int main() {

	int price[] = {2, 3, 5, 1, 4};
	int n = sizeof(price) / sizeof(int);
	int dp[100][100];

	memset(dp, -1, sizeof dp); // Can only initialize with -1, 1

	cout << bottomUp(price, n) << endl;
	cout << topDown(price, 0, n - 1, 1, dp) << endl;
	cout << wineProblem(price, 0, n - 1, 1) << endl;
	cout << wineproblemDiagonal(price, n) << endl;


	return 0;
}
















