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
				// Node nhi hai toh insert karo
				node* n = new node(ch);
				temp->h[ch] = n;
			}


			temp = temp->h[ch];
		}

		temp->isWordEnd = true;
	}

	void printAllWords(string &s, node* temp) {
		if (!temp) return;

		if (temp->isWordEnd) cout << s << endl;

		for (auto p : temp->h) {
			s.push_back(p.first);
			printAllWords(s, p.second);
			s.pop_back();
		}
	}


	void autoFill(char* word) {
		node* temp = root;
		for (int i = 0; word[i]; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch)) temp = temp->h[ch];
			else return;
		}

		string s(word);
		printAllWords(s, temp);
	}
};


int main() {

	Trie t;

	t.addWord("Hello");
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coding");
	t.addWord("He");
	t.addWord("Her");

	t.autoFill("Code");


	return 0;
}
















