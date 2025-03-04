#include <iostream>
#include <algorithm>
using namespace std;
string orignal_s;
void solve(string s, string op) {
	// base case
	if (s.size() == 0) {
		if (op > orignal_s)
			cout << op << endl;
		return;
	}
	// recursive case
	for (int i = 0; i < s.size(); ++i)
	{
		solve(s.substr(0, i) + s.substr(i + 1), op + s[i]);
	}
}

int main() {

	string s;
	cin >> s;
	orignal_s = s;

	sort(s.begin(), s.end());

	solve(s, "");

	return 0;
}
















