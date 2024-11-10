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
};
////////////////// BLUEPRINT ////////////////////////////


int main() {

	Car A; // A is an object of class Car
	strcpy(A.name, "BMW");
	A.price = 100;
	A.seats = 5;
	A.model = 2020;

	cout << "Name    :" << A.name << endl;
	cout << "Price   :" << A.price << endl;
	cout << "Model   :" << A.model << endl;
	cout << "Seats   :" << A.seats << endl;

	Car B;
	strcpy(B.name, "Audi");
	B.price = 200;
	B.seats = 4;
	B.model = 2021;

	cout << "Name    :" << B.name << endl;
	cout << "Price   :" << B.price << endl;
	cout << "Model   :" << B.model << endl;
	cout << "Seats   :" << B.seats << endl;


	return 0;
}
















