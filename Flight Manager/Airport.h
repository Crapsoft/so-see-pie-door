#pragma once
#include <iostream>
#include <string>;
using namespace std;
class Airport {
protected:
	string Airport_Name;
	string Airport_Location;
	string Airport_Airline;
	int Airport_Contacts;
public:
	Airport();
	Airport(string _Airport_Name, string _Airport_Location, string _Airport_Airline, int _Airport_Contacts);
	string getAirport_Name()const;
	void setAirport_Name(string _Airport_Name);
	string getAirport_Location()const;
	void setAirport_Location(string _Airport_Location);
	string getAirport_Airline()const;
	void setAirport_Airline(string _Airport_Airline);
	int getAirport_Contacts()const;
	void setAirport_Contacts(int _Airport_Contacts);
	~Airport();
};
