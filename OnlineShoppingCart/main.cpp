#include <iostream>
#include <string>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

using namespace std;

void AddItem(ShoppingCart& cart1) {
	
	string itemName;
	string itemDesc;
	int itemPrice;
	int itemQuan;
    
	cout << "ADD ITEM TO CART" << endl;
	cout << "Enter the item name:" << endl;
	getline(cin, itemName);

	cout << "Enter the item description:" << endl;
	getline(cin, itemDesc);

	cout << "Enter the item price:" << endl;
	cin >> itemPrice;

	cout << "Enter the item quantity:" << endl;
	cin >> itemQuan;
	
	ItemToPurchase ItemToAdd(itemName, itemDesc, itemPrice, itemQuan);
	cart1.AddItem(ItemToAdd);
}


void PrintMenu(ShoppingCart& cart1) {
	char UserInput;

	
	cout << "MENU" << endl;
	cout << "a - Add item to cart" << endl;
	cout << "d - Remove item from cart" << endl;
	cout << "c - Change item quantity" << endl;
	cout << "i - Output items' descriptions" << endl;
	cout << "o - Output shopping cart" << endl;
	cout << "q - Quit" << endl << endl;
	cout << "Choose an option:" << endl;
	cin >> UserInput;

	while (UserInput != 'a' && UserInput != 'd' && UserInput != 'c' && UserInput != 'i' && UserInput != 'o' && UserInput != 'q') {
		cout << "Choose an option:" << endl;
		cin.ignore();
		cin >> UserInput;
		if (UserInput == 'a' || UserInput == 'd' || UserInput == 'c' || UserInput == 'i' || UserInput == 'o' || UserInput == 'q') {
			//break;
		}
	}


	do {
		if (UserInput == 'a') {
			cin.ignore();
			AddItem(cart1);
		}
		if (UserInput == 'd') {
			string itemName;
			cin.ignore(); 
			getline(cin, itemName);
			cart1.RemoveItem(itemName);
		}

		if (UserInput == 'c') {
			ItemToPurchase item;
			string itemName;

			cin.ignore();
			getline(cin, itemName);

			item.SetName(itemName);

			cart1.ModifyItem(item);
		}

		if (UserInput == 'i') {
			cart1.PrintDescriptions();
		}

		if (UserInput == 'o') {
			cin.ignore();
			cart1.PrintTotal();
		}

		if (UserInput == 'q') {
			break;
		}


		cout << endl;
		cout << "MENU" << endl;
		cout << "a - Add item to cart" << endl;
		cout << "d - Remove item from cart" << endl;
		cout << "c - Change item quantity" << endl;
		cout << "i - Output items' descriptions" << endl;
		cout << "o - Output shopping cart" << endl;
		cout << "q - Quit" << endl << endl;
		cout << "Choose an option:" << endl;

		cin >> UserInput;
	} while (UserInput == 'a' || UserInput == 'd' || UserInput == 'c' || UserInput == 'i' || UserInput == 'o' || UserInput == 'q');
}

int main() {
	string name;
	string date;


	
	cout << "Enter customer's name:" << endl;
	getline(cin, name);

	//cin.ignore();
	cout << "Enter today's date:" << endl << endl;

	getline(cin, date);

	


	cout << "Customer name: " << name << endl;
	cout << "Today's date: " << date << endl << endl;

	ShoppingCart cart1(name, date);
	PrintMenu(cart1);

	
	return 0;
}