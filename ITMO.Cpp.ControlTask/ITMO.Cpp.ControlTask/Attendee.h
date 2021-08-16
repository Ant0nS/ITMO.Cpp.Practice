#pragma once
#include "Person.h"

using namespace std;

class Attendee : public Person
{
private:
	int chosen_theme;
	string lecture_name;
public:
	Attendee(int n, string theme)
	{
		set_person_data();
		this->chosen_theme = n;
		this->lecture_name = theme;
	}
	void set_person_data() override
	{
		string input;
		Person::set_person_data();
		Person::person_type = "Слушатель - ";
	}
	string Person::data_for_file() override
	{
		return ("\n" + person_type + " " + Person::get_name() + " " + Person::get_surname() + ", тел.  " + Person::get_phone() +
			". Выбранная тема лекции '" + lecture_name + "' под номером " + to_string(chosen_theme) + " в LectureList.txt");
	}
};
