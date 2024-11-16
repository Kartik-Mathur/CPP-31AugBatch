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

void insertAtBegin(node* &head, node* &tail, int data) {
	node* n = new node(data);

	if (head == NULL) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
}


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

int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtMid(node* &head, node*& tail, int data, int pos) {
	if (pos == 0) {
		insertAtBegin(head, tail, data);
	}
	else if (pos >= lengthLL(head)) {
		insertAtEnd(head, tail, data);
	}
	else {
		node* t = head;
		for (int i = 1; i <= pos - 1; ++i)
		{
			t = t->next;
		}
		node* n = new node(data);
		n->next = t->next;
		t->next = n;
	}
}

void deleteAtBegin(node* &head, node* &tail) {
	if (head == NULL) {
		return ;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else
	{
		node* t = head;
		head = head->next;
		delete t;
	}
}


void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return ;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* temp = head;
		while (temp->next != tail) {
			temp = temp->next;
		}

		delete tail;
		tail = temp;
		tail->next = NULL;
	}
}

void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}


int main() {

	node* head = NULL, *tail = NULL;

	insertAtBegin(head, tail, 1);
	insertAtBegin(head, tail, 2);
	insertAtBegin(head, tail, 3);
	insertAtBegin(head, tail, 4);
	insertAtBegin(head, tail, 5);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 7);

	insertAtMid(head, tail, 10, 4);
	printLL(head);

	deleteAtBegin(head, tail);
	printLL(head);

	deleteAtEnd(head, tail);
	printLL(head);

	return 0;
}
















