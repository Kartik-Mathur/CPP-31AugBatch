#include <iostream>
using namespace std;

void printArray(int *freq) {
	for (int i = 0; i < 26; ++i)
	{
		cout << freq[i] << " ";
	}
	cout << endl;
}

int main() {

	char a[] = "abcaa";
	char b[] = "aacbad";

	int len_a = strlen(a);
	int len_b = strlen(b);

	int freq[26] = {0};

	for (int i = 0; i < len_a; ++i)
	{
		int indx = a[i] - 'a';
		// cout << "Char: " << a[i] << ", Index: " << indx << endl;
		freq[indx]++;
	}

	printArray(freq);

	for (int i = 0; i < len_b; ++i)
	{
		int indx = b[i] - 'a';
		// cout << "Char: " << a[i] << ", Index: " << indx << endl;
		freq[indx]--;
	}

	printArray(freq);

	// If all buckets are 0 in freq[] then permutation hoga
	bool isPermutation = true;
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			isPermutation = false;
			break;
		}
	}

	if (isPermutation)cout << "Yes\n";
	else cout << "No\n";


	return 0;
}
















