#include <iostream>
#include <string>
#include <vector>
#include <sstream>

class human 
{
public:
	// Конструктор класса human
	human(std::string last_name, std::string name, std::string second_name)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
	}
	// Получение ФИО человека
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
	std::string name; // имя
	std::string last_name; // фамилия
	std::string second_name; // отчество
};

class student : public human 
{
public:
	// Конструктор класса Student
	student(std::string last_name, std::string name, std::string second_name, float score) : human(last_name, name, second_name)
	{
		this->av_score = score;
	}
	// Получение среднего балла студента
	float get_average_score()
	{
		return av_score;
	}
	void show_data()
	{
		std::cout << "\nСредний балл ученика " << get_full_name() << ": " << get_average_score();
	}
private:
	// Оценки студента
	float av_score;
};

class teacher : public human
{
public:
	// Конструктор класса teacher
	teacher(std::string last_name, std::string name, std::string second_name,unsigned int work_time) : human(last_name,name,second_name)
	{
		this->work_time = work_time;
	}
	// Получение количества учебных часов
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void show_data()
	{
		std::cout << "\nВремя работы преподавателя " << get_full_name() << ": " << get_work_time();
	}
private:
	// Учебные часы
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
		std::cout << "\nСтудент или Учитель (s / t) ? ";
		std::cin >> input;
		if (input == 's')
		{
			std::string name, surname, middlename;
			std::cout << "Введите ФИО ученика через пробел: " << std::endl;
			std::cin >> surname >> name >> middlename;
			float score;
			std::cout << "Введите средний балл ученика: " << std::endl;
			std::cin >> score;
			student* st = new student(surname, name, middlename, score);
			arr.push_back(st);
		}
		else
		{
			std::string name, surname, middlename;
			std::cout << "Введите ФИО преподавателя через пробел: " << std::endl;
			std::cin >> surname >> name >> middlename;
			int work_time;
			std::cout << "Введите время работы преподавателя: " << std::endl;
			std::cin >> work_time;
			teacher* st = new teacher(surname, name, middlename, work_time);
			arr.push_back(st);
		}
		n++;
		std::cout << "Продолжать((у / n) ? ";
		std::cin >> input;
	} while (input == 'y');

	for (int j = 0; j < n; j++) //цикл по всем объектам
	{
		arr[j]->show_data(); //вывести данные о публикации
	}
	return 0;
}