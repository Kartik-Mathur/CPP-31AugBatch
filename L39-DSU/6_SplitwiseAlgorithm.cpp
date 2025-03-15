#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {

	// 8 A B 200 A D 200 A E 300 D B 400 B C 100 D E 100 B E 200 C E 200
	multiset<pair<int, char> > s;

	map<char, int> debt;
	int n; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		char a, b; int amount;
		cin >> a >> b >> amount;
		debt[a] -= amount;
		debt[b] += amount;
	}

	for (auto p : debt) {
		s.insert({p.second, p.first});
	}


	for (auto p : s) {
		int amount = p.first;
		char person = p.second;
		cout << amount << ", " << person << endl;
	}

	// Splitwise Algorithm

	while (!s.empty()) {
		auto front = *(s.begin());
		auto end = *(prev(s.end()));

		s.erase(s.begin());
		s.erase(prev(s.end()));

		int amount_deni_hai = front.first;
		char amount_dene_wala_person = front.second;

		int amount_leni_hai = end.first;
		char amount_lene_wala_person = end.second;

		int min_amount = min(-amount_deni_hai, amount_leni_hai);
		cout << amount_dene_wala_person << " -> " << amount_lene_wala_person << " : " << min_amount << endl;

		if (-amount_deni_hai > amount_leni_hai) {
			s.insert({amount_deni_hai + amount_leni_hai, amount_dene_wala_person});
		}
		else if (-amount_deni_hai < amount_leni_hai) {
			s.insert({amount_deni_hai + amount_leni_hai, amount_lene_wala_person});
		}
	}

	return 0;
}
















