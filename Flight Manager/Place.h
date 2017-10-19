#pragma once
#include <iostream>
#include <string>
using namespace std;
class Place{
protected:
	string Place_number;
	bool availability;
public:
	Place();
	Place(string _Place_number, bool _availability);
	string getPlace_number()const;
	void setPlace_number(string _Place_number);
	~Place();
};

