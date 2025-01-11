#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
	vector<int> v;
	void heapify(int i) {
		int l = 2 * i;
		int r = l + 1;
		int mi = i;

		if (l < v.size() and v[l] < v[mi]) mi = l;
		if (r < v.size() and v[r] < v[mi]) mi = r;

		if (i != mi) {
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}
public:
	MinHeap() {
		v.push_back(-1); // Block the 0th index
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;
		while (p > 0 and v[p] > v[c]) {
			swap(v[p], v[c]);
			c = p;
			p = p / 2;
		}
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapify(1);
	}

};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	MinHeap h;
	// Heap sort
	h.push(1);
	h.push(4);
	h.push(2);
	h.push(3);
	h.push(5);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

	return 0;
}
















