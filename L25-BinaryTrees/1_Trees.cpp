#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* buildTree() {
	// base case
	int d;
	cin >> d;
	if (d == -1) return NULL;

	// recursive case
	node * root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void preorder(node* root) {
	if (!root) return;

	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (!root) return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int countNodes(node* root) {
	if (root == NULL) return 0;

	return countNodes(root->left) + countNodes(root->right) + 1;
}

int height(node* root) {
	if (!root) return 0;

	return max(height(root->left), height(root->right)) + 1;
}

int diameter(node* root) {
	if (!root) return 0;

	int op1 = height(root->left) + height(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);

	return max(op1, max(op2, op3));
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	node* root = buildTree();
	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	cout << "Nodes Count " << countNodes(root) << endl;
	cout << "Tree Height " << height(root) << endl;

	return 0;
}
















