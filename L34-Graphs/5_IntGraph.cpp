#include <iostream>
#include <list>
using namespace std;

class Graph {
public:
	list<int> *l;
	int n;
	Graph(int N) {
		n = N;
		l = new list<int> [n];
	}

	void addEdge(int u, int v, bool bidir = true) {
		l[u].push_back(v);
		if (bidir) l[v].push_back(u);
	}

	void print() {
		for (int i = 0 ; i < n; i++) {
			cout << i << ": ";
			for (auto neighbour : l[i]) {
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}
};

int main() {
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(3, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);

	g.print();



	return 0;
}
















