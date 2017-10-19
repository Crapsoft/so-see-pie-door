#pragma once
#include <iostream>
#include <string>;
using namespace std;
class Passenger {
protected:
	string Passenger_Name;
	string Passenger_Surname;
	string Passenger_Gender;
	string Passenger_Nationality;
	int Passenger_Passport_No;
	int Passenger_Date_of_Birth;
	int Passenger_Phone_number;
public:
	Passenger();
	Passenger(string _Passenger_Name, string _Passenger_Surname, string _Passenger_Gender, string _Passenger_Nationality, int _Passenger_Passport_No, int _Passenger_Date_of_Birth, int _Passenger_Phone_number);
	string getPassenger_Name()const;
	void setPassenger_Name(string _Passenger_Name);
	string getPassenger_Surname()const;
	void setPassenger_Surname(string _Passenger_Surname);
	string getPassenger_Gender()const;
	void setPassenger_Gender(string _Passenger_Gender);
	string getPassenger_Nationality()const;
	void setPassenger_Nationality(string _Passenger_Nationality);
	int getPassenger_Passport_No()const;
	void setPassenger_Passport_No(int _Passenger_Passport_No);
	int getPassenger_Date_of_Birth()const;
	void setPassenger_Date_of_Birth(int _Passenger_Date_of_Birth);
	int getPassenger_Phone_number()const;
	void setPassenger_Phone_number(int _Passenger_Phone_number);
	~Passenger();
};
