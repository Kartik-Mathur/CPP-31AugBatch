#include <iostream>
#include <set>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {

public:
	unordered_map<T, list< pair< T, int> > > adj;

	void addEdge(T u, T v, int d, bool bidir = true) {
		adj[u].push_back({v, d});
		if (bidir)adj[v].push_back({u, d});
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto p1 : p.second) {
				cout << "(" << p1.first << ", " << p1.second << ") ";
			}
			cout << endl;
		}
	}

	void dijkstra(T src, T des) {
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;

		// Mark all nodes distance as INT_MAX
		for (auto p : adj) distance[p.first] = INT_MAX;
		// src ka parent src hi hoga, and uska distance src se 0 hoga
		distance[src] = 0;
		parent[src] = src;

		set<pair<int, T> > s; // Pehle distance and then node hai
		s.insert({0, src}); // Humesha pair mei first wali ke basis par sorting hogi

		while (!s.empty()) {
			auto f = *(s.begin());
			s.erase(s.begin());

			auto par = f.second;
			auto cd = f.first;

			for (auto p : adj[par]) {
				auto ngh = p.first;
				int edgeD = p.second;

				if (cd + edgeD < distance[ngh]) {
					// Agar ngh tak jaane ka shorter distance mill gya
					// Toh means we need to remove it from set too, and
					// insert the updated value of ngh in set
					auto t = s.find({distance[ngh], ngh});

					if (t != s.end()) s.erase(t); // Agar hai toh hata do
					distance[ngh] = cd + edgeD;
					s.insert({cd + edgeD, ngh});
					parent[ngh] = par;
				}
			}
		}


		// Print the shortest distance to all nodes
		for (auto p : distance) {
			cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		}

		while (des != parent[des]) {
			cout << des << "<--";
			des = parent[des];;
		}
		cout << des << endl;
	}
};

int main() {

	Graph <char> g;

	g.addEdge('A', 'B', 1);
	g.addEdge('C', 'B', 2);
	g.addEdge('C', 'D', 3);
	g.addEdge('A', 'D', 8);
	g.addEdge('A', 'C', 10);

	g.dijkstra('A', 'D');

	return 0;
}
















