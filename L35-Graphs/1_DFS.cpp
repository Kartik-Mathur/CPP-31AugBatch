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

	int SSSP(T src, T des) {
		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		queue<T> q;
		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;

		while (!q.empty()) {
			auto n = q.front();
			q.pop();

			for (auto neighbour : adj[n]) {
				if (!visited[neighbour]) {
					q.push(neighbour);
					visited[neighbour] = true;
					parent[neighbour] = n;
					dist[neighbour] = dist[n] + 1;
				}
			}
		}


		for (auto p : dist) {
			cout << "Distance of " << src << " from " << p.first << " : " << p.second << endl;
		}

		int ans = dist[des];

		// Printing the shortest path from des to src
		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des	<< endl;

		return ans;
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


	cout << g.SSSP('A', 'F') << endl;




	return 0;
}
















