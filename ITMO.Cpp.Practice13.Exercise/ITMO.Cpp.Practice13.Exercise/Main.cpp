#include <iostream>
#include <vector>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"


int main()
{
	system("chcp 1251");
	// ��������������
	std::vector<int> scores;
	// ���������� ������ �������� � ������
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	student* stud = new student("������", "����", "����������", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "������� ���� : " << stud->get_data() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("�������", "�������", "���������", teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "���������� �����: " << tch->get_data() << std::endl;
	return 0;
}