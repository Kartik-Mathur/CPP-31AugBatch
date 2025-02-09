#include <bits/stdc++.h>
using namespace std;
double p[3005];
int n;
double dp[3005][3005];

double solve(int i, int headCount) {
	if (headCount == 0) return dp[i][headCount] = 1;

	if (i == n) return dp[i][headCount] = 0;

	if (dp[i][headCount] > -1) return dp[i][headCount];

	return dp[i][headCount] =
	           p[i] * solve(i + 1, headCount - 1) +
	           (1 - p[i]) * solve(i + 1, headCount);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
	}
	memset(dp, -1, sizeof dp);

	cout << setprecision(10) << fixed << solve(0, n / 2 + 1);




	return 0;
}
















