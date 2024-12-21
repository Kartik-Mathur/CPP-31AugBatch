#include <iostream>
using namespace std;

bool solve(string &s, string &p, int i = 0, int j = 0) {
	// base case
	if (i == s.size()) { // string khatam
		for (int k = j; k < p.size(); ++k)
		{
			if (p[k] != '*') return false;
		}

		return true;
	}

	if (j == p.size()) return false;

	// recursive case
	if (p[j] == '*') {
		bool starIgnoreKarkeMatchHua = solve(s, p, i, j + 1);
		bool starLekarMatchHua = solve(s, p, i + 1, j);
		return (starLekarMatchHua || starIgnoreKarkeMatchHua);
	}
	else if (p[j] == '.') {
		return solve(s, p, i + 1, j + 1);
	}
	else {
		if (s[i] != p[j]) return false;
		return solve(s, p, i + 1, j + 1);
	}
}

int main() {

	string s = "abc";
	string p = "*";

	cout << solve(s, p) << endl;

	return 0;
}














