#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
// template<typename T>
// class Graph {
// public:
// 	unordered_map<T, list<T> > adj;

// 	void addEdge(T u, T v, bool bidir = true) {
// 		adj[u].push_back(v);
// 		if (bidir) adj[v].push_back(u);
// 	}

// 	void print() {
// 		for (auto p : adj) {
// 			cout << p.first << " : ";
// 			for (auto neighbour : p.second) {
// 				cout << neighbour << " ";
// 			}
// 			cout << endl;
// 		}
// 	}
// };


class DSU {
public:
	int *parent, *size;
	int n;
	DSU(int N) {
		n = N + 1;
		parent = new int[n + 1];
		size = new int[n + 1];

		for (int i = 0; i <= n; ++i)
		{
			create_set(i);
			size[i] = 1;
		}
	}

	void create_set(int n) {
		parent[n] = n;
	}

	int get_set(int n) {
		if (parent[n] == n) return n;

		return parent[n] = get_set(parent[n]); // path compression, directly
		// leader ko parent banado aur tree ki length choti ho jaegi to find leader
	}

	void union_set(int u, int v) {
		int leader_u = get_set(u);
		int leader_v = get_set(v);

		if (leader_u != leader_v) {
			if (size[leader_v] > size[leader_u])  swap(leader_u, leader_v);

			parent[leader_v] = leader_u;
			size[leader_u] += size[leader_v];
		}
	}
};


int main() {
	int n, edges;
	cout << "Enter number of nodes and edges: ";
	cin >> n >> edges;
	bool isCyclePresent = false;

	DSU d(n);
	for (int i = 0; i < edges; ++i)
	{
		int u, v;
		cin >> u >> v;

		int leader_u = d.get_set(u);
		int leader_v = d.get_set(v);

		if (leader_v == leader_u) {
			isCyclePresent = true;
			break;
		}

		d.union_set(leader_u, leader_v);
	}

	if (isCyclePresent) cout << "Cyclic Graph\n";
	else cout << "Not Cyclic Graph\n";


	return 0;
}
















