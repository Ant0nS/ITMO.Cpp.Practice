#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Windows.h"
#include "Point.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для // класса Point
	for (auto& point : v)
		cout << point << '\n'; // требуется перегрузка оператора << для // класса Point

	return 0;
}