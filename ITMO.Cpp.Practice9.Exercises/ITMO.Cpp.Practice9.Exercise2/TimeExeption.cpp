#include <iostream>
#include "Windows.h"
using namespace std;

struct Time
{
	int hours, minutes, seconds;
	void ShowTime()
	{
		cout << "����� " << hours << ":" << minutes << ":" << seconds << endl;
		cout << "����� � ��������: " << hours * 3600 + minutes * 60 + seconds << " ���." << endl;
	}
	struct ExError
	{
		string message;
		ExError(string str)
		{
			message = str;
		}
	};
};
Time InputTime()
{
	Time t;
	int input;		
	cout << "������� ����: " << endl;
	cin >> input;
	if (!cin)
		throw Time::ExError("������ ���� ������.");
	t.hours = input;
	cout << "������� ������: " << endl;
	cin >> input;
	if (!cin)
		throw Time::ExError("������ ���� ������.");
	t.minutes = input;
	cout << "������� �������: " << endl;
	cin >> input;
	if (!cin)
		throw Time::ExError("������ ���� ������.");
	t.seconds = input;
	while (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	while (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	return t;
}
Time AddTime(const Time t1, const Time t2)
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	t.seconds = t1.seconds + t2.seconds;
	while (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	while (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	return t;
}
Time SubstrackTime(const Time t1, const Time t2)
{
	Time t;
	t.hours = t1.hours - t2.hours;
	t.minutes = t1.minutes - t2.minutes;
	t.seconds = t1.seconds - t2.seconds;
	if (t.seconds < 0)
	{
		t.seconds += 60;
		t.minutes--;
	}
	if (t.minutes < 0)
	{
		t.minutes += 60;
		t.hours--;
	}
	return t;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	try
	{
		Time t1 = InputTime();
		Time t2 = InputTime();	
		t1.ShowTime();
		t2.ShowTime();
		cout << "������� �����: " << endl;
		Time t3 = AddTime(t1, t2);
		t3.ShowTime();
		cout << "������� �����: " << endl;
		Time t4 = SubstrackTime(t1, t2);
		t4.ShowTime();
	}
	catch (Time::ExError ex)
	{
		cout << ex.message << endl;
	}
	return 0;
}