#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*int main()
{
	system("chcp 1251");
	double sum = 0;
	int const n = 100;
	double nums[n];
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		nums[i] = (rand() % 100);
	}

	ofstream out("test", ios::out | ios::binary);
	if (!out) {
		cout << "Файл открыть невозможно\n";
		return 1;
	}

	out.write((char*)nums, sizeof(nums));
	out.close();


	ifstream in("test", ios::in | ios::binary);
	if (!in) {
		cout << "Файл открыть невозможно";
		return 1;
	}

	in.read((char*)&nums, sizeof(nums));

	int k = sizeof(nums) / sizeof(double);
	for (int i = 0; i < k; i++)
	{
		sum = sum + nums[i];
		cout << nums[i] << ' ';
	}
	cout << "\nsum = " << sum << endl;
	in.close();

	return 0;
}


//-----Excercise 6.1


int main()
{
	system("chcp 1251");
	string text1, text2, text3, text4;

	//cout << "Напишите текст для записи: " << endl;
	//getline(cin, text);
	cout << "Напишите четверостишье: " << endl;
	getline(cin, text1);
	getline(cin, text2);
	getline(cin, text3);
	getline(cin, text4);
	ofstream out;          // поток для записи
	out.open("poem.txt"); // окрываем файл для записи
	if (out.is_open())
	{
		out << text1 << endl;
	}
	out.close();
	out.open("poem.txt", ios::app); // окрываем файл для дозаписи
	if (out.is_open())
	{
		out << text2 << endl << text3 << endl << text4 << endl;
	}
	cout << "End of program" << endl;
	out.close();

	return 0;
}
*/

//-----Excercise 6.2


int main()
{

	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
	ofstream out;
	out.open("array.txt");
	if (out.is_open())
	{
		out << "Initial array: " << "\t";

		for (int i = 0; i < N; i++)
		{
			out <<  a[i] << "\t";
		}

		out << " " << endl;
	}
	out.close();

	int min = 0; // для записи минимального значения
	int buf = 0; // для обмена значениями
	for (int i = 0; i < N; i++)
	{
		min = i; // номер текущей ячейки, как ячейки с минимальным значением
		// в цикле найдем реальный номер ячейки с минимальным значением
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		// перестановка этого элемента, поменяв его местами с текущим
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	for (int i : a)
	cout << i << '\t';

	out.open("array.txt", ios::app);
	if (out.is_open())
	{
		out << "Sorted array: " << "\t";

		for (int i = 0; i < N; i++)
		{
			out << a[i] << "\t";
		}
	}
	out.close();
	return 0;
}