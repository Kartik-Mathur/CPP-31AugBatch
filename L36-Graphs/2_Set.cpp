#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int> s;

	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);
	// printing
	for (auto e : s) {
		cout << e << " ";
	}
	cout << endl;

	// search
	auto x = s.find(14);

	if (x != s.end()) {
		cout << *x << endl;
	}
	else {
		cout << "Not Found\n";
	}

	while (!s.empty()) {
		auto x = s.begin();

		cout << *x << "-";
		s.erase(x); // erase ke through we can delete an element
	}

	// We cannot update inside a set
	// 1. Find the element
	// 2. Delete the element
	// 3. Insert again




	return 0;
}
















