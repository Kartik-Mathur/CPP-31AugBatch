#include <iostream>
using namespace std;

////////////////// BLUEPRINT ////////////////////////////
class Car {
public:
	// Data members
	char name[100];
	int price;
	int seats;
	int model;

	// Functions
	// 1. Default Constructor
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// 2. Parameterized Constructor
	Car(char *a, int p, int s, int m) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, a);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. Copy Assignment Operator
	// C = B, C already bana hai and B bhi already created hai
	// We are update values of C with object B
	void operator=(Car X) {
		// name, price, model, seats: C
		// X.name, X.price, X.model, X.seats: B
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	// 4. Destructor
	~Car() {
		cout << "Destroying Object: " << name << endl;
	}

	// Operator overloading
	bool operator>(Car &X) {
		return price > X.price;
	}

	// print
	void print() {
		cout << "Name    :" << name << endl;
		cout << "Price   :" << price << endl;
		cout << "Model   :" << model << endl;
		cout << "Seats   :" << seats << endl << endl;
	}
};
////////////////// BLUEPRINT ////////////////////////////



int main() {
	Car A; // A is an object of class Car
	strcpy(A.name, "BMW");
	A.price = -100;
	A.seats = 5;
	A.model = 2020;

	char name[] = "Audi";
	Car B(name, 200, 4, 2022);

	// New object banana from already created Object: Copy Constructor
	Car C = A;
	// or Car C (A);


	// Already bane huye object ki details ko update karna
	C = B;

	// Operator overloading: Kisi bhi operator ki functionality ko update kar
	// sakte hai
	if (C > A) {
		cout << "C is expensive\n";
	}
	else
	{
		cout << "A is expensive\n";
	}


	A.print();
	B.print();
	C.print();


	return 0;
}
















