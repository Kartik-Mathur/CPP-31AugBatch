#include <iostream>
#include <vector>
using namespace std;
int cnt = 0;
void solve(int *arr, int i, int n, vector<int> &a, vector<int> &b,
           int sa = 0, int sb = 0) {
	// base case
	if (i == n) {
		// cout << sa << ", " << sb << endl;
		if (sa == sb) {
			cnt++;
			for (int i = 0; i < a.size(); ++i)
			{
				cout << a[i] << " ";
			}
			cout << "and ";
			for (int i = 0; i < b.size(); ++i)
			{
				cout << b[i] << " ";
			}
			cout << endl;
		}

		return;
	}

	// recursive case
	a.push_back(arr[i]);
	solve(arr, i + 1, n, a, b, sa + arr[i], sb);
	a.pop_back();

	b.push_back(arr[i]);
	solve(arr, i + 1, n, a, b, sa , sb + arr[i]);
	b.pop_back();
}

int main() {

	int arr[10000];
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	vector<int> a, b;
	solve(arr, 0, n, a, b);
	cout << cnt << endl;

	return 0;
}
















