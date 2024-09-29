#include <iostream>
using namespace std;

void printTable(int initial, int final_val, int step) {
	int f, c;

	f = initial;
	while (f <= final_val) {

		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;


		f = f + step;
	}
}

int main() {

	int initial, final_val, step;
	cin >> initial >> final_val >> step;

	printTable(initial, final_val, step);

	return 0;
}
















