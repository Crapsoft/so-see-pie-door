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
	string choise;
	while (cancel)
	{
		cin >> choise;
		if (choise == "/help")
		{
			manager->help();
		}
		else if (choise == "/addPlane")
		{
			string bortnumber;
			cout << "Please,input bortnumber";
			cin >> bortnumber;
			manager->addPlane(bortnumber);
		}
		else if(choise == "/addConection")
		{
			string name;
			string location;
			cout << "Please,input name of the airport:" << endl;
			cin >> name;
			cout << "Now,input location"<<endl;
			cin >> location;
			manager->addConnection(name,location);
		}
		else if(choise == "/addFlight")
		{
			cout << "Your available connections are:" << endl;
			manager->showConnections();
			cout << endl << "Input Departure place" << endl;
			string name1;
			string departure_loc;
			cin >> name1;
			cin >> departure_loc;
			Airport *pointA = new Airport(name1, departure_loc);
			cout << endl << "Input Arrival place" << endl;
			string name2;
			string arrival_loc;
			cin >> name2;
			cin >> arrival_loc;
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
		else if(choise == "/buyTicket")
		{

		}
		else if (choise == "exit")
		{
			cancel = false;
		}
		else
		{
			cout << "This command doesn't exist.You should read help.Just write /help";
		}

	}
}