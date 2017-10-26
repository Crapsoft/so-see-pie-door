#include "Plane.h"
#include <iterator>


Plane::Plane(string _bortnumber)
{

	this->bortnumber = bortnumber;

	string path;
	path.assign(_bortnumber + ".txt");

	ifstream ifs;
	ifs.open(path);

	string line;
	string word;

	vector<string> v;
	while (!ifs.eof())
	{
		Place *p;
		getline(ifs, line);
		std::istringstream iss(line, std::istringstream::in);
		while (iss >> word)
		{
			v.push_back(word);
		}
		if (v[1] == "true")
		{
			p = new Place(v[0], true);
		}
		else
		{
			p = new Place(v[0], false);
		}
		places.push_back(*p);
		//cout << v[0]<<" : "<<v[1]<<endl;
		v.clear();
	}
}
void Plane::print() {
	for each (Place var in places)
	{
		cout << var.getPlace_number() << endl;
	}
}
void main() {
	Plane *p = new Plane("L11");
	//p->print();
	system("pause");
}


Plane::~Plane()
{

}
