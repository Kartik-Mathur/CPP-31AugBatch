#include <iostream>
using namespace std;

void readString(char *a, int n, char delimiter = '\n') {
	int i = 0;

	char ch;
	ch = cin.get();
	while (i < n - 1 and ch != delimiter) {
		a[i] = ch;
		i++;

		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {
	char a[500];
	// readString(a, 500);
	cin.getline(a, 500, '&');

	cout << a << endl;

	return 0;
}
















