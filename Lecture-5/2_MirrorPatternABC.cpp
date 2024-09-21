#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;
	for (row = 1; row <= n; ++row)
	{
		// Har row ke andar `n+1-row` times increasing characters print
		// karne hai
		char ch = 'A';
		for (i = 1; i <= n + 1 - row; ++i)
		{
			cout << ch;
			ch++;
		}

		// Har row ke andar `n+1-row` times decreasing characters print
		// karne hai
		ch--;
		for (i = 1; i <= n + 1 - row; ++i)
		{
			cout << ch;
			ch--;
		}
		cout << endl;
	}

	// Mirror Pattern
	for (row = n - 1; row >= 1; --row)
	{
		// Har row ke andar `n+1-row` times increasing characters print
		// karne hai
		char ch = 'A';
		for (i = 1; i <= n + 1 - row; ++i)
		{
			cout << ch;
			ch++;
		}

		// Har row ke andar `n+1-row` times decreasing characters print
		// karne hai
		ch--;
		for (i = 1; i <= n + 1 - row; ++i)
		{
			cout << ch;
			ch--;
		}
		cout << endl;
	}

	return 0;
}
















