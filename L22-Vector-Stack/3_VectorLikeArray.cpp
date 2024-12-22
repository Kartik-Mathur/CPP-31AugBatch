#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Initialization of vector
	// vector<int> v = {1, 2, 3, 4, 5};
	vector<int> v({1, 2, 3, 4, 5});

	cout << v.size() << ", " << v.capacity() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















