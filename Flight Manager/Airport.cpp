#include <iostream>
#include "Airport.h"
using namespace std;

Airport::Airport() {
	name.assign("");
	location.assign("");
}
//Without init vector of airlines

//with init vector of airlines
Airport::Airport(string _name, string _location)
{
	name = _name;
	location = _location;
}


string Airport::getName()const
{
	return name;
}
void Airport::setAirport_Name(string _name)
{
	name.assign(_name);
}


string Airport::getLocation()const
{
	return location;
}
void Airport::setLocation(string _location)
{
	location.assign(_location);
}


Airport::~Airport()
{
	name.assign("");
	location.assign("");
}