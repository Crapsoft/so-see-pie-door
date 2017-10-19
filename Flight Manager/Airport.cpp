#include <iostream>
#include "Airport.h"
using namespace std;
Airport::Airport() :Airport_Name("incognito"), Airport_Location("incognito"), Airport_Airline("incognito"), Airport_Contacts(0)
{}
Airport::Airport(string _Airport_Name, string _Airport_Location, string _Airport_Airline, int _Airport_Contacts) : Airport_Name(_Airport_Name), Airport_Location(_Airport_Location), Airport_Airline(_Airport_Airline), Airport_Contacts(_Airport_Contacts)
{}
string Airport::getAirport_Name()const
{
	return Airport_Name;
}
void Airport::setAirport_Name(string _Airport_Name)
{
	Airport_Name.assign(_Airport_Name);
}
string Airport::getAirport_Location()const
{
	return Airport_Location;
}
void Airport::setAirport_Location(string _Airport_Location)
{
	Airport_Location.assign(_Airport_Location);
}
string Airport::getAirport_Airline()const
{
	return Airport_Airline;
}
void Airport::setAirport_Airline(string _Airport_Airline)
{
	Airport_Airline.assign(_Airport_Airline);
}
int Airport::getAirport_Contacts()const
{
	return Airport_Contacts;
}
void Airport::setAirport_Contacts(int _Airport_Contacts)
{
	Airport_Contacts = _Airport_Contacts;
}
Airport::~Airport()
{
	Airport_Name = " ";
	Airport_Location = " ";
	Airport_Airline = " ";
	Airport_Contacts = 0;
}