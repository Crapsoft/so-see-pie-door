#include "Plane.h"
#include <iterator>
#include <fstream>
#include <sstream>

Plane::Plane(string _bortnumber, int i) {
	bortnumber = _bortnumber;
	this->places.push_back(new Place("A1"));
	this->places.push_back(new Place("A2"));
	this->places.push_back(new Place("A3"));
	this->places.push_back(new Place("A4"));
	this->places.push_back(new Place("A5"));
	this->places.push_back(new Place("B1"));
	this->places.push_back(new Place("B2"));
	this->places.push_back(new Place("B3"));
	this->places.push_back(new Place("B4"));
	this->places.push_back(new Place("B5"));
	this->places.push_back(new Place("C1"));
	this->places.push_back(new Place("C2"));
	this->places.push_back(new Place("C3"));
	this->places.push_back(new Place("C4"));
	this->places.push_back(new Place("C5"));
	this->places.push_back(new Place("D1"));
	this->places.push_back(new Place("D2"));
	this->places.push_back(new Place("D3"));
	this->places.push_back(new Place("D4"));
	this->places.push_back(new Place("D5"));
}
Plane::Plane(string _bortnumber)
{

	this->bortnumber = bortnumber;

	string path;
	path.assign(_bortnumber + ".txt");

	ifstream ifs;
	ifs.open(path);
	

	string line;
	string word;

	vector<string> words;
	while (!ifs.eof())
	{
		getline(ifs, line);
		std::istringstream iss(line, std::istringstream::in);

		while (iss >> word)
		{
			words.push_back(word);
		}
		if (words[1] == "true")
		{
			places.push_back(new Place(words[0], true));
		}
		else if (words[1] == "false")
		{
			places.push_back(new Place(words[0], false));

		}
		else {
			cout << "Incorrect file." << endl;
			break;
		}
		words.clear();
	}
	ifs.close();
}
vector<Place*> Plane::getPlaces() {
	return places;
}

Plane::~Plane()
{
	places.clear();
	bortnumber.assign("");
}
