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
	// Установка имени студента
	void set_name(string student_name)
	{
		name = student_name;
	}
	// Получение имени студента
	string get_name()
	{
		return name;
	}
	// Установка фамилии студента
	void set_last_name(string student_last_name)
	{
		last_name = student_last_name;
	}
	// Получение фамилии студента
	string get_last_name()
	{
		return last_name;
	}
	// Установка промежуточных оценок
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i) {
			scores[i] = student_scores[i];
		}
	}
	// Установка среднего балла
	void set_average_score(double ball)
	{
		average_score = ball;
	}
	// Получение среднего балла
	double get_average_score()
	{
		return average_score;
	}
private:
	int scores[5]; // Промежуточные оценки
	double average_score; // Средний балл
	string name; // Имя
	string last_name; // Фамилия
};

int main()
{
	system("chcp  1251");

	Student student01;
	string name;
	string last_name;
	int scores[5];
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохранение имени и фамилии в объект класса Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// Сохранение промежуточных оценок в объект класса Student
	student01.set_scores(scores);
	double average_score = sum / 5.0;
	// Сохранение среднего балла в объект класса Student
	student01.set_average_score(average_score);
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}



//------Practice 8.2 ----------------------------------


int main()
{
	// Создание объекта класса Student
	Student student01;
	string name;
	string last_name;
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Сохранение имени и фамилии в объект класса Student
	student01.set_name(name);
	student01.set_last_name(last_name);
	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохраняем промежуточные оценки в объект класса Student
	student01.set_scores(scores);
	// Считаем средний балл
	double average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student01.set_average_score(average_score);
	// Выводим данные по студенту
	cout << "Average ball for " << student01.get_name() << " "
		<< student01.get_last_name() << " is "
		<< student01.get_average_score() << endl;
	return 0;
}

//------Practice 8.3 ----------------------------------


int main()
{
	// Выделение памяти для объекта Student
	Student* student02 = new Student;
	string name;
	string last_name;
	// Ввод имени с клавиатуры
	cout << "Name: ";

	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Сохранение имени и фамилии в объект класса Student
	student02->set_name(name); //оператор косвенного обращения — «->»:
	student02->set_last_name(last_name);
	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохраняем промежуточные оценки в объект класса Student
	student02->set_scores(scores);
	// Считаем средний балл
	double average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student02->set_average_score(average_score);
	// Выводим данные по студенту
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
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Передача параметров конструктору
	Student* student02 = new Student(name, last_name);
	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохраняем промежуточные оценки в объект класса Student
	student02->set_scores(scores);
	// Считаем средний балл
	double average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student02->set_average_score(average_score);
	// Выводим данные по студенту
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	// Удаление объекта student из памяти
	delete student02;
	return 0;
}


//------Practice 8.5 ----------------------------------


int main()
{
	string name;
	string last_name;
	// Ввод имени с клавиатуры
	cout << "Name: ";
	getline(cin, name);
	// Ввод фамилии
	cout << "Last name: ";
	getline(cin, last_name);
	// Передача параметров конструктору
	Student* student02 = new Student(name, last_name);
	// Оценки
	int scores[5];
	// Сумма всех оценок
	int sum = 0;
	// Ввод промежуточных оценок
	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		// суммирование
		sum += scores[i];
	}
	// Сохраняем промежуточные оценки в объект класса Student
	student02->set_scores(scores);
	// Считаем средний балл
	double average_score = sum / 5.0;
	// Сохраняем средний балл в объект класса Student
	student02->set_average_score(average_score);
	// Выводим данные по студенту
	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;
	// Удаление объекта student из памяти
	delete student02;
	return 0;
}*/


int main()
{
	system("chcp 1251");
	int hh, mm, ss;
	cout << "Введите количество часов:  " << endl;
	cin >> hh;
	cout << "Введите количество минут:  " << endl;
	cin >> mm;
	cout << "Введите количество секунд:  " << endl;
	cin >> ss;
	Time t1(hh, mm, ss);
	cout << "Время в формате ЧЧ:ММ:СС " << endl;
	t1.show_time();
	cout << "Введите количество часов:  " << endl;
	cin >> hh;
	cout << "Введите количество минут:  " << endl;
	cin >> mm;
	cout << "Введите количество секунд:  " << endl;
	cin >> ss;
	Time t2(hh, mm, ss);
	cout << "Время в формате ЧЧ:ММ:СС " << endl;
	t2.show_time();
	Time t3 = add_time(t1, t2);
	cout << "Общее время после сложения в формате ЧЧ:ММ:СС " << endl;
	t3.show_time();
	return 0;
}