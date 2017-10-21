#include "Place.h"


Place::Place(string _Place_number) {
	Place_number = _Place_number;
	availability = true;

}

Place::Place(string _Place_number, bool _availability) {
	Place_number.assign(Place_number);
	availability = _availability;
}

void Place::setPlace_number(string _number) {
	Place_number.assign(_number);
}

string Place::getPlace_number()const {
	return Place_number;
}

bool Place::getAvailability()const {
	return availability;
}

void Place::setAvailability(bool _availability) {
	availability = _availability;
}

Place::~Place() {
	Place_number = "";
	availability = true;
}
