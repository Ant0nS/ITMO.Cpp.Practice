#pragma once
#include <string>
using namespace std;

class Time
{
public:
	Time(int, int, int);
	void set_time(int, int, int);
	void show_time();
	void add_time(Time t1, Time t2);
	int get_hours();
	int get_minutes();
	int get_seconds();
private:
	int hours;
	int minutes;
	int seconds;
};
Time add_time(Time, Time);