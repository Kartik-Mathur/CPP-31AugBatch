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

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}

	void bfsHelper(T src, unordered_map<T, bool> &visited) {
		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			auto n = q.front();
			q.pop();
			cout << n << " ";

			for (auto neighbour : adj[n]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
				}
			}
		}

		cout << endl;
	}


	void bfs(T src) {
		int components = 1;
		unordered_map<T, bool> visited;

		bfsHelper(src, visited);

		for (auto p : adj) {
			if (!visited[p.first]) {
				bfsHelper(p.first, visited);
				components++;
			}
		}

		cout << "Total components: " << components << endl;
	}
};

int main() {
	Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(5, 3);
	g.addEdge(0, 4);
	g.addEdge(10, 14);


	g.bfs(0);




	return 0;
}
















