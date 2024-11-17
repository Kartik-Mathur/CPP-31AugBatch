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

node* mergeSort(node* a) {
	// base case
	if (a == NULL || a->next == NULL) {
		return a;
	}

	// recursive case
	// 1. Divide
	node* mid = findMid(a);
	node* b = a;
	node* c = mid->next;
	mid->next = NULL;

	// 2. Sort
	b = mergeSort(b);
	c = mergeSort(c);

	// 3. Merge
	node* nH = mergeSortedLL(b, c);
	return nH;
}


int main() {

	node* head = NULL, *tail = NULL;
	node* head1 = NULL, *tail1 = NULL;

	insertAtEnd(head, tail, 5);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 0);
	insertAtEnd(head, tail, 3);
	insertAtEnd(head, tail, 4);
	printLL(head);
	head = mergeSort(head);
	printLL(head);




	return 0;
}
















