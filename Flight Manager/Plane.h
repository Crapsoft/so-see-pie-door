#pragma once

#include <string>
#include "Place.h"

using namespace std;

class Plane
{
protected:
	Place seats[100];		// 0 - empty seat 
	string board;
public:
	Plane();
	Plane(string _board);
	~Plane();
};

