#include "Lucturer.h"
#include "Person.h"

using namespace std;

Lecturer::Lecturer(string theme, string number)
{
	set_person_data();
	this->Lecturer::theme_of_lecture = theme;
	this->Lecturer::theme_number = number;
}
void Lecturer::set_person_data()
{
	Person::set_person_data();
};
string Lecturer::data_for_file()
{
	return ("\n������ - " + Person::get_name() + " " + Person::get_surname() + ", ���.  " + Person::get_phone() +
		". ������ '" + Lecturer::theme_of_lecture + "' � ������ LectureList.txt ��� ������� " + Lecturer::theme_number + ".");
}