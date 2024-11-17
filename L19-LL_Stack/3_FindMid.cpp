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

node* findMid(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* f = head->next;
	node* s = head;

	while (f != NULL and f->next != NULL) {
		f = f->next->next;
		s = s->next;
	}

	return s;
}

int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);
	insertAtEnd(head, tail, 8);
	// insertAtEnd(head, tail, 9);

	printLL(head);

	node* mid = findMid(head);
	if (mid) {
		cout << mid->data << endl;
	}
	else {
		cout << "Mid not present\n";
	}


	return 0;
}
















