#include <iostream>
using namespace std;

class DSU {
public:
	int *parent, *rank;
	int n;
	DSU(int N) {
		n = N + 1;
		parent = new int[n + 1];
		rank = new int[n + 1];

		for (int i = 0; i <= n; ++i)
		{
			create_set(i);
			rank[i] = 1;
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
			if (rank[leader_v] > rank[leader_u])  swap(leader_u, leader_v);

			parent[leader_v] = leader_u;
			if (rank[leader_u] == rank[leader_v]) rank[leader_u]++;
		}
	}
};


int main() {

	DSU d(5);



	return 0;
}
















