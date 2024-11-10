#include <iostream>
using namespace std;

////////////////// BLUEPRINT ////////////////////////////
class Car {
public:
	char *name;
	int price;
	int seats;
	int model;
	const int tyres; // These variables can only be initialised
	static int count;

	Car(): tyres(4) {
		cout << "Inside Default Constructor\n";
		name = NULL;
		count++;
	}

	Car(char *name, int price, int seats, int model): tyres(4)  {
		cout << "Inside Parameterized Constructor\n";
		name = new char [strlen(this->name) + 1];
		strcpy(this->name, name);
		this->price = price;
		this->model = model;
		this->seats = seats;
		count++;
	}

	Car(const Car &X): tyres(4) {
		cout << "Inside Copy Constructor\n";
		name = new char [strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		seats = X.seats;
		count++;
	}


	void print() {
		cout << "Name    :" << name << endl;
		cout << "Price   :" << price << endl;
		cout << "Model   :" << model << endl;
		cout << "Tyres   :" << tyres << endl;
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
		count--;
	}
};
////////////////// BLUEPRINT ////////////////////////////

// Scope resolution operator ::
int Car::count = 0;


int main() {
	Car A;
	// strcpy(A.name, "BMW");
	char name[] = "BMW";
	A.setName(name);
	A.price = 100;
	A.seats = 5;
	A.model = 2020;

	Car B = A; // Copy Constructor
	Car C = A;

	A.print();
	B.print();
	C.print();

	cout << "Total Cars: " << Car::count << endl;
	cout << "Total Cars: " << A.count << endl;


	return 0;
}
















