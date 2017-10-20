#include "Flight.h"

using namespace std;

Flight::Flight()
{
}

Flight::Flight(string _pointA, string _pointB, Plane _plane)
{
	this->pointA = _pointA;
	this->pointB = _pointB;
	this->plane = _plane;
}

Flight::~Flight()
{
}
