#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);

	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

node* mergeSortedLL(node* a, node* b) {
	if (a == NULL) return b;
	if (b == NULL) return a;

	node* nH;
	if (a -> data < b->data) {
		nH = a;
		nH -> next = mergeSortedLL(a->next, b);
		return nH;
	}
	else {
		nH = b;
		nH -> next = mergeSortedLL(a, b->next);
		return nH;
	}
}


int main() {

	node* head = NULL, *tail = NULL;
	node* head1 = NULL, *tail1 = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head1, tail1, 0);
	insertAtEnd(head1, tail1, 2);
	insertAtEnd(head1, tail1, 4);

	printLL(head);
	printLL(head1);

	node* nH = mergeSortedLL(head, head1);
	printLL(nH);




	return 0;
}
















