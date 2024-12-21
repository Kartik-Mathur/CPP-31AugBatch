#include <iostream>
using namespace std;

void permutations(string &a, int i) {
	// base case
	if (i == a.size()) {
		cout << a << endl;
		return;
	}

	// recursive case
	for (int j = i; j != a.size(); ++j)
	{
		swap(a[i], a[j]);
		permutations(a, i + 1);
		swap(a[i], a[j]);// backtracking
	}
}

int main() {

	string a = "abc";

	permutations(a, 0);

	return 0;
}
















