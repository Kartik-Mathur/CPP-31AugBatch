#ifndef merabst
#define merabst
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

#endif