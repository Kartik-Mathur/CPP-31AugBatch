#include <iostream>
#include <queue>
using namespace std;
#include "treeNode.h"
#include "treeinput.h"

node* insertInBST(node* root, int data) {
	if (!root) {
		root = new node(data);
		return root;
	}

	if (root->data > data) {
		root->left = insertInBST(root->left, data);
		return root;
	}
	else {
		root->right = insertInBST(root->right, data);
		return root;
	}
}

node* createTree() {
	node* root = NULL;

	int data;
	cin >> data;
	while (data != -1) {

		root = insertInBST(root, data);

		cin >> data;
	}

	return root;
}

void printRange(node* root, int k1, int k2) {
	if (!root) return;

	if (root->data >= k1 and root->data <= k2) cout << root->data << " ";

	if (root->data > k2) printRange(root->left, k1, k2);
	else if (root->data < k1) printRange(root->right, k1, k2);
	else { // root->data >= k1 and root->data <=k2
		printRange(root->left, k1, k2);
		printRange(root->right, k1, k2);
	}
}



int main() {

	node* root = createTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	// levelOrderTraversal(root);
	printRange(root, 2, 8);

	return 0;
}
















