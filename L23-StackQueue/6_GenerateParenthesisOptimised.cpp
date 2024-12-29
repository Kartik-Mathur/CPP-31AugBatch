#include <iostream>
#include <stack>
using namespace std;

void solve(string &s, int n, int open, int close) {
	// base case
	if (s.size() == 2 * n) {
		cout << s << endl;
		return;
	}

	// Recursive case
	// 1. Add opening bracket in front
	if (open < n) {
		s.push_back('(');
		solve(s, n, open + 1, close);
		s.pop_back(); // backtracking
	}

	// 2. Add closing bracket in front
	if (open > close) {
		s.push_back(')');
		solve(s, n, open, close + 1);
		s.pop_back(); // backtracking
	}
}

int main() {

	string s = "";
	solve(s, 2, 0, 0);

	return 0;
}

