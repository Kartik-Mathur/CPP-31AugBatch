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


int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void breakCycle(node* head, node* f) {
	node* s = head;
	node* fp = head;

	while (fp->next != f) {
		fp = fp->next;
	}

	while (s != f) {
		s = s->next;
		f = f->next;
		fp = fp->next;
	}

	fp->next = NULL;
}

bool isCyclic(node* head) {
	node* f, *s;
	s = f = head;
	while (f and f->next) {
		f = f->next->next;
		s = s->next;
		if (f == s) {
			breakCycle(head, f);
			return true;
		}
	}

	return false;
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

	tail->next = head->next->next;
	// printLL(head);

	if (isCyclic(head)) {
		cout << "Cycle Present\n";
	}
	else {
		cout << "Cycle Not Present\n";
	}

	printLL(head);





	return 0;
}
















