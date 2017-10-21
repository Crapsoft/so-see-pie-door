#include <iostream>
#include "Passenger.h"
using namespace std;
Passenger::Passenger() :name(NULL), surname(NULL),sex(NULL),passport_No(NULL),date_of_Birth(NULL),phonenumber(NULL)
{

}

Passenger::Passenger(string _name, string _surname, string _sex, string _nationality, string _passport_No, string _date_of_Birth, string _phonenumber) 
{
	name.assign(_name);
	surname.assign(_surname);
	sex.assign(_sex);
	nationality.assign(_nationality);
	passport_No.assign(_passport_No);
	date_of_Birth.assign(_date_of_Birth);
	phonenumber.assign(_phonenumber);
}

string Passenger::getName()const
{
	return name;
}

void Passenger::setName(string _Name)
{
	name.assign(_Name);
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