#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point(double x1, double y1) : x(x1), y(y1) {}
    double Distance();
    friend ostream& operator<< (ostream&, Point&);
    friend bool operator< (Point&, Point&);
};