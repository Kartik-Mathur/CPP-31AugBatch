#include <iostream>
using namespace std;

int main() {
	pair<string, int> p = {"Mango", 100};
	cout << p.first << ", " << p.second << endl;

	/*
	pair<string, int> p = make_pair("Mango", 100);
	pair<string, int> p1 = p;
	cout << p.first << ", " << p.second << endl;
	cout << p1.first << ", " << p1.second << endl;
	*/

	/*
	pair<string, int> p = make_pair("Mango", 100);
	cout << p.first << ", " << p.second << endl;
	*/

	/*
	pair<string, int> p({"Mango", 100});
	cout << p.first << ", " << p.second << endl;
	*/

	/*
		pair<string, int> p;
		p.first = "Mango";
		p.second = 100;
		cout << p.first << ", " << p.second << endl;
	*/



	return 0;
}
















