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

node* searchBST(node* root, int key) {
	if (!root) return NULL;

	if (root->data == key) return root;
	else if (root->data > key) return searchBST(root->left, key);
	return searchBST(root->right, key);
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
	node* ans = searchBST(root, 100);
	if (ans) cout << "FOUND: " << ans->data << endl;
	else cout << "Not Found\n";

	return 0;
}
















