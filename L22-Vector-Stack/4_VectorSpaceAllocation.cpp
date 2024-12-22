#include <iostream>
#include <vector>
using namespace std;

int main() {
	// vector<int> v(no_of_buckets, value_in_each_bucket);
	int n;
	cin >> n;

	vector<int> v(n, 0);

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}

	cout << v.size() << ", " << v.capacity() << endl;
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















