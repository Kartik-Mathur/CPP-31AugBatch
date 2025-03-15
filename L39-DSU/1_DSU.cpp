#include <iostream>
using namespace std;

class DSU {
public:
	int *parent;
	int n;
	DSU(int N) {
		n = N + 1;
		parent = new int[n + 1];

		for (int i = 0; i <= n; ++i)
		{
			create_set(i);
		}
	}

	void create_set(int n) {
		parent[n] = n;
	}

	int get_set(int n) {
		if (parent[n] == n) return n;

		return get_set(parent[n]);
	}

	void union_set(int u, int v) {
		int leader_u = get_set(u);
		int leader_v = get_set(v);
		if (leader_u != leader_v) {
			parent[leader_v] = leader_u;
		}
	}
};


int main() {

	DSU d(5);

	cout << d.get_set(1) << endl;
	cout << d.get_set(2) << endl;
	d.union_set(1, 2);
	cout << d.get_set(1) << endl;
	cout << d.get_set(2) << endl;

	return 0;
}
















