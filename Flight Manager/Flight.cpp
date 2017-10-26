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
string Flight::getPointA() {
	return pointA->getName();
}
string Flight::getPointB() {
	return pointB->getName();
}
string Flight::getDeparture() {
	return departure;
}
string Flight::getArrival() {
	return arrival;
}
Plane* Flight::getPlane() {
	return plane;
}
Flight::~Flight()
{
}
