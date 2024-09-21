#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	char ch;

	// initialisation
	cin >> ch; // Bahar ch ka input is important because
	// while loop ke andar hum ch!='$' tabhi kr skte hai jab ch mei garbage na ho
	while (ch != '$') { // condition check
		cnt++;

		cin >> ch; // updation
	}

	// cin ignores whitespace characters('\t','\n',' '), it means inhe ch ki
	// bucket ke andar daalega hi nahi
	cout << "Total characters: " << cnt << endl;




	return 0;
}
















