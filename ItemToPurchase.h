#include <iostream>
#include <string>
using namespace std;


class ItemToPurchase {
public: 
	ItemToPurchase();
	ItemToPurchase(string itemName, string itemDesc, int itemPrice, int itemQuan);

	void SetName(string nameItem);
	string GetName();

	void SetPrice(int inputPrice);
	int GetPrice();

	void SetQuantity(int itemQuan);
	int GetQuantity();

	void SetDescription(string itemDesc);
	string GetDescription();

	void PrintItemCost();

	void PrintItemDescription();


private:
	string ItemName;
	string ItemDescription;
	int ItemPrice;
	int ItemQuantity;
	
};


