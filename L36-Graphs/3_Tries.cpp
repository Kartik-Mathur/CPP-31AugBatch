#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char data;
	unordered_map<char, node*> h;
	bool isWordEnd;

	node(char d) {
		data = d;
		isWordEnd = false;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node('\0');
	}

	void addWord(string word) {
		node* temp = root;

		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				node* n = new node(ch);
				temp->h[ch] = n;
			}

			temp = temp->h[ch];
		}

		temp->isWordEnd = true;
	}

	bool isWordPresent(string word) {
		node* temp = root;

		for (int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch) == 0) {
				return false;
			}

			temp = temp->h[ch];
		}

		return temp->isWordEnd;
	}
};


int main() {

	Trie t;

	t.addWord("Hello");
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coding");
	t.addWord("He");

	if (t.isWordPresent("Coders")) cout << "Present hai\n";
	else cout << "Present Nahi hai\n";

	return 0;
}
















