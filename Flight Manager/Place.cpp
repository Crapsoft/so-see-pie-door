#include "Place.h"



Place::Place():Place_number("incognito"), availability()
{
}
Place::Place(string _Place_number, bool availability) : Place_number(_Place_number), availability(_availability)
{}
string Place::getPlace_number()const
{
	return Place_number;
}
void Place::setPlace_number(string _number)
{
	Place_number.assign(_number);
}
bool Place::availability()const
{
	return availability;
}
void Place::availability(bool availability)
{
	availability.assign(availability);
}

Place::~Place()
{
	Place_number = "";
	availability = true;
}
