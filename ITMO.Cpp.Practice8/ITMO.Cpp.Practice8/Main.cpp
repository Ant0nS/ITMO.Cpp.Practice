#include <iostream>
#include <string>
#include "student.h"
#include "Time.h"
#include <fstream>

using namespace std;


/*
-----Practice 8.1--------------------------------------

class Student
{
public:
	// ��������� ����� ��������
	void set_name(string student_name)
	{
		name = student_name;
	}
	// ��������� ����� ��������
	string get_name()
	{
		return name;
	}
	// ��������� ������� ��������
	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}
	// ��������� ������� ��������
	string get_last_name()
	{
		return last_name;
	}
	// ��������� ������������� ������
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			scores[i] = student_scores[i];
		}
	}
	// ��������� �������� �����
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	// ��������� �������� �����
	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5]; // ������������� ������
	double average_score; // ������� ����
	string name; // ���
	string last_name; // �������
};

int main()
{
	system("chcp  1251");

	Student student01;
	string name;
	string last_name;
	int scores[5];
	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ���������� ����� � ������� � ������ ������ Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// ���������� ������������� ������ � ������ ������ Student
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	// ���������� �������� ����� � ������ ������ Student
	student01.set_average_score(average_score);
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}



//------Practice 8.2 ----------------------------------


int main()
{
	// �������� ������� ������ Student
	Student student01;
	string name;
	string last_name;
	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	// ���������� ����� � ������� � ������ ������ Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ��������� ������������� ������ � ������ ������ Student
	student01.set_scores(scores);
	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student01.set_average_score(average_score);
	// ������� ������ �� ��������
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}

//------Practice 8.3 ----------------------------------


int main()
{
	// ��������� ������ ��� ������� Student
	Student* student02 = new Student;
	string name;
	string last_name;
	// ���� ����� � ����������
	cout << "Name: ";

	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	// ���������� ����� � ������� � ������ ������ Student
	student02->set_name(name); //�������� ���������� ��������� � �->�:
	student02->set_last_name(last_name);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ��������� ������������� ������ � ������ ������ Student
	student02->set_scores(scores);
	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student02->set_average_score(average_score);
	// ������� ������ �� ��������
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	delete student02;
	return 0;
}


//------Practice 8.4 ----------------------------------


int main()
{
	string name;
	string last_name;
	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	// �������� ���������� ������������
	Student* student02 = new Student(name, last_name);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ��������� ������������� ������ � ������ ������ Student
	student02->set_scores(scores);
	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student02->set_average_score(average_score);
	// ������� ������ �� ��������
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	// �������� ������� student �� ������
	delete student02;
	return 0;
}


//------Practice 8.5 ----------------------------------


int main()
{
	string name;
	string last_name;
	// ���� ����� � ����������
	cout << "Name: ";
	getline(cin, name);
	// ���� �������
	cout << "Last name: ";
	getline(cin, last_name);
	// �������� ���������� ������������
	Student* student02 = new Student(name, last_name);
	// ������
	int scores[5];
	// ����� ���� ������
	int sum = 0;
	// ���� ������������� ������
	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// ������������
		sum += scores[i];
	}
	// ��������� ������������� ������ � ������ ������ Student
	student02->set_scores(scores);
	// ������� ������� ����
	double average_score = sum / 5.0;
	// ��������� ������� ���� � ������ ������ Student
	student02->set_average_score(average_score);
	// ������� ������ �� ��������
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	// �������� ������� student �� ������
	delete student02;
	return 0;
}*/


int main()
{
	system("chcp 1251");
	int hh, mm, ss;
	cout << "������� ���������� �����:  " << endl;
	cin >> hh;
	cout << "������� ���������� �����:  " << endl;
	cin >> mm;
	cout << "������� ���������� ������:  " << endl;
	cin >> ss;
	Time t1(hh, mm, ss);
	cout << "����� � ������� ��:��:�� " << endl;
	t1.show_time();
	cout << "������� ���������� �����:  " << endl;
	cin >> hh;
	cout << "������� ���������� �����:  " << endl;
	cin >> mm;
	cout << "������� ���������� ������:  " << endl;
	cin >> ss;
	Time t2(hh, mm, ss);
	cout << "����� � ������� ��:��:�� " << endl;
	t2.show_time();
	Time t3 = add_time(t1, t2);
	cout << "����� ����� ����� �������� � ������� ��:��:�� " << endl;
	t3.show_time();
	return 0;
}