#include <iostream>
using namespace std;

void init_2d(int a[][10], int n, int m) {
	int number = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number++;
		}
	}
}

void print_2d(int a[][10], int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void spiralPrint(int a[][10], int n, int m) {
	int sr = 0, sc = 0, er = n - 1, ec = m - 1;

	while (sr <= er and sc <= ec) {
		// 1. Print sr from [sc,ec]
		for (int col = sc; col <= ec; ++col)
		{
			cout << a[sr][col] << " ";
		}
		sr++;

		// 2.  Print ec from [sr,er]
		for (int row = sr; row <= er; ++row)
		{
			cout << a[row][ec] << " ";
		}
		ec--;

		if (er > sr) {
			// 3. Print er from [ec,sc]
			for (int col = ec; col >= sc; --col)
			{
				cout << a[er][col] << " ";
			}
			er--;
		}

		// 4. Print sc from [er, sr]
		if (ec > sc) {
			for (int row = er; row >= sr; --row)
			{
				cout << a[row][sc] << " ";
			}
			sc++;
		}
	}
	cout << endl;
}

int main() {
	int a[10][10], n, m;
	cout << "Enter row and col: ";
	cin >> n >> m;

	init_2d(a, n, m);
	print_2d(a, n, m);

	spiralPrint(a, n, m);



	return 0;
}
















