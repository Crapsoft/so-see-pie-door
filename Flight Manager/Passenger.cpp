#include <iostream>
#include "Passenger.h"
using namespace std;
Passenger::Passenger() :Passenger_Name("incognito"), Passenger_Surname("incognito"), Passenger_Gender("incognito"), Passenger_Nationality("incognito"), Passenger_Passport_No(0), Passenger_Date_of_Birth(0), Passenger_Phone_number(0)
{}
Passenger::Passenger(string _Passenger_Name, string _Passenger_Surname, string _Passenger_Gender, string _Passenger_Nationality, int _Passenger_Passport_No, int _Passenger_Date_of_Birth, int _Passenger_Phone_number) : Passenger_Name(_Passenger_Name), Passenger_Surname(_Passenger_Surname), Passenger_Gender(_Passenger_Gender), Passenger_Nationality(_Passenger_Nationality), Passenger_Passport_No(_Passenger_Passport_No), Passenger_Date_of_Birth(_Passenger_Date_of_Birth), Passenger_Phone_number(_Passenger_Phone_number)
{}
string Passenger::getPassenger_Name()const
{
	return Passenger_Name;
}
void Passenger::setPassenger_Name(string _Name)
{
	Passenger_Name.assign(_Name);
}
string Passenger::getPassenger_Surname()const
{
	return Passenger_Surname;
}
void Passenger::setPassenger_Surname(string _Surname)
{
	Passenger_Surname.assign(_Surname);
}
string Passenger::getPassenger_Gender()const
{
	return Passenger_Gender;
}
void Passenger::setPassenger_Gender(string _Gender)
{
	Passenger_Surname.assign(_Gender);
}
string Passenger::getPassenger_Nationality()const
{
	return Passenger_Nationality;
}
void Passenger::setPassenger_Nationality(string _Nationality)
{
	Passenger_Surname.assign(_Nationality);
}
int Passenger::getPassenger_Passport_No()const
{
	return Passenger_Passport_No;
}
void Passenger::setPassenger_Passport_No(int _Passport_No)
{
	Passenger_Passport_No = _Passport_No;
}
int Passenger::getPassenger_Date_of_Birth()const
{
	return Passenger_Date_of_Birth;
}
void Passenger::setPassenger_Date_of_Birth(int _Date_of_Birth)
{
	Passenger_Date_of_Birth = _Date_of_Birth;
}
int Passenger::getPassenger_Phone_number()const
{
	return Passenger_Phone_number;
}
void Passenger::setPassenger_Phone_number(int _Phone_number)
{
	Passenger_Phone_number = _Phone_number;
}
Passenger::~Passenger()
{
	Passenger_Name = " ";
	Passenger_Surname = " ";
	Passenger_Gender = " ";
	Passenger_Nationality = " ";
	Passenger_Passport_No = 0;
	Passenger_Date_of_Birth = 0;
	Passenger_Phone_number = 0;
}