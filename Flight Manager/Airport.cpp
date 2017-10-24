#include <iostream>
#include "Airport.h"
using namespace std;

Airport::Airport() {
	name.assign("");
	location.assign("");
	contacts = 0;
}
//Without init vector of airlines
Airport::Airport(string _name, string _location, int _contacts)
{
	name = _name;
	location = _location;
	contacts = _contacts;
}
//with init vector of airlines
Airport::Airport(string _name, string _location, vector<string> _airlines, int _contacts)
{
	name = _name;
	location = _location;
	airlines = _airlines;
	contacts = _contacts;
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


vector<string> Airport::getAirlines()const
{
	return airlines;
}
void Airport::setAirlines(vector<string> _Airlines)
{
	for each (string var in _Airlines)
	{
		airlines.push_back(var);
	}
}
void Airport::addAirline(string airline) {
	airlines.push_back(airline);
}


int Airport::getContacts()const
{
	return contacts;
}
void Airport::setContacts(int _contacts)
{
	contacts = _contacts;
}


Airport::~Airport()
{
	name.assign("");
	location.assign("");
	airlines.clear();
	contacts = 0;
}