#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node(string &s, int k) {
		key = s;
		value = k;
		next = NULL;
	}
};

class hashmap {
	int hashFunction(string &key) {
		// key ko integer mei convert krna
		int ans = 0, mul = 1;
		for (int i = 0; i < key.size(); ++i)
		{
			ans += (mul % ts) * (key[i] % ts);
			ans %= ts;
			mul *= 29;
			mul %= ts;
		}
		return ans % ts;
	}

	void rehash() {
		node** olda = a;
		int oldts = ts;
		a = new node*[2 * ts];
		ts *= 2;
		for (int i = 0; i < ts; ++i) a[i] = NULL;
		cs = 0;

		for (int i = 0; i < oldts; ++i)
		{
			node* head = olda[i];
			while (head) {
				insert(head->key, head->value);
				node* prevHead = head;
				head = head->next;

				delete prevHead;
			}
		}
	}
public:
	node** a;
	int ts;
	int cs; // To calculate the load_factor(Table kitni fill hui hai so that we
	// can double when its 60% full)

	hashmap(int s = 4) {
		a = new node*[s];
		ts = s;
		for (int i = 0; i < ts; ++i) a[i] = NULL;
		cs = 0;
	}

	void insert(string key, int value) {
		// To insert key and value
		int index = hashFunction(key);
		node* n = new node(key, value);
		n->next = a[index];
		a[index] = n;
		cs++;

		float load_factor =  cs / (1.0 * ts);
		if (load_factor >= 0.6) {
			rehash(); // Double karna apne table ko
		}
	}

	node* search(string key) {
		// To return the key and value
		node* head = a[hashFunction(key)];
		while (head) {
			if (head->key == key) return head;
			head = head->next;
		}

		return NULL;
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			node* head = a[i];
			cout << i << " : ";

			while (head) {
				cout << "(" << head->key << ", " << head->value << ") ";

				head = head->next;
			}
			cout << endl;
		}
	}

	int& operator[](string key) {
		node* ans = search(key);
		if (!ans) {
			insert(key, -1); // Abhi kisi bhi value ke saath add kardo

			ans = search(key); // Nahi tha toh insert krke search kar lia
			// key available toh vo add krdi, value nahi thi toh kuch bhi
			// value daal do for now
		}

		return ans->value;
	}

};

int main() {

	hashmap h;


	h["Mango"] = 120; // Insertion
	h.insert("Kiwi", 50);
	h["Kiwi"] = 80; // Updation
	h.insert("Apple", 150);
	cout << h["Apple"] << endl; // Searching
	h.print();


	node* ans = h.search("mango");
	if (ans) {
		cout << "Found " << ans->key << ", " << ans->value << endl;
	}
	else {
		cout << "Not Found\n";
	}



	return 0;
}


















