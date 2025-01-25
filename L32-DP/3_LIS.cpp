#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void solve(int *a, int i, int n, vector<int> &v) {
	if (i == n) {
		if (ans.size() < v.size()) {
			ans = v;
		}
		return;
	}

	if (v.size() == 0 || v[v.size() - 1] < a[i]) {
		// Inclusion
		v.push_back(a[i]);
		solve(a, i + 1, n, v);
		v.pop_back();
	}
	// Exclusion
	solve(a, i + 1, n, v);
}

void findLis(int *a, int n, int indx, int lisLenRemaining, vector<int> &dp) {
	vector<int> ans;

	ans.push_back(a[indx]);
	lisLenRemaining --;

	for (int i = indx - 1; i >= 0 and lisLenRemaining > 0; --i)
	{
		if (a[i] < ans.back() and lisLenRemaining == dp[i]) {
			ans.push_back(a[i]);
			lisLenRemaining--;
		}
	}

	for (int i = ans.size() - 1 ; i >= 0;  i--) {
		cout << ans[i] << " ";
	}
	cout << endl;

}

int lisLen(int *a, int n) {
	vector<int> dp(n, 1); // because initially har element ko include karke 1 len toh
	// hogi hi anyway

	for (int i = 1; i < n; ++i)
	{
		for (int j = i - 1; j >= 0; --j)
		{
			if (a[j] < a[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	int ans = 1;
	int index;
	for (int i = 0; i < n; ++i)
	{
		if (ans < dp[i]) {
			ans = dp[i];
			index = i;
		}
	}

	findLis(a, n, index, ans, dp);

	return ans;
}

int lisOptimised(int *a, int n) {
	vector<int> ans;

	for (int i = 0; i < n; ++i)
	{
		if (ans.size() == 0 || a[i] > ans.back()) ans.push_back(a[i]);
		else {
			int indx = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
			cout << a[i] << " ," << indx << ", " << ans[indx] << endl;
			ans[indx] = a[i];
		}
	}

	return ans.size();
}

int main() {

	int a[] = {8, 2, 9, 10, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	vector<int> v;
	// solve(a, 0, n, v);

	// for (int i = 0 ; i < ans.size();  i++) {
	// 	cout << ans[i] << " ";
	// }
	// cout << endl;

	cout << lisLen(a, n) << endl;
	cout << lisOptimised(a, n) << endl;


	return 0;
}
















