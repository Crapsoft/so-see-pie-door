#pragma once
#include "Airport.h"
#include "Passenger.h"
#include "Flight.h"
#include "Place.h"
#include "Plane.h"
class Manager
{
private:
public:
	Manager();
	~Manager();
	void addPlane(string bortnumber);
	void addConnection(string name, string location);
	void addFlight(Airport *A, Airport *B, Plane plane, string departure, string arrival);
	void BuyTicket();
	void showConnections();
};

