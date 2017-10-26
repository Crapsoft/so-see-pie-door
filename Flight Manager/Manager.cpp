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
	newairport.close();
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
	f.close();
}
void Manager::addFlight(Airport *A, Airport *B, Plane* plane,string departure, string arrival ) {
	Flight *flight = new Flight(A, B, plane, departure, arrival);
	string s = A->getLocation() +B->getLocation() + ".txt";
	cout << s;
	ofstream newflight;
	newflight.open(s);
	newflight << A->getName() << endl;
	newflight << B->getName() << endl;
	newflight << plane->getBortnumber() << endl;
	newflight << departure << endl;
	newflight << arrival << endl;
	newflight.close();
}
void Manager::BuyTicket(Passenger *passenger,Flight *flight,Place *place) {
	ofstream ticket;
	ticket.open(passenger->getName() + " " + passenger->getSurname() + ".txt");
	ticket <<"Name:"<< passenger->getName() << endl;
	ticket <<"Surname"<< passenger->getSurname() << endl;
	ticket <<"Sex:"<< passenger->getSex() << endl;
	ticket << "Nationality" << passenger->getNationality() << endl;
	ticket << "Passport Number:" << passenger->getPassport_No() << endl;
	ticket << "Birth Day:" << passenger->getDate_of_Birth() << endl;
	ticket << "Phonenumber:" << passenger->getPhonenumber() << endl;
	ticket << "Departure:" << flight->getPointA() << ":" << flight->getDeparture();
	ticket << "Arrival:" << flight->getPointB() << ":" << flight->getArrival();
	ticket << "Seat:" << place->getPlace_number();
	ticket.close();

}
//Test main
//void main() {
//	Manager *m = new Manager();
//	Airport *a = new Airport("Pudong", "Shanghai");
//	Plane* p = new Plane("L11");
//	Airport *b = new Airport("Lviv", "Ukraine");
//	m->addFlight(a,b,p,"11.08","9.10");
//	system("pause");
//}

Manager::~Manager()
{
}
