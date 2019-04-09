#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "none";
}

Person::Person(string the_name) {
	name = the_name;
}


string Person::getName() const {
	return name;
}

void Person::setName(string setname) {
	setname = name;
}

ostream & operator<<(ostream & out_stream, const Person & person_object) {
	// TODO: insert return statement here
	//return all information about the person/owner
	out_stream << person_object.name << endl;

	return out_stream;
}
