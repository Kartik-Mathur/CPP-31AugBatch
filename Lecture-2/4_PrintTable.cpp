#include <iostream>
using namespace std;

int main() {

	int f, c, initial, final_val, step;

	cin >> initial >> final_val >> step;

	f = initial;
	while (f <= final_val) {

		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;


		f = f + step;
	}

	return 0;
}
















