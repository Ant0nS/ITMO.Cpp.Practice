#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class human 
{
public:
	// ����������� ������ human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// ��������� ��� ��������
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " " << this->name << " " << this->second_name;
		return full_name.str();
	}
	virtual void show_data()
	{
	}
private:
	std::string name; // ���
	std::string last_name; // �������
	std::string second_name; // ��������
};

class student : public human 
{
public:
	// ����������� ������ Student
	student(std::string last_name, std::string name, std::string second_name, float score) : human(last_name, name, second_name)
	{
		this->av_score = score;
	}
	// ��������� �������� ����� ��������
	float get_average_score()
	{
		return av_score;
	}
	void show_data()
	{
		std::cout << "\n������� ���� ������� " << get_full_name() << ": " << get_average_score();
	}
private:
	// ������ ��������
	float av_score;
};

class teacher : public human
{
public:
	// ����������� ������ teacher
	teacher(std::string last_name, std::string name, std::string second_name,unsigned int work_time) : human(last_name,name,second_name)
	{
		this->work_time = work_time;
	}
	// ��������� ���������� ������� �����
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void show_data()
	{
		std::cout << "\n����� ������ ������������� " << get_full_name() << ": " << get_work_time();
	}
private:
	// ������� ����
	unsigned int work_time;
};

int main()
{
	system("chcp 1251");
	std::vector<human*> arr;
	char input;
	int n = 0;
	do
	{
		std::cout << "\n������� ��� ������� (s / t) ? ";
		std::cin >> input;
		if (input == 's')
		{
			std::string name, surname, middlename;
			std::cout << "������� ��� ������� ����� ������: " << std::endl;
			std::cin >> surname >> name >> middlename;
			float score;
			std::cout << "������� ������� ���� �������: " << std::endl;
			std::cin >> score;
			student* st = new student(surname, name, middlename, score);
			arr.push_back(st);
		}
		else
		{
			std::string name, surname, middlename;
			std::cout << "������� ��� ������������� ����� ������: " << std::endl;
			std::cin >> surname >> name >> middlename;
			int work_time;
			std::cout << "������� ����� ������ �������������: " << std::endl;
			std::cin >> work_time;
			teacher* st = new teacher(surname, name, middlename, work_time);
			arr.push_back(st);
		}
		n++;
		std::cout << "����������((� / n) ? ";
		std::cin >> input;
	} while (input == 'y');

	for (int j = 0; j < n; j++) //���� �� ���� ��������
	{
		arr[j]->show_data(); //������� ������ � ����������
	}
	return 0;
}