#include <iostream>
#include "Dot.h"

using namespace std;

class Triangle
{
public:
    Dot* a;
    Dot* b;
    Dot* c;
    double length1;
    double length2;
    double length3;
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
    {
        a = new Dot(x1, y1);
        b = new Dot(x2, y2);
        c = new Dot(x3, y3);
        length1 = a->distanceTo(*b);
        length2 = b->distanceTo(*c);
        length3 = c->distanceTo(*a);
    }
    double per;
    double Perimeter()
    {
        per = length1 + length2 + length3;
        return per;
    }
    double Area()
    {
        double p = (double)per / 2;
        double s = sqrt(p * (p - (double)length1) * (p - length2) * (p - length3));
        return s;
    }
    Triangle(Dot* a1, Dot* b1, Dot* c1)
    {
        a = a1;
        b = b1;
        c = c1;
        length1 = a->distanceTo(*b);
        length2 = b->distanceTo(*c);
        length3 = c->distanceTo(*a);
    }
};

int main()
{
	system("chcp 1251");

    cout << "Введите координаты вершин треугольника x1, y1, x2, y2, x3, y3: ";
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle* triangle1 = new Triangle(x1, y1, x2, y2, x3, y3);
    cout << "Длина сторон треугольника равна: a = " << triangle1->length1 << ", b = " << triangle1->length2 << ", c = " << triangle1->length3 << endl;
    cout << "Периметр треугольника равен: " << triangle1->Perimeter() << endl;
    cout << "Площадь треугольника равна: " << triangle1->Area() << endl;
    delete triangle1;

    cout << "Введите координаты трех точек x1, y1, x2, y2, x3, y3: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Dot* a = new Dot(x1, y1);
    Dot* b = new Dot(x2, y2);
    Dot* c = new Dot(x3, y3);
    Triangle* triangle2 = new Triangle(a, b, c);
    cout << "Длина сторон треугольника равна: a = " << triangle2->length1 << ", b = " << triangle2->length2 << ", c = " << triangle2->length3 << endl;
    cout << "Периметр треугольника равен: " << triangle2->Perimeter() << endl;
    cout << "Площадь треугольника равна: " << triangle2->Area() << endl;
    delete triangle2;

	return 0;
}