#include <iostream>
using namespace std;

int main() {

	int n;
	float ans, inc;
	n = 20;

	ans = 0;
	inc = 1;

	int cp = 1;
	while (cp <= 2 + 1) {


		while (ans * ans <= n) {

			ans = ans + inc;
		}

		ans = ans - inc;

		inc = inc / 10;
		cp = cp + 1;
	}

	cout << ans  << endl;

	return 0;
}
















