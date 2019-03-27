#include <iostream>
#include <string>
#include "ShoppingCart.h"
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
	return string();
}

string ShoppingCart::GetDate() {
	return string();
}

void ShoppingCart::AddItem(ItemToPurchase) {
	//ADDS ITEM TO CARTITEMS VECTOR
	ItemToPurchase item;

	for (unsigned int i = 0; i < cartItems.size(); ++i) {
		cartItems.push_back(item);
	}
}

void ShoppingCart::RemoveItem(string itemName) {
	
	//size_t nPos = cartItems.find(itemName, 0);
	//while (nPos != string::npos) {
	//	nPos = cartItems.find(itemName, nPos + 1);
	//}
}

void ShoppingCart::ModifyItem(ItemToPurchase) {

}

int ShoppingCart::GetNumItemsInCart() {
	
	
	return 0;
}

int ShoppingCart::GetCostOfCart() {
	
	return 0;
}

int ShoppingCart::PrintTotal() {
	
	return 0;
}

string ShoppingCart::PrintDescriptions() {
	
	return string();
}

