#include <iostream>
using namespace std;

int main() {
	int rows = 4, cols = 4;

	int **a = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		a[i] = new int[cols];
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i][j] = i + j;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	// To free memory
	for (int i = 0; i < rows; ++i)
	{
		delete []a[i];
	}

	delete [] a;
	a = NULL;


	return 0;
}
















