#include <iostream>
using namespace std;

int main() {

	char a[10000] = "Hello";
	char b[] = "World";
	/*
	int len_a = strlen(a);
	int len_b = strlen(b);

	int i = len_a, j = 0;
	while (j <= len_b) {
		a[i] = b[j];
		i++;
		j++;
	}

	*/
	strcat(a, b); // Inbuilt

	cout << a << endl;

	return 0;
}
















