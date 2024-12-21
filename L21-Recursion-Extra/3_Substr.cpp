#include <iostream>
using namespace std;

int main() {

	string a = "abcdefg";

	int i = 6;

	char ch = a[i];

	// a.substr(index, number_of_characters);


	cout << a.substr(0, i) + a.substr(i + 1) << endl;
	cout << a << endl;
	return 0;
}
















