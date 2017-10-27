#include "Manager.h"
#include <fstream>
#include <sstream>

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
	ofstream newflight;
	newflight.open(s);
	newflight << A->getName() << endl;
	newflight << B->getName() << endl;
	newflight << plane->getBortnumber() << endl;
	newflight << departure << endl;
	newflight << arrival << endl;
	newflight.close();
	ofstream f("Flights.txt", ios::app);
	f << "\n" << s;
	f.close();
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
void Manager::addPassenger(Passenger *passenger) {
	ofstream newpassanger;
	newpassanger.open(passenger->getName() + " "+ passenger->getSurname() +".txt");
	newpassanger << passenger->getName() << endl;
	newpassanger << passenger->getSurname() << endl;
	newpassanger << passenger->getSex() << endl;
	newpassanger << passenger->getNationality() << endl;
	newpassanger << passenger->getPassport_No() << endl;
	newpassanger << passenger->getDate_of_Birth() << endl;
	newpassanger << passenger->getPhonenumber() << endl;
	newpassanger.close();
}
void Manager::help() 
{
	ifstream file;
	file.open("HELP.txt");
	string line;
	while (!file.eof())
	{
		getline(file, line);
		cout << line << endl;
	}
	file.close();
}
Manager::~Manager()
{
}
