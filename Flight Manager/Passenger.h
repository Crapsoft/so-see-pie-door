#pragma once
#include <iostream>
#include <string>
using namespace std;
class Passenger {
protected:
	string name;
	string surname;
	string sex;
	string nationality;
	string passport_No;
	string date_of_Birth;
	string phonenumber;
public:
	//Constructors
	Passenger();
	Passenger(string _name, string _surname, string _sex, string _nationality, string _passport_No, string _date_of_Birth, string _phonenumber);
	//Getters
	string getName()const;
	string getSurname()const;
	string getSex()const;
	string getNationality()const;
	string getPassport_No()const;
	string getDate_of_Birth()const;
	string getPhonenumber()const;
	//Setters
	void setName(string _name);	
	void setSurname(string _Passenger_surname);	
	void setSex(string _sex);
	void setNationality(string _nationality);
	void setPassport_No(int _passportNo);
	void setDate_of_Birth(int _date_of_Birth);
	void setPhonenumber(int _phonenumber);
	//Other
	void PassangerInfo();
	~Passenger();
};
