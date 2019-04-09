#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Vehicle {
public: 
	Vehicle();
	Vehicle(string ownerName, string setman_name, int setnum_cyl);
	Person owner;

	string getManufacturer();
	void setManufacturer(string setman_name);

	Person getOwner();
	void setOwner(Person(owner1));

	int getCylinders();
	void setCylinders(int setnum_cyl);

	friend ostream& operator <<(ostream& out_stream, const Vehicle& vehicle_object);

private:
	string man_name;
	int num_cyl;
};


