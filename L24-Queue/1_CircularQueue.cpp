#include <iostream>
using namespace std;

class Queue {
	int *arr, cs, n;
	int f, r;
public:

	Queue(int s = 5) {
		cs = 0; // We have not inserted any elements inside queue yet
		n = s;
		arr = new int[n];
		f = 0;
		r = n - 1;
	}

	void push(int d) {
		if (cs < n) {
			r = (r + 1) % n;
			arr[r] = d;
			cs++;
		}
		else {
			cout << "Overflow\n";
		}
	}

	void pop() {
		if (cs > 0) {
			f = (f + 1) % n;
			cs--;
		}
		else {
			cout << "Underflow\n";
		}
	}

	int front() {
		return arr[f];
	}

	bool empty() {
		return cs == 0;
	}

};

int main() {

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);


	while (!q.empty()) {
		cout << q.front() << " ";

		q.pop();
	}
	cout << endl;

	return 0;
}
















