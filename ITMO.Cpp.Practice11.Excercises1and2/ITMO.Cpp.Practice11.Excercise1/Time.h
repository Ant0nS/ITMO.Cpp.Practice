#pragma once

class Time
{
private:
	int hours, minutes, seconds;
public:
	Time() :hours(0), minutes(0), seconds(0) {}
	Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
	void InputTime();
	void ShowTime();
	Time operator+ (const Time&) const;
	Time operator- (const Time&) const;
	Time operator+ (const float&) const;
	friend bool operator== (const Time& a, const Time& b);
	friend Time operator+ (const float a, const Time& b);
	friend bool operator> (const Time& a, const Time& b);
	friend bool operator< (const Time& a, const Time& b);
	friend bool operator>= (const Time& a, const Time& b);
	friend bool operator<= (const Time& a, const Time& b);
};
