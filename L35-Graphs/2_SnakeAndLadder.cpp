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
	Graph<int> g;

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice;
			v += board[v]; // Jis bhi v par pahunche waha jo bhi board mei value hai
			// usse bhi add krlo to ensure snake and ladder wala part

			g.addEdge(u, v, false);
		}
	}

	cout << g.SSSP(0, 36) << endl;



	return 0;
}
















