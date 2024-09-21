#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	char ch;

	// initialisation
	ch = cin.get(); // Bahar ch ka input is important because
	// while loop ke andar hum ch!='$' tabhi kr skte hai jab ch mei garbage na ho
	while (ch != '$') { // condition check
		cnt++;
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
		ch = cin.get(); // updation
	}

	// ch=cin.get(); will not ignore whitespace characters('\t','\n',' '),
	// it means inhe ch ki bucket ke andar daalega
	cout << "Total characters: " << cnt << endl;




	return 0;
}
















