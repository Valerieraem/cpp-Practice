#include "Vehicle.h"
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;


Vehicle::Vehicle() {
	man_name = "none";
	num_cyl = 4;
	owner = Person();
}

Vehicle::Vehicle(string ownerName, string setman_name, int setnum_cyl) : owner(ownerName) {
	owner = Person(ownerName);
	man_name = setman_name;
	num_cyl = setnum_cyl;
}

string Vehicle::getManufacturer() {
	return man_name;
}

void Vehicle::setManufacturer(string setman_name) {
	man_name = setman_name;
}

Person Vehicle::getOwner() {
	return owner;
}

void Vehicle::setOwner(Person owner1) {
	owner = owner1;
}

int Vehicle::getCylinders() {
	return num_cyl;
}

void Vehicle::setCylinders(int setnum_cyl) {
	num_cyl = setnum_cyl;
}

ostream & operator<<(ostream & out_stream, const Vehicle & vehicle_object) {
	// TODO: insert return statement here
	//return all values of a vehicle object based on the name of the passed vehicle from main
	out_stream << vehicle_object.owner
		<< vehicle_object.man_name << endl
		<< vehicle_object.num_cyl << endl;
	return out_stream;
}
