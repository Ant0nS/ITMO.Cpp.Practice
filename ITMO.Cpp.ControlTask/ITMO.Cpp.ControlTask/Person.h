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
	string person_type;
	Person()
	{
	};
	virtual void set_person_data() = 0
	{
		cout << "Ваше имя:" << "\t";
		cin >> name;
		cout << "Ваша фамилия:" << "\t";
		cin >> surname;
		cout << "Телефон для контактов:" << "\t";
		cin >> phone;
	}
	virtual string data_for_file() = 0;

	string get_name()
	{
		return name;
	}
	string get_surname()
	{
		return surname;
	}
	string get_phone()
	{
		return phone;
	}
};