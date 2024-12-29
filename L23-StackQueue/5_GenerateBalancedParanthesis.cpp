#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &str) {
	stack<char> s;

	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];

		switch (ch) {
		case '(':
		case '{':
		case '[':
			s.push(ch);
			break;

		case ')':
			if (!s.empty() and s.top() == '(') s.pop();
			else return false;
			break;
		case '}':
			if (!s.empty() and s.top() == '{') s.pop();
			else return false;
			break;
		case ']':
			if (!s.empty() and s.top() == '[') s.pop();
			else return false;
			break;

		}
	}
	return s.empty();

}

void bruteForce(string &s, int n) {
	// base case
	if (s.size() == 2 * n) {
		// cout << s << endl;
		if (isBalanced(s))cout << s << endl;
		return;
	}

	// Recursive case
	// 1. Add opening bracket in front
	s.push_back('(');
	bruteForce(s, n);
	s.pop_back(); // backtracking

	// 1. Add closing bracket in front
	s.push_back(')');
	bruteForce(s, n);
	s.pop_back(); // backtracking
}

void bruteForce1(string s, int n) {
	// base case
	if (s.size() == 2 * n) {
		if (isBalanced(s))cout << s << endl;
		return;
	}

	// Recursive case
	// 1. Add opening bracket in front
	bruteForce1(s + "(", n);

	// 1. Add closing bracket in front
	bruteForce1(s + ")", n);
}

int main() {

	string s = "";
	bruteForce1(s, 2);

	return 0;
}
















