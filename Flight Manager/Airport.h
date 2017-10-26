#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Airport {
private:
	string name;
	string location;
public:
	Airport();
	Airport(string _name, string _location);

	//Getters

	string getName()const;
	string getLocation()const;

	//Setters

	void setAirport_Name(string _name);
	void setLocation(string _location);

	//other

	void addAirline(string airline);	
	~Airport();
};
