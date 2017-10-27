#pragma once
#include <string>
#include <vector>
#include "Place.h"

using namespace std;

class Plane
{
private:
	string bortnumber;
	vector<Place*> places;
public:
	Plane(string _bortnumber , int i);
	Plane(string bortnumber);
	vector<Place*> getPlaces();
	string getBortnumber();
	void update(string seat);
	~Plane();
};