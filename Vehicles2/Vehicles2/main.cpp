#include "Truck.h"
#include "Person.h"
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;


int main() {
	Vehicle car;
	cout << car;

	string vehicle_name;
	cin >> vehicle_name;

	string setman_name;
	string ownerName;
	int setnum_cyl;

	cin >> ownerName;
	cin >> setman_name;
	cin >> setnum_cyl;
	Vehicle car2(ownerName, setman_name, setnum_cyl);

	cout << car2;
	return 0;
}