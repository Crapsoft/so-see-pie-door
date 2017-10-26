#pragma once

#include <iostream>
#include <string>

using namespace std;

class Place {
protected:
	string Place_number;
	bool availability;			// true means that place is free, false - place has been reserved or bought
public:
	//contructors
	Place();
	Place(string _Place_number);
	Place(string _Place_number, bool _availability);

	//setters

	void setPlace_number(string _Place_number);
	void setAvailability(bool _availability);

	//getters

	string getPlace_number()const;
	bool getAvailability()const;

	~Place();
};