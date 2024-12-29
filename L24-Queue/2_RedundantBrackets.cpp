#include <iostream>
#include <stack>
using namespace std;

bool isOperatorOrAlphabet(char ch) {
	if (ch == '(' || ch == '[' || ch == '{') return false;
	return true;
}

bool isClosingBracket(char ch) {
	return ch == '}' || ch == ')' || ch == ']';
}

bool isRedundant(string &a) {
	stack<char> s;

	for (int i = 0; a[i] ; ++i)
	{
		char ch = a[i];
		if (ch == ' ' || ch == '\t') continue;

		if (isClosingBracket(ch)) {
			bool charHaiInBetween = false;
			while (!s.empty() and isOperatorOrAlphabet(s.top())) {
				charHaiInBetween = true;
				s.pop();
			}

			if (charHaiInBetween == false) return true;
			
			s.pop();
		}
		else {
			s.push(ch);
		}
	}

	return false;
}

int main() {
	string s = "[((a+b))+(c+d)]";
	if (isRedundant(s)) cout << "Yes Redundant hai\n";
	else cout << "Redundant nahi hai\n";

	return 0;
}

