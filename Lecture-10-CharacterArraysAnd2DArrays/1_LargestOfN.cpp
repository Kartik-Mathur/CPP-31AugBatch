#include <iostream>
#include <cstring>
using namespace std;

void COPY(char *a, char *b) {
	// b[] ko a[] ke andar copy krdo
	int len_b = strlen(b);
	for (int i = 0; i <= len_b; ++i)
	{
		a[i] = b[i];
	}
}

int main() {

	char largest[1000], a[1000];
	int largest_len = 0;

	int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 1000);
		int len = strlen(a);
		if (len > largest_len) {
			largest_len = len;
			// COPY(largest, a);
			strcpy(largest, a); // Inbuilt
		}

	}

	cout << "Largest: " << largest << endl;
	cout << "Largest Len: " << largest_len << endl;

	return 0;
}
















