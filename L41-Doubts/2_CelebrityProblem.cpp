#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int arr[100][100];
int n;

int findCelebrity() {

	while (s.size() > 1) {
		int a = s.top();
		s.pop();

		int b = s.top();
		s.pop();

		if (arr[a][b]) { // a knows b, therefore a is not celebrity
			s.push(b);
		}
		else {
			s.push(a);
		}
	}

	int ans = s.top();

	return ans;
}

int optimisedCelebrity() {

	int i = 0, j = n - 1;

	while (i < j) {
		if (arr[i][j]) { // i knows j, therefore not a celeb
			i++;
		}
		else {
			j--;
		}
	}

	// Check if i is celeb or not
	for (int j = 0; j < n; ++j)
	{
		if (j == i) continue;
		if (arr[i][j] || !arr[j][i]) return -1;
	}

	return i;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		s.push(i); // insert every index inside stack

		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}

	// int celebrity = findCelebrity();
	int celebrity = optimisedCelebrity();
	if (celebrity == -1) cout << "No Celebrity";
	else cout << celebrity;




	return 0;
}
















