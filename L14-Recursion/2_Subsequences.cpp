#include <iostream>
using namespace std;

void subsequences(char*in, int i, char *op, int j) {
	// base case
	if (in[i] == '\0') {
		op[j] = '\0';
		cout << op << endl;
		return;
	}

	// recursive case
	// 1. ith character ko copy mat kro
	subsequences(in, i + 1, op, j);
	// 2. ith character ko copy kro
	op[j] = in[i];
	subsequences(in, i + 1, op, j + 1);
}

int main() {

	char in[100] = "abc";
	char out[100];

	subsequences(in, 0, out, 0);


	return 0;
}
















