#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		cout << src << " ";
		visited[src] = true;

		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				dfsHelper(ch, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool> visited;

		dfsHelper(src, visited);
		int components = 1;

		for (auto p : adj) {
			if (!visited[p.first]) {
				dfsHelper(p.first, visited);
				components++;
			}
		}

		cout << "\nTotal components: " << components << endl;
	}


};

int main() {
	Graph<char> g;

	g.addEdge('A', 'B');
	g.addEdge('D', 'B');
	g.addEdge('A', 'C');
	g.addEdge('D', 'C');
	g.addEdge('E', 'C');
	g.addEdge('E', 'D');
	g.addEdge('E', 'F');
	g.addEdge('H', 'I');


	g.dfs('A');




	return 0;
}
















