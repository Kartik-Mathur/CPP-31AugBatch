#include <iostream>
using namespace std;

int main() {

	int n;
	float ans, inc;
	cin >> n;

	ans = 0;
	inc = 1;
	int precision = 2;

	int cp = 1;
	while (cp <= precision + 1) {

		while (ans * ans <= n) {

			ans = ans + inc;
		}

		ans = ans - inc;

		inc = inc / 10;
		cp = cp + 1;
	}

	cout << "Square root: " << ans << endl;

	return 0;
}

















