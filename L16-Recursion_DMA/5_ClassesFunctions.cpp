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
	A.price = 100;
	A.seats = 5;
	A.model = 2020;

	char name[] = "Audi";
	Car B(name, 200, 4, 2022);

	// New object banana from already created Object: Copy Constructor
	Car C = A;
	// or Car C (A);

	A.print();
	B.print();
	C.print();



	return 0;
}
















