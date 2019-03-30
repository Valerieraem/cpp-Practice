#include <iostream>
#include <string>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include <vector>
using namespace std;


//DEFAULT CONSTRUCTOR
ShoppingCart::ShoppingCart() {
	CustomerName = "none";
	CurrentDate = "January 1, 2016";
}

//CONSTRUCTOR WITH PARAMETERS
ShoppingCart::ShoppingCart(string name, string date) {
	CustomerName = name;
	CurrentDate = date;
}




string ShoppingCart::GetCustomerName() {
	return CustomerName;
}

string ShoppingCart::GetDate() {
	return string(CurrentDate);
}

void ShoppingCart::AddItem(ItemToPurchase item) {
	//ADDS ITEM TO CARTITEMS VECTOR
		cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
	bool found = false;

	cout << "REMOVE ITEM FROM CART" << endl;
	cout << "Enter name of item to remove:" << endl;

	for (unsigned int i = 0; i < cartItems.size(); i++) {
		if (cartItems.at(i).GetName() == itemName) {
			found = true;
			cartItems.erase(cartItems.begin() + i);
		}
	}
	if (!found) {
		cout << "Item not found in cart. Nothing removed." << endl;
	}
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
	bool ItemsModified = false;

	cout << "CHANGE ITEM QUANTITY" << endl;
	cout << "Enter the item name:" << endl;
	cout << "Enter the new quantity:" << endl;
	

	for (unsigned int i = 0; i < cartItems.size(); i++) {

		if (cartItems.at(i).GetName() == item.GetName()) {
			int itemQuan;
			cin >> itemQuan;

			cartItems.at(i).SetQuantity(itemQuan);
			ItemsModified = true;
		}
	}

	if (ItemsModified == false) {
		cout << "Item not found in cart. Nothing modified." << endl;
	}
}

int ShoppingCart::GetNumItemsInCart() {
	int totalItems = 0;

	for (unsigned int i = 0; i < cartItems.size(); i++) {
		totalItems += cartItems.at(i).GetQuantity();
	}
	return totalItems;
}

int ShoppingCart::GetCostOfCart() {
	int totalCost = 0;

	for (unsigned int i = 0; i < cartItems.size(); ++i) {
		totalCost = cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity() + totalCost;
	}
	return totalCost;
}

int ShoppingCart::PrintTotal() {
	int totalItems = GetNumItemsInCart();

	cout << "OUTPUT SHOPPING CART" << endl;
	cout << CustomerName << "'s Shopping Cart - " << CurrentDate << endl;
	cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
	
	for (unsigned int i = 0; i < cartItems.size(); i++) {
		cartItems.at(i).PrintItemCost();
	}

	if (totalItems == 0) {
		cout << "SHOPPING CART IS EMPTY" << endl;
	}
		cout << endl <<  "Total: $" << GetCostOfCart() << endl;
	

	return totalItems;
}

void ShoppingCart::PrintDescriptions() {

	cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
	cout << CustomerName << "'s Shopping Cart - " << CurrentDate << endl << endl;

	cout << "Item Descriptions" << endl;
	for (unsigned int i = 0; i < cartItems.size(); ++i) {
		cout << cartItems.at(i).GetName() << ": " << cartItems.at(i).GetDescription() << endl;
	}
}
