#include <iostream>
#include "Item.h"
#include "Paperbook.h"
#include "Audiobook.h"
#include "Windows.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	Item* pubarr[100];

	int n = 0;
	char choice;
	do
	{
		cout << "\n������� ������ ��� ����� ��� ��������� �����(b / a) ? ";
		cin >> choice;
		if (choice == 'b')
			pubarr[n] = new Paperbook;
		else
			pubarr[n] = new AudioBook;
		pubarr[n++]->getdata();
		cout << "����������((� / n) ? ";
		cin >> choice;
	} while (choice == 'y');

	for (int j = 0; j < n; j++) //���� �� ���� ��������
		pubarr[j]->putdata(); //������� ������ � ����������
	cout << endl;
	return 0;
}