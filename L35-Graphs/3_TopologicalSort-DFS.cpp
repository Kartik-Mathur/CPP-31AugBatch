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

	void helper(T src, list<T> &l, unordered_map<T, bool> &visited) {
		visited[src] = true;

		// Pehle saare bacho ka kaam karna hai
		for (auto ch : adj[src]) {
			if (!visited[ch]) {
				helper(ch, l, visited);
			}
		}

		// Last mei src node ko front mei insert kar dena list l ke andar
		l.push_front(src);
	}

	void tps() {
		list<T> l;
		unordered_map<T, bool> visited;

		for (auto p : adj) {
			if (!visited[p.first]) {
				helper(p.first, l, visited);
			}
		}

		for (auto e : l) {
			cout << e << " ";
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

	g.tps();




	return 0;
}
















