#include "Flight.h"

using namespace std;

Flight::Flight()
{
}

Flight::Flight(Airport* pointA, Airport*pointB, Plane* plane, string departure, string arrival)
{
	this->pointA = pointA;
	this->pointB = pointB;
	this->plane = plane;
	this->departure = departure;
	this->arrival = arrival;
}

Flight::~Flight()
{
}
