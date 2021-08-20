#include <iostream>
#include "Time.h"

using namespace std;

void Time::InputTime()
{
	cout << "������� ����: " << endl;
	cin >> hours;
	cout << "������� ������: " << endl;
	cin >> minutes;
	cout << "������� �������: " << endl;
	cin >> seconds;
	while (seconds >= 60)
	{
		seconds -= 60;
		minutes++;
	}
	while (minutes >= 60)
	{
		minutes -= 60;
		hours++;
	}
}
void Time::ShowTime()
{
	cout << "\n����� " << hours << ":" << minutes << ":" << seconds << endl;
	cout << "����� � ��������: " << hours * 3600 + minutes * 60 + seconds << " ���." << endl;
}
Time Time::operator+ (const Time& t) const
{
	int h = hours + t.hours;
	int m = minutes + t.minutes;
	int s = seconds + t.seconds;
	if (s >= 60)
	{
		s -= 60;
		m++;
	}
	if (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}
Time Time::operator+ (const float& value) const
{
	int h = hours;
	int m = minutes;
	int s = seconds + ceil(value * 60);
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}
Time operator+ (float value, const Time& t)
{
	int h = t.hours;
	int m = t.minutes;
	int s = t.seconds + ceil(value * 60);
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}
bool operator> (const Time& t1, const Time& t2)
{
	return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) > (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator< (const Time& t1, const Time& t2)
{
	return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) < (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator>= (const Time& t1, const Time& t2)
{
	return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) >= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator<= (const Time& t1, const Time& t2)
{
	return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) <= (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}
bool operator== (const Time& t1, const Time& t2)
{
	return (t1.hours * 3600 + t1.minutes * 60 + t1.seconds) == (t2.hours * 3600 + t2.minutes * 60 + t2.seconds);
}

Time Time::operator- (const Time& t) const
{
	int h = 0;
	int m = 0;
	int s = abs((hours * 3600 + minutes * 60 + seconds) - (t.hours * 3600 + t.minutes * 60 + t.seconds));
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}