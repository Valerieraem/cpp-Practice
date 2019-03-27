#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

//Default Constructor
ItemToPurchase::ItemToPurchase() {
	ItemName = "None";
	ItemPrice = 0;
	ItemQuantity = 0;
	ItemDescription = "None";
}

//Constructor with Parameters
ItemToPurchase::ItemToPurchase(string itemName, string itemDesc, int itemPrice, int itemQuan) {
	ItemPrice = itemPrice;
	ItemQuantity = itemQuan;
	ItemName = itemName;
	ItemDescription = itemDesc;
}


//Definitions for functions
void ItemToPurchase::SetName(string nameItem) {
	ItemName = nameItem;
}

string ItemToPurchase::GetName() {
	return ItemName;
}

void ItemToPurchase::SetPrice(int inputPrice) {
	ItemPrice = inputPrice;
}

int ItemToPurchase::GetPrice() {
	return ItemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuan) {
	ItemQuantity = itemQuan;
}

int ItemToPurchase::GetQuantity() {
	return ItemQuantity;
}

void ItemToPurchase::SetDescription(string itemDescription){
	ItemDescription = itemDescription;
}

string ItemToPurchase::GetDescription(){
	return ItemDescription;
}

void ItemToPurchase::PrintItemCost() {
	//outputs the item price, name, quantity and total cost
	cout << ItemName << " " << ItemQuantity << " @ $" << ItemPrice << " = $" << ItemPrice * ItemQuantity << endl;
}

void ItemToPurchase::PrintItemDescription() {
	cout << ItemName << ": " << ItemDescription << endl;
}
