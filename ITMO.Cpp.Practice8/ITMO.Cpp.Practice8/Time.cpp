#include <string>
#include <fstream>
#include <iostream>
#include "Time.h"

Time::Time(const int hours,const int minutes,const int seconds)
{
	Time::set_time(hours, minutes, seconds);
}
void Time::set_time(int hours, int minutes, int seconds)
{
	while (seconds > 60)
	{
		seconds -= 60;
		minutes++;
	}
	while (minutes > 60)
	{
		minutes -= 60;
		hours++;
	}
	Time::hours = hours;
	Time::minutes = minutes;
	Time::seconds = seconds;
}
int Time::get_hours()
{
	return Time::hours;
}
int Time::get_minutes()
{
	return Time::minutes;
}
int Time::get_seconds()
{
	return Time::seconds;
}
void Time::show_time()
{
	cout << Time::hours << ":" << Time::minutes << ":" << Time::seconds << endl;
}
Time add_time(Time t1, Time t2)
{
	int h, m, s;
	h = t1.get_hours() + t2.get_hours();
	m = t1.get_minutes() + t2.get_minutes();
	s = t1.get_seconds() + t2.get_seconds();
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