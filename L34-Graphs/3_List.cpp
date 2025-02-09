#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l; // Doubly-linkedlist
	// forward_list<int> l; // Singly-linkedlist


	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	l.push_front(4);
	l.push_front(5);
	l.push_front(6);

	// To print linkedList we use for-each loop only
	// to iterate over any container we need an iterator
	// list<int>::iterator it; // Iterator store karta hai addresses ko
	// it++; It goes to the next node

	for (list<int>::iterator it = l.begin(); it != l.end() ; it++) {
		cout << *it << "--> ";
	}
	cout << "NULL\n";


	for (auto it1 = l.begin(); it1 != l.end() ; it1++) {
		cout << *it1 << "--> ";
	}
	cout << "NULL\n";

	// For-each loop
	for (auto d : l) {
		cout << d << "--> ";
	}
	cout << "NULL\n";








	return 0;
}
















