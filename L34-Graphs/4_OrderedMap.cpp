#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	// Hashmap takes input of pair
	map<string, int> h;

	h.insert({"Mango", 100});
	h.insert({"Papaya", 500});
	h.insert({"Guava", 600});

	h.insert(make_pair("Pineapple", 200));

	pair<string, int> p = {"Apple", 300};
	h.insert(p);

	h["Kiwi"] = 400;

	// Printing way-1: For-each
	// For every pair p which belongs to hashmap h
	for (pair<string, int> p : h) {
		cout << p.first << ", " << p.second << endl;
	}

	// Search
	if (h.count("mango")) {
		cout << "Found " << h["mango"] << endl;
	}
	else {
		cout << "Not Found\n";
	}





	return 0;
}












