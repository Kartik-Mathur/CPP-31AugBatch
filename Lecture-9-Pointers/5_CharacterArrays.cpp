#include <iostream>
using namespace std;

int main() {
	// 1. Initialisation
	// char a[1000] = "Welcome";
	char a[] = {'H', 'E', 'L', 'L', 'O', '\0'};


	cout << a << endl;


	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















