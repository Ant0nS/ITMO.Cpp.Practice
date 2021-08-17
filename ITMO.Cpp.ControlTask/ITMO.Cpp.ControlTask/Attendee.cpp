#include "Attendee.h"
#include "Person.h"

using namespace std;

Attendee::Attendee(int n, string theme)
{
	Person::set_person_data();
	this->Attendee::chosen_theme = n;
	this->Attendee::lecture_name = theme;
}
void Attendee::set_person_data()
{
	Person::set_person_data();
}
string Attendee::data_for_file()
{
	return ("\n��������� - " + Person::get_name() + " " + Person::get_surname() + ", ���.  " + Person::get_phone() +
		". ��������� ���� ������ '" + Attendee::lecture_name + "' ��� ������� " + to_string(Attendee::chosen_theme) + " � LectureList.txt");
}

