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
	void addConnection();
	void addFlight();
	void BuyTicket();
};

