#include <iostream>
#include <vector>

using namespace std;


/*
-----Practice 5.1


int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	cout << s << endl;
}


-----Practice 5.2


int main() 
{
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
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
}


-----Practice 5.3 and 5.4
 

void show_array(const int[], const int);
bool from_min(const int a, const int b)
{
	return a > b;
}
bool from_max(const int a, const int b)
{
	return a < b;
}
void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b))
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
		}
	}
}
int main()
{
	system("chcp 1251");
	bool (*from_f[2])(int, int) = { from_min,from_max };
	const int N = 10;
	int* A = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> A[i];
	}
	int my_choose = 0;

	//int A[N] = { 9,8,7,6,1,2,3,5,4,9 };
	cout << "1. Сортировать по возрастанию\n";
	cout << "2. Сортировать по убыванию\n";
	cin >> my_choose;
	cout << "Исходные данные: ";
	show_array(A, N);
	//switch (my_choose)
	//{
	//case 1: bubble_sort(A, N, from_min); break;
	//case 2: bubble_sort(A, N, from_max); break;
	//default: cout << "\rНеизвестная операция ";
	//}
	bubble_sort(A, N, (*from_f[my_choose - 1]));
	show_array(A, N);
	delete []A;
	return 0;
}
void show_array(const int Arr[], const int N)
{
	for (int i = 0; i < N; i++)
		cout << Arr[i] << " ";
	cout << "\n";
}


-----Practice 5.5.1
 

int main()
{
	srand(time(NULL)); 
	int a, b, c; 
	int k = 0;
	const int n = 10; 
	int mas[n];

	for (int i = 0; i < n; i++) 
	{ 
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		cout << a << " * " << b << " = ";
		cin >> c;
		mas[i] = c;
		if (a * b != c)
		{
			k++; // операция «инкремент», аналогично: k = k + 1
			cout << "Error! ";
			cout << a << " * " << b << " = " << a * b << endl;
		}
	}
	cout << "\nAll: " << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << mas[i] << "\t";
	}
	cout << "Count error: " << k << endl;

	return 0;
}


-----Practice 5.5.2


int main()
{
	srand(time(NULL));
	int a, b, c;
	int k = 0;
	const int n = 10;
	int mas[n];
	vector<int> v1; 
	vector<int> v2;
	for (int i = 0; i < n; i++)
	{

		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		cout << a << " * " << b << " = ";
		cin >> c;
		mas[i] = c;
		if (a * b != c)
		{
			k++; // операция «инкремент», аналогично: k = k + 1
			cout << "Error! ";
			cout << a << " * " << b << " = " << a * b << endl;
		}
		if (a * b != c)
		{
			v2.push_back(c); k++;
		}
		else
		{
			v1.push_back(c);
		}
	}
	cout << "\nAll: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << "\t";
	}
	cout << "\nGood: "; 
	for (int i = 0; i < v1.size(); i++) 
	{ 
		cout << v1[i] << "\t";
	} 
	cout << "\nBad: "; 
	for (int i = 0; i < v2.size(); i++) 
	{ 
		cout << v2[i] << "\t";
	}
	cout << "Count error: " << k << endl;

	return 0;
}


Excercise 5.1


int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += mas[i];
	}
	return s;
}
int main()
{
	const int n = 10;
	int mas[n];
	for (int i = 0; i < n; i++)
	{
		cout << "mas[" << i << "]=";
		cin >> mas[i];
	}

	cout << "Sum of elements: " << Sum(mas, n) << endl;
}
*/

//-----Excercise 5.2


int* max_vect(const int kc, int a[], int b[])
{
	int *res = new int[kc];
	for (int i = 0; i <= kc; i++)
	{
		if(a[i]>b[i])
		{
			res[i] = a[i];
		}
		else
		{
			res[i] = b[i];
		}
	}
	return res;
	delete []res;
};
int main()
{
	int a[] = { 1,2,3,4,5,6,7,2 };
	int b[] = { 7,6,5,4,3,2,1,3 };
	int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива
	int* c; //Указатель на результирующий массив
	c = max_vect(kc, a, b); //вызов функции для создания массива
	for (int i = 0; i < kc; i++)
	{ //Вывод результата.
		cout << c[i] << "\t";
	}
	cout << endl;
	delete []c; //Возврат памяти.
}