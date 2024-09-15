#include <iostream>
using namespace std;

int main() {

	int n;
	float ans;
	n = 20;

	float inc = 1;

	ans = 0;
	int precision = 2;
	int i = 1;
	while (i <= precision + 1) {
		while (ans * ans <= n) {
			ans = ans + inc;
		}

		ans = ans - inc;

		inc = inc / 10;
		i = i + 1;
	}

	cout << "Square Root: " << ans << endl;

	return 0;
}
















