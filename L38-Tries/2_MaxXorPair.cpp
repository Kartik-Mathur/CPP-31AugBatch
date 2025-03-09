#include <iostream>
using namespace std;

class node {
public:
	int no;
	node* left, *right;
	node() {
		left = right = NULL;
	}
};

class Trie {
public:
	node * root;
	Trie() {
		root = new node();
	}

	void addNumber(int N) {
		node* temp = root;
		for (int i = 30; i >= 0; --i)
		{
			if (N & (1 << i)) {
				if (!temp->right) {
					node* n = new node();
					temp->right = n;
				}

				temp = temp->right;
			}
			else {
				if (!temp->left) {
					node* n = new node();
					temp->left = n;
				}

				temp = temp->left;
			}
		}

		temp -> no = N;
	}

	int doosraNumber(int N) {
		node* temp = root;
		for (int i = 30; i >= 0; --i)
		{
			int bit = (N & (1 << i)) ? 1 : 0; // N mei bit 1 hai ya 0 pata lagaya
			if (bit == 1) {
				if (temp->left) temp = temp->left; // left means 0
				else temp = temp->right;
			}
			else { // bit ki value is 0
				if (temp->right) temp = temp->right; // right means 1
				else temp = temp->left;
			}
		}

		return temp->no;
	}


	int maxXorPair(int *a, int n) {
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int N = a[i];
			addNumber(N);
			int no = doosraNumber(N);
			ans = max(ans, N ^ no);
		}

		return ans;
	}
};

int main() {
	int a[] = {1, 2, 3, 5};
	int n = sizeof(a) / sizeof(int);

	Trie t;

	int ans = t.maxXorPair(a, n);

	cout << ans << endl;


	return 0;
}
















