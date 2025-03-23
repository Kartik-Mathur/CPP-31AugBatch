#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> primes, a(100005);
int n, queries;

stack<int> S, A, B;

void primeOptimised() {
	vector<bool> x(100005, true);

	x[0] = x[1] = false;
	for (int i = 2; i * i <= 100000; ++i)
	{
		if (x[i]) {
			for (int j = i * i; j <= 100000; j += i)
			{
				x[j] = false;
			}
		}
	}

	for (int i = 0; i <= 100000; ++i)
	{
		if (x[i]) primes.push_back(i);
	}
}

void playingWithCards() {

	for (int i = 0; i < queries; ++i)
	{
		int no = primes[i];

		while (!S.empty()) {
			int top = S.top();
			S.pop();

			if (top % no == 0) {
				B.push(top);
			}
			else {
				A.push(top);
			}
		}

		while (!B.empty()) {
			cout << B.top() << endl;
			B.pop();
		}

		S = A;
		while (!A.empty()) {
			A.pop();
		}
	}


	while (!S.empty()) {
		cout << S.top() << endl;
		S.pop();
	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	primeOptimised();

	cin >> n;
	cin >> queries;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		S.push(a[i]);
	}

	playingWithCards();


	return 0;
}
















