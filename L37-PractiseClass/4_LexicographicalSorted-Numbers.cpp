#include <iostream>
#include <cstring>
using namespace std;

void solve(string &s, string &n, bool firstDigit = true) {
	// base case
	int no1 = s.size() > 0 ? stoi(s) : 0;
	int no2 = stoi(n);
	if (no1 > no2) {
		return;
	}

	cout << s << " ";

	int start = (firstDigit) ? 1 : 0;

	for (int number = start; number <= 9; ++number)
	{
		s.push_back(number + '0');
		solve(s, n, false);
		s.pop_back();
	}
}

int main() {

	string s = "";
	string n;
	cin >> n;

	cout << 0;

	solve(s, n);

	return 0;
}
















