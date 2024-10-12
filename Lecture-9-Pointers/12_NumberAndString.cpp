#include <iostream>
using namespace std;

int main() {
	char a[100];
	int x;


	cin >> x;
	// cin.get(); // Ek character read karlo but kahi store mat karo
	cin.ignore();

	cin.getline(a, 100);// Default delimiter '\n'

	cout << "X : " << x << endl;
	cout << "a : " << a << endl;



	return 0;
}
















