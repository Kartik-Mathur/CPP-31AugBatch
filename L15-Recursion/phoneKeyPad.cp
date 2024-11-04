#include <iostream>
using namespace std;

char keys[][5] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void solve(char *in, char*op, int i, int j) {
	// base case
	if (in[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}


	// recursive case
	int digit = in[i] - '0';

	for (int k = 0; keys[digit][k] != '\0'; ++k)
	{
		op[j] = keys[digit][k];
		solve(in, op, i + 1, j + 1);
	}
}

int main() {

	char ip[100], op[100];
	cin >> ip;
	solve(ip, op, 0, 0);

	/*
		int digit = 2;

		cout << keys[digit] << endl;

		for (int k = 0; keys[digit][k] != '\0'; ++k)
		{
			cout << keys[digit][k] << "_";
		}
		cout << endl;
	*/

	return 0;
}
















