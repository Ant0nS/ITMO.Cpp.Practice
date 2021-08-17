#pragma once
#include "Person.h"
#include <string>

using namespace std;

class Lecturer : public Person
{
private:
	string theme_of_lecture;
	string theme_number;
public:
	Lecturer(string, string);
	void Person::set_person_data() override;
	string Person::data_for_file() override;
};
