#include <iostream>
using namespace std;

// 1. Press: cnrtl+shift+p
// 2. Search Vertical Split
// 3. Vertical split par jaao
// 4. cntrl+shift+p, type: horizontal split

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, t;
	cin >> t;

	while (t--) {
		cin >> n;
		int cnt = 0;
		for (int a = 1 ; a < n ; a++) {
			for (int b = 1 ; b < n ; b++) {
				if (a + b == n) {
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}



	return 0;
}
















