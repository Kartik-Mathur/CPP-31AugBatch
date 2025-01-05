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

int treeMin(node* root) {
	if (!root) return INT_MAX;

	int left_min = treeMin(root->left);
	int right_min = treeMin(root->right);
	return min(root->data, min(left_min, right_min));
}

int treeMax(node* root) {
	if (!root) return INT_MIN;

	int left_min = treeMax(root->left);
	int right_min = treeMax(root->right);
	return max(root->data, max(left_min, right_min));
}

bool isBST(node* root) {
	if (!root) return true;

	int left_max = treeMax(root->left);
	int right_min = treeMin(root->right);
	if (root->data < left_max || root->data > right_min) return false;

	// Yaha par aa gaye ka matlab hai root->data >= left_max and root->data <= right_min

	bool isBSTLeft = isBST(root->left); // Kya left BST hai
	bool isBSTRight = isBST(root->right); // Kya right BST hai
	return isBSTLeft and isBSTRight;
}

bool isBSTFast(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	if (!root)return true;

	if (root->data >= mi and root->data <= mx and isBSTFast(root->left, mi, root->data) and
	        isBSTFast(root->right, root->data, mx))return true;
	else return false;
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
	if (isBST(root)) cout << "BST hai\n";
	else cout << "BST nahi hai\n";

	if (isBSTFast(root)) cout << "BST hai\n";
	else cout << "BST nahi hai\n";


	return 0;
}
















