#include <iostream>
using namespace std;

////////////////// BLUEPRINT ////////////////////////////
class Car {
public:
	// Data members
	char *name;
	int price;
	int seats;
	int model;

	// 1. Default Constructor
	Car() {
		cout << "Inside Default Constructor\n";
		name = NULL;
	}

	// 2. Parameterized Constructor
	Car(char *a, int p, int s, int m) {
		cout << "Inside Parameterized Constructor\n";
		name = new char [strlen(a) + 1];
		strcpy(name, a);
		price = p;
		model = m;
		seats = s;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		// name = X.name;
		name = new char [strlen(X.name) + 1];
		strcpy(name, X.name);

		price = X.price;
		model = X.model;
		seats = X.seats;
	}

	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator\n";
		name = X.name;
		// if (name != NULL) {
		// 	delete[]name;
		// }
		// name = new char[strlen(X.name) + 1];
		// strcpy(name, X.name);

		price = X.price;
		model = X.model;
		seats = X.seats;
	}


	void print() {
		cout << "Name    :" << name << endl;
		cout << "Price   :" << price << endl;
		cout << "Model   :" << model << endl;
		cout << "Seats   :" << seats << endl << endl;
	}

	void setName(char*a) {
		if (name != NULL) {
			delete[]name;
		}
		name = new char[strlen(a) + 1];
		strcpy(name, a);
	}

	~Car() {
		cout << "Deleting: " << name << endl;
	}

};
////////////////// BLUEPRINT ////////////////////////////


int main() {
	Car A;
	// strcpy(A.name, "BMW");
	A.setName("BMW");
	A.price = 100;
	A.seats = 5;
	A.model = 2020;

	Car B = A; // Copy Constructor

	B.name[0] = 'T';
	A.print();
	B.print();


	return 0;
}
















