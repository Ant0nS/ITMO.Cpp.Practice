#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Attendee : public Person
{
private:
	int chosen_theme;
	string lecture_name;
public:
	Attendee(int, string);
	void Person::set_person_data() override;
	string Person::data_for_file() override;
};
