#include  <iostream>
#include <string>
#include "Windows.h"
using namespace std;

class Triangle
{
public:
    double sideA, sideB, sideC;
    Triangle(int a, int b, int c)
    {
        this->sideA = a;
        this->sideB = b;
        this->sideC = c;
    }
    double per;
    double Perimeter()
    {
        if (sideA >= sideB + sideC ||
            sideB >= sideA + sideC ||
            sideC >= sideA + sideB)
            throw ExeptionError("������! ���� ������� ������������ ������ ����� ���� ������.");
        per = sideA + sideB + sideC;
        return per;
    }
    double Area()
    {
        if (sideA >= sideB + sideC ||
            sideB >= sideA + sideC ||
            sideC >= sideA + sideB)
            throw ExeptionError("������! ���� ������� ������������ ������ ����� ���� ������.");
        double p = (double)per / 2;
        double s = sqrt(p * (p - sideA) * (p - sideB) * (p - sideC));
        return s;
    }
    class ExeptionError
    {
    public:
        string origin;
        ExeptionError(string str)
        {
            this->origin = str;
        }
    };
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    cout << "������� ������� ������ ������������ a, b, c: ";
    double a, b, c;
    cin >> a >> b >> c;
    Triangle* triangle1 = new Triangle(a, b, c);
    cout << "a = " << triangle1->sideA << ", b = " << triangle1->sideB << ", c = " << triangle1->sideC << endl;
    try 
    {
        cout << "�������� ������������ �����: " << triangle1->Perimeter() << endl;
        cout << "������� ������������ �����: " << triangle1->Area() << endl;
    }
    catch(Triangle::ExeptionError& ex)
    {
        cout << ex.origin << endl;
    }
    delete triangle1;


	return 0;
}