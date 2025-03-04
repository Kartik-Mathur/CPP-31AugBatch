#include <iostream>
using namespace std;

void solve(string &s, int i, string &op) {
	if (i == s.size()) {
		cout << op << endl;
		return;
	}

	// One Digit
	int oneD = s[i] - '0';
	char ch = 'A' + oneD - 1;
	op.push_back(ch);
	solve(s, i + 1, op);
	op.pop_back();

	// Two Digit
	if (i + 1 < s.size()) {
		int twoD = (s[i] - '0') * 10 + (s[i + 1] - '0');
		if (twoD <= 26) {
			char ch = 'A' + twoD - 1;
			op.push_back(ch);
			solve(s, i + 2, op);
			op.pop_back();
		}
	}
}

int main() {

	string s = "123";
	string op = "";
	solve(s, 0, op);




	return 0;
}
















