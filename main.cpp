#include <iostream>
#include <string>
//#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;


int main() {
	string name;
	string date;

	ShoppingCart cart1;

	cout << "Enter customer's name:" << endl;
	getline(cin, name);

	//cin.ignore();
	cout << "Enter today's date:" << endl << endl;
	
	getline(cin, date);


	cout << "Customer name: " << name << endl;
	cout << "Today's date: " << date << endl;

	return 0;
}