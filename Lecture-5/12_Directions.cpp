#include <iostream>
using namespace std;

int main() {

	char ch;

	int x = 0, y = 0;

	ch = cin.get();
	while (ch != '\n') {
		if (ch == 'N') y++;
		else if (ch == 'S') y--;
		else if (ch == 'E') x++;
		else x--;

		ch = cin.get();
	}

	if (x >= 0 and y >= 0) {
		// 1st quad: x times 'E' and  y times 'N'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}

		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}
	}
	else if (x <= 0 and y >= 0) {
		// 2nd quad: y times 'N' and x times 'W'
		for (int i = 0; i < y; ++i)
		{
			cout << 'N';
		}

		x = x * (-1);
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}
	}
	else if (x <= 0  and y <= 0) {
		// 3rd quad: y times 'S'  and x  times 'W'
		y = y * (-1);
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}


		x = x * (-1);
		for (int i = 0; i < x; ++i)
		{
			cout << 'W';
		}
	}
	else {
		// x times 'E' and y times 'S'
		for (int i = 0; i < x; ++i)
		{
			cout << 'E';
		}

		y = y * (-1);
		for (int i = 0; i < y; ++i)
		{
			cout << 'S';
		}
	}

	return 0;
}
















