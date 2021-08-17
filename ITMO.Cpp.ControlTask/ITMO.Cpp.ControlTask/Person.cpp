#include "Person.h"

using namespace std;

Person::Person() {};

void Person::set_person_data()
{
	cout << "Ваше имя:" << "\t";
	cin >> name;
	cout << "Ваша фамилия:" << "\t";
	cin >> surname;
	cout << "Телефон для контактов:" << "\t";
	cin >> phone;
}
string Person::data_for_file()
{
	return (Person::get_name() + " " + Person::get_surname() + " " + Person::get_phone());
}
string Person::get_name()
{
	return Person::name;
}
string Person::get_surname()
{
	return Person::surname;
}
string Person::get_phone()
{
	return Person::phone;
}