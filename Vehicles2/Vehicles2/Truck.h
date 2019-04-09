#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
public: 
	Truck();
	Truck(string owner, string manufact, int numCyl, double load, double towing);
	
	void setLoad(double load);
	double getLoad();

	void setTowing(double towing);
	int getTowing();

	friend ostream& operator <<(ostream& out_stream, const Truck& truck_object);

private:
	double load_capacity; 
	int towing_capacity;

};