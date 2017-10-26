#include "Manager.h"
#include <fstream>


Manager::Manager()
{

}
void Manager::addPlane(string bortnumber) {
	Plane *plane = new Plane(bortnumber, 1);

	ofstream newplane;
	newplane.open(bortnumber + ".txt");

	vector<Place*> allsits = plane->getPlaces();

	for each (Place* var in plane->getPlaces())
	{
		if (var->getAvailability() == true)
		{
			newplane << var->getPlace_number() << " " << "true" << endl;
		}
		else
		{
			newplane << var->getPlace_number() << " " << "false" << endl;
		}	
	}
	newplane.close();
	ofstream f("Planes.txt",ios::app);
	f << "\n" << bortnumber<<" "<< "true";
	f.close();
}
//void main() {
//	Manager *m = new Manager();
//	m->addPlane("L12");
//	/*Plane *p = new Plane("M2",1);*/
//	system("pause");
//}

Manager::~Manager()
{
}
