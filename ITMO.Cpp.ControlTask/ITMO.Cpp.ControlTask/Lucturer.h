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
		Person::person_type = "������ - ";
	};
	string Person::data_for_file() override
	{
		return ("\n"+ person_type + " " + Person::get_name() + " " + Person::get_surname() + ", ���.  " + Person::get_phone() +
			". ������ '" + theme_of_lecture + "' � ������ ��� ������� " + theme_number + ".");
	}
};
