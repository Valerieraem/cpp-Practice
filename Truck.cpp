#include "Truck.h"
#include <string>
#include <iostream>
using namespace std;


Truck::Truck() : Vehicle("none","Ford",4){
	load_capacity = 0;
	towing_capacity = 0;
}

Truck::Truck(string owner, string manufact, int numCyl, double load, double towing):Vehicle(owner, manufact, numCyl) {
	load_capacity = load;
	towing_capacity = towing;
}

void Truck::setLoad(double load) {
	load_capacity = load;
}

double Truck::getLoad() {
	return load_capacity;
}

void Truck::setTowing(double towing) {
	towing_capacity = towing;
}

int Truck::getTowing() {
	return towing_capacity;
}

ostream & operator<<(ostream & out_stream, const Truck & truck_object) {
	// TODO: insert return statement here
	//return value of truck object's variables 
	//load, towing, etc.
	out_stream << truck_object.load_capacity << endl
		<< truck_object.towing_capacity << endl;
	return out_stream;
}
