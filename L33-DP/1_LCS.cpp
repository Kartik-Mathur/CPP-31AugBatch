#include <iostream>
#include <cstring> // memset
using namespace std;

int lcsLen(string &s1, int i, string &s2, int j) {
	// base case
	if (i == s1.size() || j == s2.size()) return 0;

	// recursive case
	if (s1[i] == s2[j]) {
		return 1 + lcsLen(s1, i + 1, s2, j + 1);
	}
	else {
		return max(lcsLen(s1, i, s2, j + 1), lcsLen(s1, i + 1, s2, j));
	}
}


int topDown(string &s1, int i, string &s2, int j, int dp[][100]) {
	// base case
	if (i == s1.size() || j == s2.size()) return dp[i][j] = 0;

	if (dp[i][j] != -1) return dp[i][j];

	// recursive case
	if (s1[i] == s2[j]) {
		return dp[i][j] = 1 + topDown(s1, i + 1, s2, j + 1, dp);
	}
	else {
		return dp[i][j] = max(topDown(s1, i, s2, j + 1, dp), topDown(s1, i + 1, s2, j, dp));
	}
}


void printLCS(int dp[][100], int i, int j, string &s1, string &s2, string &ans) {
	if (i == 0 and  j == 0) {
		for (int k = ans.size() - 1; k >= 0; k--) cout << ans[k];
		cout << endl;
		return;
	}

	if (s1[i - 1] == s2[j - 1]) {
		ans.push_back(s1[i - 1]);
		printLCS(dp, i - 1, j - 1, s1, s2, ans);
		ans.pop_back();
	}
	else {
		if (dp[i - 1][j] == dp[i][j]) {
			printLCS(dp, i - 1, j, s1, s2, ans);
		}
		if (dp[i][j - 1] == dp[i][j]) {
			printLCS(dp, i, j - 1, s1, s2, ans);
		}
	}
}

int bottomUp(string &s1, string &s2) {
	int dp[100][100] = {};
	for (int i = 1; i <= s1.size(); ++i)
	{
		for (int j = 1; j <= s2.size(); ++j)
		{
			if (s1[i - 1] != s2[j - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
		}
	}

	string ans;
	printLCS(dp, s1.size(), s2.size(), s1, s2, ans);
	return dp[s1.size()][s2.size()];
}


int main() {

	string s1 = "abcd", s2 = "abedc";

	cout << lcsLen(s1, 0, s2, 0) << endl;
	int dp[100][100];
	memset(dp, -1, sizeof (dp));
	cout << topDown(s1, 0, s2, 0, dp) << endl;
	cout << bottomUp(s1, s2) << endl;


	return 0;
}
















