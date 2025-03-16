#include <iostream>
using namespace std;

void solve(string &s, string x, int i = 0) {
	if (i == s.size()) {
		cout << x << endl;
		return;
	}

	int oneDigit = (s[i] - '0');
	char newChar = 'A' + oneDigit - 1;
	solve(s, x + newChar, i + 1);

	if (i + 1 < s.size()) {
		int twoDigit = (s[i] - '0') * 10 + (s[i + 1] - '0');
		if (twoDigit <= 26) {
			char newChar = 'A' + twoDigit - 1;
			solve(s, x + newChar, i + 2);
		}
	}
}

int main() {

	string s, x = "";
	cin >> s;

	solve(s, x);



	// for (int x = 1; x <= 26; ++x)
	// {
	// 	char newChar = 'A' + x - 1;
	// 	cout << newChar << endl;
	// }

	return 0;
}
















