#include <iostream>
#include <vector>
using namespace std;
#define int long long
vector<int> a;
int n, x;

bool kyaRequiredLakdiMilli(int mid) {
	int woodCollected = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > mid) {
			woodCollected += a[i] - mid;
		}
	}

	if (woodCollected >= x)  return true;

	return false;
}

int32_t main() {
	cin >> n;

	int s = 0, e = 0, ans;
	a.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		e = max(e, a[i]);
	}
	cin >> x;

	while (s <= e) {
		int mid = s + (e - s) / 2;

		if (kyaRequiredLakdiMilli(mid)) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}
















