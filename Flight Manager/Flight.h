#pragma once

#include <string>
#include "Plane.h"
#include "Airport.h"

using namespace std;

class Flight
{
protected:
	Airport*pointA;
	Airport* pointB;
	string departure;
	string arrival;
	Plane *plane;
public:
	Flight(string _path);
	Flight(Airport* _pointA, Airport*_pointB, Plane* _plane, string departure, string arrival);
	string getPointA();
	string getPointB();
	string getDeparture();
	string getArrival();
	Plane *getPlane();
	~Flight();
};

