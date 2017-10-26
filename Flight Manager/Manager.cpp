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
void Manager::addConnection(string name, string location) 
{
	Airport *airport = new Airport(name, location);
	ofstream newairport;
	newairport.open("Connections.txt", ios::app);
	newairport << airport->getName() << endl << airport->getLocation() << endl;
}
void Manager::showConnections() {
	fstream f;
	string str;
	string str2;
	f.open("Connections.txt");
	while (!f.eof())
	{
		getline(f, str);
		getline(f, str2);
		cout << str <<":"<<str2<< endl;
	}
}
void Manager::addFlight(Airport *A, Airport *B, Plane plane,string departure, string arrival ) {
	Flight *flight = new Flight(A, B, plane, departure, arrival);
	fstream newflight(A->getLocation() +"-"+ B->getLocation() + ".txt");
	newflight << A->getName() << endl;
	newflight << B->getName() << endl;
	newflight << plane.getBortnumber() << endl;
	newflight << departure << endl;
	newflight << arrival << endl;
}
void Manager::BuyTicket() {
	Passenger *passenger = new Passenger();
}

//void main() {
//	Manager *m = new Manager();
//	m->showConnections();
//	/*Plane *p = new Plane("M2",1);*/
//	system("pause");
//}

Manager::~Manager()
{
}
