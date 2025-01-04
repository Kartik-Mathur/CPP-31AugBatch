#include <iostream>
#include <queue>
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

	cout << root->data << ", ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root) {
	if (!root) return;

	inorder(root->left);
	cout << root->data << ", ";
	inorder(root->right);
}

void postorder(node* root) {
	if (root == NULL) return;

	postorder(root->left);
	postorder(root->right);
	cout << root->data << ", ";
}

void levelOrderTraversal(node* root) {
	if (!root) return;

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* f = q.front();
		q.pop();
		if (f) {
			cout << f->data << " ";
			if (f->left) q.push(f->left);
			if (f->right) q.push(f->right);
		}
		else {
			cout << endl;
			if (!q.empty()) q.push(NULL);
		}
	}
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

	levelOrderTraversal(root);

	return 0;
}
















