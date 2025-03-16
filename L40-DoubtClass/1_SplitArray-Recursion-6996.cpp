#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define vi vector<int>
const int SIZE = 1e5 + 5;
int cnt = 0;

void solve(int *a, int i, int n, vi &b, vi &c, int sumb = 0, int sumc = 0) {
	// base case
	if (i == n) {

		if (sumb == sumc) {
			for (auto e : b) cout << e << " ";
			cout << "and ";
			for (auto e : c) cout << e << " ";
			cout << endl;
			cnt++;
		}

		return;
	}

	// recursive case
	b.push_back(a[i]);
	solve(a, i + 1, n, b, c, sumb + a[i], sumc);
	b.pop_back();

	c.push_back(a[i]);
	solve(a, i + 1, n, b, c, sumb, sumc + a[i]);
	c.pop_back();
}

int cntArrays(int *a, int n, int i = 0, int sumb = 0, int sumc = 0) {
	if (i == n) {

		if (sumb == sumc) {
			return 1;
		}

		return 0;
	}

	// recursive case
	int cnt = 0;
	cnt += cntArrays(a, n, i + 1, sumb + a[i], sumc);

	cnt += cntArrays(a, n, i + 1, sumb, sumc + a[i]);

	return cnt;
}

int main() {

	int a[SIZE];
	int n;
	cin >> n;
	sort(a, a + n);

	vi b, c;

	for (int i = 0; i < n; ++i) cin >> a[i];

	solve(a, 0, n, b, c);
	cout << cntArrays(a, n) << endl;

	return 0;
}
















