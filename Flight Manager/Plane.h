#pragma once
#include <string>
#include <vector>
#include "Place.h"
#include <fstream>
#include <sstream>
using namespace std;

class Plane
{
private:
	string bortnumber;
	vector<Place> places;
public:
	Plane();
	Plane(string bortnumber);
	~Plane();
	void print();
};