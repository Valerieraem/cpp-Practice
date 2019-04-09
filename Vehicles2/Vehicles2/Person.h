#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
public:
	Person();
	Person(string the_name);

	string getName() const;
	void setName(string setname);

	friend ostream& operator <<(ostream& out_stream, const Person& person_object);

private:
	string name;
};