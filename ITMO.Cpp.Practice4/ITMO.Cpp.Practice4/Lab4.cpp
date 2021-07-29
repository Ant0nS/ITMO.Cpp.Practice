#include <iostream>
#include <math.h>

using namespace std;

//<---Practice 4.1--->
// 
//void fum_value(double k, double x, double y)
//{
//	x = x + k;
//	y = y + k;
//}
//void fum_ptr(double k, double* x, double* y)
//{
//	*x = *x + k;
//	*y = *y + k;
//}
//void fum_ref(double k, double& x, double& y)
//{
//	x = x + k;
//	y = y + k;
//}
//void print(double x, double y)
//{
//	cout << "x = " << x << "; y = " << y << endl;
//}
//int main() {
//	double k = 2.5;
//	double xv = 10;
//	double yv = 10;
//	print(xv, yv);
//	fum_value(k, xv, yv); // Передача в функцию обычного параметра
//	print(xv, yv);
//	fum_ptr(k, &xv, &yv); // Передача в функцию параметра указателя
//	print(xv, yv);
//	fum_ref(k, xv, yv); // Передача в функцию параметра ссылки
//	print(xv, yv);
//	return 0;
//}


//<---Practice 4.2--->
//void swap(int*, int*);
//void swap(int&, int&);
//int main() {
//	int x = 5, y = 10;
//	cout << x << ", " << y << endl;
//	cout << &x << ", " << &y << endl;
//	swap(&x, &y);
//	cout << x << ", " << y << endl;
//	cout << &x << ", " << &y << endl;
//	swap(x, y);
//	cout << x << ", " << y << endl;
//	cout << &x << ", " << &y << endl;
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void swap(int& x, int& y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}


//Exercise 4.1

//int Myroot(double a, double b, double c, double& k, double& l);
//int main()
//{
//	system ("chcp 1251");
//	double a, b, c, k = 0, l = 0, res = 0;
//	cout << "Введите коэффициенты квадратного уравнения a,b,c:" << endl;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	res = Myroot(a, b, c, k, l);
//	if (res == 1) {
//		cout << "Первый корень: " << k << ", второй корень: " << l << endl;
//	}
//	else if (res == 0) {
//		cout << "Корни одинаковые: " << k << " " << l << endl;
//	}
//	else if (res == -1) {
//		cout << "Корней нет." << endl;
//	}
//}
//int Myroot(double a, double b, double c, double& k, double& l)
//{
//	int d;
//	d = b * b - 4 * a * c;
//	if (d < 0) {
//		return -1;
//	}
//	else if (d == 0){
//		k = l = (-b + sqrt(d)) / 2 * a;
//		return 0;
//	}
//	else {
//		k = (-b + sqrt(d)) / 2 * a;
//		l = (-b - sqrt(d)) / 2 * a;
//		return 1;
//	}
//}

//Exercise 4.2

bool Input(int a, int b) {
	if (a > 0 && b <0) return true;
	else return false;
}

int main()
{
	system("chcp 1251");
	int a = 0, b = 0;
	cout << "Введите значение переменных a и b, причем a должно быть больше нуля, b - меньше нуля:" << endl;
	cin >> a >> b;
	if (Input(a, b) == false) // if(!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << s << endl;
	return 0;
}