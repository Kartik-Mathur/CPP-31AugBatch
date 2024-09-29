#include <iostream>
using namespace std;

int sum(int a, int b) {
	int ans = a + b;
	return ans;
}

void helloWorld() {
	cout << "Hello World!!!!\n";
}

int main() {

	helloWorld();

	int ans = sum(10, 20);
	int ans1 = sum(11, 21);

	cout << "Sum: " << ans << endl;
	cout << "Sum: " << ans1 << endl;


	return 0;
}
















