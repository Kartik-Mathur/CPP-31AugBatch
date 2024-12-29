#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s, int topElement) {
	if (s.empty()) {
		s.push(topElement);
		return;
	}

	int top = s.top();
	s.pop();
	pushBottom(s, topElement);
	s.push(top);
}

void reverseStack(stack<int> &s) {
	if (s.empty()) return;

	int topElement = s.top();
	s.pop();

	reverseStack(s);

	pushBottom(s, topElement);
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	reverseStack(s);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}



	return 0;
}
















