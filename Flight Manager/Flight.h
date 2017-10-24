#pragma once

#include <string>
#include "Plane.h"

using namespace std;

class Flight
{
protected:
	string pointA;
	string pointB;
	Plane plane;
	// departure Time Stamp
	// arrival Time Stamp
public:
	Flight();
	Flight(string _pointA, string _pointB, Plane _plane);
	~Flight();
};

