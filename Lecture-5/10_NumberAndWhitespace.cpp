#include <iostream>
using namespace std;

int main() {

	// Lets say we want to read a number and a character
	int a;
	char ch;

	cin >> a;
	cin.ignore(); // or cin.get();
	// Yeh space ya enter ko read kr lega, and kahi store nhi kia
	// toh ignore ho jaega vo character
	ch = cin.get();

	cout << "Integer: " << a << endl;
	if (ch == '\n') {
		cout << "User Entered enter\n";
	}
	else if (ch == ' ') {
		cout << "User Entered space\n";
	}
	else if (ch == '\t') {
		cout << "User Entered tab\n";
	}
	else {
		cout << "User Entered : " << ch << endl;
	}



	return 0;
}
















