#include <iostream>
#include <queue>
#include <climits>
using namespace std;

queue<int> q[5];
int n, courseNumber, rollNumber;
int entryNumber[5];

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 1; i < 5; ++i)
	{
		entryNumber[i] = -1;
	}

	cin >> n;
	int currentEntryNumber = 1;

	for (int i = 0; i < n; ++i)
	{
		char ch;

		cin >> ch;
		if (ch == 'E') {
			cin >> courseNumber >> rollNumber;
			q[courseNumber].push(rollNumber);

			if (entryNumber[courseNumber] == -1) {
				entryNumber[courseNumber] = currentEntryNumber++;
			}
		}
		else { // Hoodie deni hai
			int indx = -1;
			int val = INT_MAX; // merko minimum entryNumber wala
			// course find karna hai
			for (int i = 1; i < 5; ++i)
			{
				if (entryNumber[i] != -1) {
					if (val > entryNumber[i]) {
						val = entryNumber[i];
						indx = i;
					}
				}
			}

			cout << indx << " " << q[indx].front() << endl;
			q[indx].pop();
			if (q[indx].size() == 0) entryNumber[indx] = -1;
		}
	}


	return 0;
}
















