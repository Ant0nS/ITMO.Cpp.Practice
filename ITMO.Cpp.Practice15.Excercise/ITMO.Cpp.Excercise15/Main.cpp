#include <iostream>
#include <string>
#include <map>
#include "Windows.h"
using namespace std;

struct StudentGrade
{
	string name;
	char score;
};

int main()
{
	StudentGrade student;
	map<string, char> studentsMap;
	map<string, char>::iterator iter;

	studentsMap.insert(make_pair("John", '0'));
	studentsMap.insert(make_pair("Alise", '0'));
	studentsMap.insert(make_pair("Peter", '0'));
	studentsMap.insert(make_pair("Vladimir", '0'));
	studentsMap.insert(make_pair("Sofya", '0'));
	studentsMap.insert(make_pair("Tatiana", '0'));

	iter = studentsMap.begin();
	cout << "List of students: " << endl;
	for (int i = 0; iter != studentsMap.end(); iter++, i++)
		cout << iter->first << endl; //вывод списка студентов

	string searchName;
	char input;
	do
	{
		cout << "Enter the name of the student to be graded: ";
		cin >> searchName;
		iter = studentsMap.find(searchName);
		if (iter == studentsMap.end()) 
		{
			cout << "Non-existing name in the list!" << endl;
		}
		else
		{
			cout << "Put a grade: ";
			cin >> input;
			iter->second = input;
			cout << endl;
		}
		cout << "Continue? (y / n) " << endl;
		cin >> input;
	} while (input != 'n');

	iter = studentsMap.begin();
	for (int i = 0; iter != studentsMap.end(); iter++, i++) {
		cout << "Name: " << iter->first << ", grade:" << iter->second << endl; //вывод списка студентов с оценками
	}
}