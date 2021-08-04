#include <iostream>

using namespace std;


//-----Practice 7.1------------------------------------------------------

/*
struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(Distance d1, Distance d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	return d;
}
int main()
{
	system("chcp 1251");
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
	return 0;
}


//-----Practice 7.2-----------------------------------------


struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(const Distance d1, const Distance d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	return d;
}
int main()
{
	system("chcp 1251");
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
	return 0;
}


//-----Practice 7.3-------------------------------------------



struct Distance
{
	int feet;
	double inches;
	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};
Distance AddDist(const Distance d1, const Distance d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;
	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}
	return d;
}
Distance InputDist()
{
	Distance d;
	cout << "\nВведите число футов: ";
	cin >> d.feet;
	cout << "Введите число дюймов: ";
	cin >> d.inches;
	return d;
}
int main()
{
	system("chcp 1251");
	Distance d1 = InputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = AddDist(d1, d2);
	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();
	int n;
	cout << "Введите размер массива расстояний: ";
	cin >> n;
	Distance* masDist = new Distance[n];
	for (int i = 0; i < n; i++)
	{
		masDist[i] = InputDist();
	}
	for (int i = 0; i < n; i++)
	{
		masDist[i].ShowDist();
	}
	delete[] masDist;
	return 0;
}


-----Excercise 7.1-----------------------------------------------


struct Time
{
	int hours, minutes, seconds;
	void ShowTime()
	{
		cout << "Время " << hours << ":" << minutes << ":" << seconds << endl;
		cout << "Время в секундах: " << hours * 3600 + minutes * 60 + seconds << " сек." << endl;
	}
};
Time InputTime()
{
	Time t;
	cout << "Введите часы: " << endl;
	cin >> t.hours;
	cout << "Введите минуты: " << endl;
	cin >> t.minutes;
	cout << "Введите секунды: " << endl;
	cin >> t.seconds;
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
	system("chcp 1251");
	Time t1 = InputTime();
	Time t2 = InputTime();
	t1.ShowTime();
	t2.ShowTime();
	cout << "Сложить время: " << endl;
	Time t3 = AddTime(t1, t2);
	t3.ShowTime();
	cout << "Вычесть время: " << endl;
	Time t4 = SubstrackTime(t1, t2);
	t4.ShowTime();
	return 0;
}*/


//-----Excercise 7.2-----------------------------------------------


struct QEquation
{
	double d1;
	double d2;
	void ShowRoots()
	{
		if (d1 != d2)
		{
			cout << "Первый корень:" << d1 << " , второй корень: " << d2 << endl;

		}
		else if (d1 == 0 && d2 == 0)
		{
			cout << "Уравнение не имеет корней." << endl;
		}
		else 
		{
			cout << "Оба корня равны:" << d1 << endl;
		}
	}
};
QEquation Calc(const int a, const int b, const int c)
{
	QEquation q;
	int D = b * b - 4 * a * c;
	if (D == 0)
	{
		q.d1 = -b/ (2 * a);
		q.d2 = q.d1;
	}
	else if (D > 0)
	{
		q.d1 = (-b - sqrt(D)) / (2 * a);
		q.d2 = (-b + sqrt(D)) / (2 * a);
	}
	else
	{
		q.d1 = q.d2 = 0;
	}
	return q;
}
int main()
{
	system("chcp 1251");
	int a, b, c;
	cout << "Введите коэффициенты квадратного уравнения (ax^2 + bx + c = 0)\t a, b, c: " << endl;
	cin >> a >> b >> c;
	QEquation q = Calc(a, b, c);
	q.ShowRoots();
	return 0;
}