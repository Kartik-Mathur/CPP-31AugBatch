#include <iostream>
using namespace std;

int main() {

	int a[1000][1000];

	int n, m;
	cin >> n >> m;

	int number = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = number;
			number++;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int key;
	cout << "Enter key to search: ";
	cin >> key;
	bool isKeyFound = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key Found: " << i << ", " << j << endl;
				isKeyFound = true;
				break;
			}
		}

		if (isKeyFound) {// i ke loop se bahar nikal dega if key mill gai
			break;
		}
	}

	if (isKeyFound == false) {
		cout << "Key Not Found\n";
	}

	return 0;
}
















