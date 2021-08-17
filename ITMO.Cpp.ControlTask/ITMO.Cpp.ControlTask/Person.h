#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name;
	string surname;
	string phone;
public:
	Person();
	void set_person_type(string);
	virtual void set_person_data() = 0;
	virtual string data_for_file() = 0;
	string get_name();
	string get_surname();
	string get_phone();
};