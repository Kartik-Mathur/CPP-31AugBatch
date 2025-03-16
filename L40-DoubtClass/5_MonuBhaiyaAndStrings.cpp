#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {

	string str;
	cin >> str;

	stack<char> s;
	int freq[26] = {0};
	int isPresentInStack[26] = {0};
	for (int i = 0 ; i < str.size(); i++) freq[str[i] - 'a']++;

	for (int i = 0 ; i < str.size(); i++) {
		char ch = str[i];
		freq[ch - 'a']--;
		if (isPresentInStack[ch - 'a']) continue;

		while (!s.empty() and s.top() > ch and freq[s.top() - 'a'] > 0) {
			isPresentInStack[s.top() - 'a'] = false;
			s.pop();
		}

		s.push(ch);
		isPresentInStack[ch - 'a'] = true;
	}

	string ans = "";
	while (!s.empty()) {
		ans.push_back(s.top());
		s.pop();
	}

	reverse(ans.begin(), ans.end());
	cout << ans << endl;


	return 0;
}
















