#include<iostream>
using namespace std;
int main() {
	int z = 0;
	int n;
	cin >> n;
	char str[n];
	cin >> str;
	int i = 0;
	while (i < n) {
		int k = 0;
		int j = i;
		while (j < n and k == 0) {
			int num = 0;
			int a = i;
			while (a <= j) {
				num = num * 10 + (str[a] - '0');
				a++;
			}
			if (num != 0 and num != 1) {
				if ((num % 2 != 0 and num % 3 != 0 and num % 5 != 0 and num % 7 != 0 and num % 11 != 0 and num % 13 != 0 and num % 17 != 0 and num % 23 != 0 and num % 29 != 0 and num % 19 != 0 ) || num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 19 || num == 23 || num == 29 )	{
					z++;
					k = 1;
					i = j + 1;
					break;
				}
			}
			if (k == 0) {
				j++;
			}
		}
		if (k == 0) {
			i++;
		}
	}
	cout << z;
	return 0;
}
