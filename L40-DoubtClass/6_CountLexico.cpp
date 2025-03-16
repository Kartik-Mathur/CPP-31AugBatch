#include <iostream>
using namespace std;
int n;

void solve(string s, bool isFirstDigit = true) {
	if (!isFirstDigit) {
		int num = stoi(s);
		if (num <= n) cout << num << " ";
		if (num > n) return;
	}

	int start;
	start = isFirstDigit ? 1 : 0;

	for (int i = start; i <= 9; ++i)
	{
		string x = "";
		char ch = ('0' + i);
		x.push_back(ch);
		solve(s + x, false);
		x.pop_back();
	}
}

int main() {


	cin >> n;
	string s = "";
	cout << 0 << " ";
	solve(s);


	return 0;
}
















