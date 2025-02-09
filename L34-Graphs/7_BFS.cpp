#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

class Graph {
public:
	unordered_map<string, list<string> > adj;

	void addEdge(string u, string v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) { // For every pair p which belogs to adjacency list
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}

	void bfs(string src) {
		queue<string> q;
		unordered_map<string, bool> visited;

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
};

int main() {
	Graph g;
	g.addEdge("Modi", "Trump");
	g.addEdge("Modi", "Yogi");
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Pope", false);


	// g.print();
	g.bfs("Modi");



	return 0;
}
















