#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	v.reserve(10);

	cout << v.size() << ", " << v.capacity() << endl;

	for (int i = 1; i <= 11; ++i)
	{
		v.push_back(i);
		cout << "Inserting " << i << ", size: " << v.size() << ", capacity: " << v.capacity() << endl;
	}

	// cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















