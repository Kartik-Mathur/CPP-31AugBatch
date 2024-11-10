#include <iostream>
using namespace std;

int main() {

	int b;


	int *a = new int;
	*a = 10;
	cout << *a << endl;

	// Array
	int *arr  = new int[10];

	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// To free the memory
	delete a;
	a = NULL;

	// delete[] arr;
	// arr = NULL;

	arr = new int[20];
	for (int i = 0; i < 20; ++i)
	{
		arr[i] = 10 * i + 1;
	}

	for (int i = 0; i < 20; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;



	return 0;
}
















