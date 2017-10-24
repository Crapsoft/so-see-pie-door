#pragma once
#include <iostream>
#include <string>;
#include <vector>
using namespace std;
class Airport {
private:
	string name;
	string location;
	vector<string> airlines;
	int contacts;
public:
	Airport();
	Airport(string _name, string _location, int _contacts);
	Airport(string _name, string _location, vector<string> _airlines, int _contacts);
	//Getters
	string getName()const;
	string getLocation()const;
	vector<string> getAirlines()const;
	int Airport::getContacts()const;
	//Setters
	void setAirport_Name(string _name);
	void setLocation(string _location);
	void setAirlines(vector<string> _Airlines);
	void setContacts(int _Airport_Contacts);
	//other
	void addAirline(string airline);	
	~Airport();
};
