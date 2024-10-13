#include <iostream>
using namespace std;

int main() {

	int a[10][10] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int n = 3, m = 3;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}
















