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

void reverseLL(node* &head) {
	node* p = NULL, *c = head, *n;

	while (c) {
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}

	head = p;
}


node* addLinkedList(node* a, int n, node* b, int m) {
	if (m > n) return addLinkedList(b, m, a, n);

	node* tempa = a;
	node* tempb = b;

	reverseLL(a);
	reverseLL(b);


	node* x = a;
	int carry = 0;

	while (a and b) {
		int ans = a->data + b->data + carry;

		a->data = ans % 10;
		carry = ans / 10;

		a = a->next;
		b = b->next;
	}

	if (carry and a) {
		int ans = carry + a->data;
		a->data = ans % 10;
		carry = ans / 10;
		if (carry) {
			a -> next = new node(1);
			a = a->next;
		}
	}
	else if (carry) {
		tempa -> next = new node(1);
		tempa = tempa->next;
		a = tempa;
	}
	reverseLL(x);
	return x;
}



int main() {

	node* head = NULL, *tail = NULL;
	node* head1 = NULL, *tail1 = NULL;
	int n;
	int m;

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		int d;
		cin >> d;
		insertAtEnd(head, tail, d);
	}

	for (int i = 0; i < m; ++i)
	{
		int d;
		cin >> d;
		insertAtEnd(head1, tail1, d);
	}

	node* x = addLinkedList(head, n, head1, m);

	printLL(x);



	return 0;
}
















