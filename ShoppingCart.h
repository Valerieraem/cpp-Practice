#include <iostream>
#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
public: 
	ShoppingCart();
	ShoppingCart(string name, string date);

	string GetCustomerName();
	string GetDate();
	void AddItem(ItemToPurchase);
	void RemoveItem(string itemName);
	void ModifyItem(ItemToPurchase);

	int GetNumItemsInCart();
	int GetCostOfCart();
	int PrintTotal();
	string PrintDescriptions();


private:
	string CustomerName;
	string CurrentDate;

	vector<ItemToPurchase> cartItems;
};