#include "Passenger.h"

using namespace std;


Passenger::Passenger() :name(""), surname(""),sex(""),passport_No(""),date_of_Birth(""),phonenumber("")
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

void Passenger::setName(string _name)
{
	name.assign(_name);
}



string Passenger::getSurname()const
{
	return surname;
}

void Passenger::setSurname(string _surname)
{
	surname.assign(_surname);
}


string Passenger::getSex()const
{
	return sex;
}

void Passenger::setSex(string _sex)
{
	sex.assign(_sex);
}



string Passenger::getNationality()const
{
	return nationality;
}

void Passenger::setNationality(string _nationality)
{
	nationality.assign(_nationality);
}



string Passenger::getPassport_No()const
{
	return passport_No;
}

void Passenger::setPassport_No(string _passportNo)
{
	passport_No.assign(_passportNo);
}


string Passenger::getDate_of_Birth()const
{
	return date_of_Birth;
}

void Passenger::setDate_of_Birth(string _date_of_Birth)
{
	date_of_Birth.assign(_date_of_Birth);
}



string Passenger::getPhonenumber()const
{
	return phonenumber;
}

void Passenger::setPhonenumber(string _phonenumber)
{
	phonenumber.assign(_phonenumber);
}

void Passenger::PassangerInfo() {
	cout << "Name: " << name<<endl;
	cout << "Surname: " << surname << endl;
	cout << "Sex: " << sex << endl;
	cout << "Nationality: " << nationality << endl;
	cout << "Passport Number: " << passport_No << endl;
	cout << "B-Day: " << date_of_Birth << endl;

}

Passenger::~Passenger()
{
	name = "";
	surname = "";
	sex = "";
	nationality = "";
	passport_No = "";
	date_of_Birth = "";
	phonenumber = "";
}