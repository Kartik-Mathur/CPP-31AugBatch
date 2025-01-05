#include <iostream>
#include <queue>
using namespace std;
#include "treeNode.h"
#include "treeinput.h"
#include "buildBST.h"

class Linkedlist {
public:
	node* head, *tail;
};

Linkedlist bstToLL(node* root) {
	// base case
	if (!root) return {NULL, NULL};

	// recursive case
	if (root->left and root->right) {
		Linkedlist left = bstToLL(root->left);
		Linkedlist right = bstToLL(root->right);

		left.tail->right = root;
		root->right = right.head;
		return {left.head, right.tail};
	}
	else if (root->left and !root->right) {
		Linkedlist left = bstToLL(root->left);
		left.tail->right = root;
		return {left.head, root};
	}
	else if (!root->left and root->right) {
		Linkedlist right = bstToLL(root->right);
		root->right = right.head;
		return {root, right.tail};
	}
	else {
		return {root, root};
	}
}

int main() {
	node* root = createTree();

	Linkedlist l = bstToLL(root);

	node* head = l.head;
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";

	return 0;
}
















