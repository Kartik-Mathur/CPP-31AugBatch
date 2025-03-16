#include <iostream>
#include <vector>
using namespace std;
#define int long long
#define w(t) int t; cin >> t;while (t--)
#define vi vector<int>
int n;

int solve(vi &a, vi &ps, int s, int e) {
	if (s >= e) return 0;

	int ts = ps[e] - (s ? ps[s - 1] : 0);
	if (ts % 2) return 0;

	int hs = 0, j, k;

	for (j = s; j <= e; ++j)
	{
		hs += a[j];
		if (hs == ts / 2) {
			k = j;
			break;
		}
	}

	if (j > e) return 0;

	return 1 + max(solve(a, ps, s, k), solve(a, ps, k + 1, e));
}


int32_t main() {

	w(t) {
		cin >> n;
		vi a(n), ps(n, 0);

		for (int i = 0; i < n; ++i) {
			cin >> a[i];

			// Calculate prefix Sum Array
			if (i == 0) ps[i] = a[i];
			else ps[i] = ps[i - 1] + a[i];
		}

		cout << solve(a, ps, 0, n - 1) << endl;
	}


	return 0;
}
















