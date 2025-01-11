#include <iostream>
#include <queue>
#include <functional> // for greater<int>, less<int> function 
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// Minheap
	// priority_queue<int, vector<int>, greater<int> > h;
	// Maxheap
	// priority_queue<int> h;
	priority_queue<int, vector<int>, less<int> > h;
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
















