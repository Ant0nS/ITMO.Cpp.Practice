#include <iostream>
#include "Point.h"

using namespace std;

double Point::Distance()
{
    return sqrt((x * x) + (y * y));
}

bool operator< (Point& p1, Point& p2)
{
    return p1.Distance() < p2.Distance();
}
ostream& operator<< (ostream& out, Point& coord)
{
    out << "Point(" << coord.x << ", " << coord.y << ") = " << coord.Distance();
    return out;
}