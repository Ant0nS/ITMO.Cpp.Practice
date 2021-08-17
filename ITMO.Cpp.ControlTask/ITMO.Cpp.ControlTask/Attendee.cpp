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
	return ("\nСлушатель - " + Person::get_name() + " " + Person::get_surname() + ", тел.  " + Person::get_phone() +
		". Выбранная тема лекции '" + Attendee::lecture_name + "' под номером " + to_string(Attendee::chosen_theme) + " в LectureList.txt");
}

