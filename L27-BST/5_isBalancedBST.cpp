#include <iostream>
#include <queue>
using namespace std;
#include "treeNode.h"
#include "treeinput.h"
#include "buildBST.h"

class Pair {
public:
	int height;
	bool isBalanced;
};

Pair isBalancedBST(node* root) {
	if (!root) return {0, true};

	Pair left = isBalancedBST(root->left);
	Pair right = isBalancedBST(root->right);

	Pair p;
	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.isBalanced and right.isBalanced)
		p.isBalanced = true;
	else p.isBalanced = false;
	return p;
}


int main() {
	node* root = createTree();

	Pair ans = isBalancedBST(root);
	cout << "Height: " << ans.height << endl;
	cout << "Balanced: " << ans.isBalanced << endl;
	// preorder(root);
	// cout << endl;
	// inorder(root);
	// cout << endl;
	// postorder(root);
	// cout << endl;




	return 0;
}
















