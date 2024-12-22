#include <iostream>
using namespace std;

class Vector {
public:
	int *a;
	int cs, ts;
	Vector(int s = 1) {
		a = new int[s];
		ts = s;
		cs = 0;
	}

	void push_back(int d) {
		if (cs == ts) {
			// We need to double the capacity
			int *olda = a;
			a = new int[2 * ts];
			ts = 2 * ts;
			for (int i = 0; i < cs; ++i)
			{
				a[i] = olda[i];
			}
			delete []olda;
		}

		a[cs] = d;
		cs++;
	}

	void pop_back() {
		if (cs > 0)cs--;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	int operator[](int i) {
		return a[i];
	}

};

int main() {

	Vector v;

	for (int i = 1; i <= 9; ++i)
	{
		v.push_back(i);
		cout << "Inserting " << i << ", size: " << v.size() << ", capacity: " << v.capacity() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}
















