#pragma once
#include "Person.h"

using namespace std;

class Lecturer : public Person
{
private:
	string theme_of_lecture;
	string theme_number;
public:
	Lecturer(string theme, string number)
	{
		set_person_data();
		this->theme_of_lecture = theme;
		this->theme_number = number;
	}
	void set_person_data() override
	{
		Person::set_person_data();
		Person::person_type = "Лектор - ";
	};
	string Person::data_for_file() override
	{
		return ("\n"+ person_type + " " + Person::get_name() + " " + Person::get_surname() + ", тел.  " + Person::get_phone() +
			". Лекция '" + theme_of_lecture + "' в списке под номером " + theme_number + ".");
	}
};
