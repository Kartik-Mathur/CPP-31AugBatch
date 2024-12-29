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

class Queue {
	node* head, *tail;
public:
	Queue() {
		head = tail	= NULL;
	}

	void push(int d) {
		if (!head) {
			head = tail = new node(d);
		}
		else {
			node* n = new node(d);
			tail->next = n;
			tail = n;
		}
	}

	void pop() {
		if (!head) return;
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}
};

int main() {


	return 0;
}
















