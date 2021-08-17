#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Windows.h"
#include "Person.h"
#include "Attendee.h"
#include "Lucturer.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	vector<string> LectureThemeList{ 
		"Agile. ������ � ������������ ��������." ,
		"����: ������� ������������ �����������������. ",
		"������� � � ������ �������",
		"���������� �������-����������."
	};
	vector<Person*> PersonList;
	char input;
	char loop = 'y';
	cout << "| ��� ���������� ��������� ���������� �� ������ ��� ���������� ���� ���� ��� ����������. " << endl;
	do
	{
		cout << "������ ���������� ������ (y / n): ";
		cin >> input;
		cout << endl;
		if (input == 'y')
		{
			int num;
			cout << "�������� ���� �� ������: " << endl;
			for (int i = 0; i < LectureThemeList.size(); i++)
			{
				int n = i + 1;
				cout << "\t" << n << "\t" << LectureThemeList.at(i) << endl;
			}
			cin >> num;
			string theme;
			for (int i = 0; i < LectureThemeList.size(); i++)
			{
				if((i+1) == num)
					theme = LectureThemeList.at(i);
			}
			Attendee* attendant = new Attendee(num,theme);

			//cout << attendant->data_for_file() << endl;
			PersonList.push_back(attendant);
		}
		else
		{
			cout << "��� ���� ��� ����������? (y / n)" << endl;
			cin >> input;
			if (input == 'y')
			{
				string theme;
				cout << "���� �������: ";
				cin.ignore();
				getline(cin, theme);
				cout << "���� ���� '" << theme << "' ���� ��������� � ������. " << endl;
				LectureThemeList.push_back(theme);
				int num = 0;
				for (int i = 0; i < LectureThemeList.size(); i++)
				{
					if (LectureThemeList.at(i) == theme)
						num = i + 1;
				}
				Lecturer* lector = new Lecturer(theme, to_string(num));
				//cout << lector->data_for_file() << endl;
				PersonList.push_back(lector);
			}
		}
		cout << "-------------------" << endl << "����������? (y / n)" << endl;
		cin >> loop;
	} while (loop == 'y');
	cout << endl << "������ ��� �������� � ����� .../LectureList.txt \n";
	ofstream out;
	out.open("LectureList.txt");
	if (out.is_open())
	{
		for (int i = 0; i < LectureThemeList.size(); i++)
		{
			int temp = i + 1;
			out << temp << "\t" << LectureThemeList.at(i) << endl;
		}
	}
	out.close();

	cout << "������ ���� ���������� �������� � ����� .../ParticipantList.txt \n";
	out.open("ParticipantList.txt");
	if (out.is_open())
	{
		for (Person* p : PersonList)
		{
			out << p->data_for_file();
		}
	}
	out.close();
	return 0;
}

