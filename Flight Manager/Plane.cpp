#include "Plane.h"
#include <iterator>
#include <fstream>
#include <sstream>

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
		else
		{
			places.push_back(new Place(words[0], false));

		}
		words.clear();
	}
}

Plane::~Plane()
{
	places.clear();
	bortnumber.assign("");
}
