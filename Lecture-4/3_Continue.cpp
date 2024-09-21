#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;

	int i = 1;
	while (i <= 5) {
		if (i == 3) {
			i++;
			continue;
		}
		cout << i << " ";
		i++;
	}
	cout << endl;

	/*
		int i;
		for (i = 1; i <= 5; ++i)
		{
			if (i == 3) {
				continue;
			}
			cout << i << " ";
		}
		cout << endl;
	*/
	return 0;
}
















