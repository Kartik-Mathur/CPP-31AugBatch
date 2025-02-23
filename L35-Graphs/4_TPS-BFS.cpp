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

	void tps_bfs() {
		unordered_map<T, int> indegree;
		// Calculating Indegree of all nodes
		for (auto p : adj) {
			for (auto ch : adj[p.first]) {
				if (indegree.count(ch) == 0) {
					indegree[ch] = 1;
				}
				else indegree[ch]++;
			}
		}
		// Insert inside queue all the nodes that have indegree zero
		queue<T> q;
		for (auto p : adj) {
			if (indegree.count(p.first) == 0) {
				q.push(p.first);
			}
		}
		// Iterate over the children of front queue element, and reduce their indegree, if its zero
		// add those elements to queue
		while (!q.empty()) {
			auto f = q.front();
			q.pop();
			cout << f << " ";

			for (auto ch : adj[f]) {
				indegree[ch]--;
				if (indegree[ch] == 0) q.push(ch);
			}
		}

		cout << endl;
	}


};

int main() {
	Graph<string> g;

	g.addEdge("English", "Python" , false);
	g.addEdge("English", "C++" , false);
	g.addEdge("Hindi", "C++" , false);
	g.addEdge("Hindi", "Maths" , false);
	g.addEdge("Python", "Dev" , false);
	g.addEdge("C++", "Dev" , false);
	g.addEdge("C++", "Competitive" , false);
	g.addEdge("Competitive", "AI" , false);
	g.addEdge("Dev", "AI" , false);

	g.tps_bfs();




	return 0;
}
















