#include "Manager.h"
#include "Airport.h"
#include "Flight.h"
#include "Passenger.h"
#include "Place.h"
#include "Plane.h"
#include <fstream>
#include <sstream>

using namespace std;
void main() 
{
	bool cancel = true;
	Manager *manager = new Manager();
	string choice;

	cout << "Hello! You can start working, or call help using /help command \n\n";

	while (cancel)
	{
		cin >> choice;
		if (choice == "/help")
		{
			manager->help();
		}
		else if (choice == "/addPlane")
		{
			string bortnumber;
			cout << "Please,input bortnumber" << endl;
			cin >> bortnumber;
			manager->addPlane(bortnumber);
		}
		else if(choice == "/addConection")
		{
			string name;
			string location;
			cout << "Please,input the name of the airport:" << endl;
			cin >> name;
			cout << "Now,input location"<<endl;
			cin >> location;
			manager->addConnection(name,location);
		}
		else if(choice == "/addFlight")
		{
			cout << "Your available connections are:" << endl;
			manager->showConnections();
			cout << endl << "Input Airport1 name" << endl;
			string name1;
			cin >> name1;
			cout << endl << "Input Airport1 location" << endl;
			string departure_loc;
			cin >> departure_loc;
			cout << endl << "Input Airport2 name" << endl;
			string name2;
			cin >> name2;
			cout << endl << "Input Airport2 location" << endl;
			string arrival_loc;
			cin >> arrival_loc;
			Airport *pointA = new Airport(name1, departure_loc);
			Airport *pointB = new Airport(name2, arrival_loc);
			cout << "Available planes for new flight" << endl;
			fstream f;
			f.open("Planes.txt");
			string line;
			string word;
			vector<string> words;
			while (!f.eof())
			{
				getline(f, line);
				std::istringstream iss(line, std::istringstream::in);

				while (iss >> word)
				{
					words.push_back(word);
				}
				if (words[1] == "true")
				{
					cout << words[0] << endl;					
				}
				words.clear();
			}
			cout << "Choose plane:" << endl;
			cin >> name1;
			Plane* plane = new Plane(name1);
			cout << "Input departure time"<<endl;
			string departure;
			cin >> departure;
			cout << "Input arrival time" << endl;
			string arrival;
			cin >> arrival;
			manager->addFlight(pointA, pointB, plane, departure, arrival);
			f.close();
		}
		//else if(choise == "/buyTicket")
		//{
		//	cout << "Flights:" << endl;
		//	fstream f("Flights.txt");
		//	string str;
		//	while (!f.eof())
		//	{
		//		getline(f, str);
		//		cout << str << endl;
		//	}
		//	f.close();
		//	cout << "Choose flight:" << endl;
		//	string flight;
		//	cin >> flight;
		//	//ifstream f(flight + ".txt");
		//	Flight *flight = new Flight(flight + ".txt");
		//}
		else if(choice == "/addPassanger")
		{
			Passenger *passenger = new Passenger();
			string line;
			cout << "Input name" << endl;
			cin >> line;
			passenger->setName(line);
			cout << "Input surname" << endl;
			cin >> line;
			passenger->setSurname(line);
			cout << "Input sex" << endl;
			cin >> line;
			passenger->setSex(line);
			cout << "Input nationality" << endl;
			cin >> line;
			passenger->setNationality(line);
			cout << "Input Passport number" << endl;
			cin >> line;
			passenger->setPassport_No(line);
			cout << "Input Date of Birth" << endl;
			cin >> line;
			passenger->setDate_of_Birth(line);
			cout << "Input phinenumber" << endl;
			cin >> line;
			passenger->setPhonenumber(line);
			manager->addPassenger(passenger);
		}
		else if (choice == "exit")
		{
			cancel = false;
		}
		else
		{
			cout << "This command doesn't exist.You should read help.Just write /help \n";
		}

	}
}