#include <iostream>
#include <algorithm>
using namespace std;
string a_copy;

void permutations(string ip, string &op) {
	// base case
	if (ip.size() == 0) {
		if (a_copy < op) {
			cout << op << endl;
		}

		return;
	}
	// recursive case
	for (int j = 0; j != ip.size(); ++j)
	{
		char ch = ip[j];
		op.push_back(ch);
		permutations(ip.substr(0, j) + ip.substr(j + 1) , op);
		op.pop_back();
	}
}

int main() {

	string a ;
	cin >> a;

	a_copy = a;

	sort(a.begin(), a.end());
	string op = "";
	permutations(a, op);

	return 0;
}
















