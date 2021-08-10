#include <iostream>

using namespace std;

template <class T> 
T MeanValue(T* arr, const int n)
{
    T result = static_cast<T>(0);
    for (int i = 0; i < n; i++)
    {
        result = static_cast<T>(arr[i]);
    }
    return result;
}

int main()
{
    int n = 10;
    int nc = 13;

    int* ar1 = new int[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double* ar2 = new double[]{ 1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.1 };
    long* ar3 = new long[]{ -1, 2, -3, 4, -5, 6, -7, 8, -9, 10 };
    char* ar4 = new char[]{ 'H','e','l','l','o',',',' ','W','o','r','l','d','!' };
    cout << MeanValue(ar1, n) << endl;
    cout << MeanValue(ar2, n) << endl;
    cout << MeanValue(ar3, n) << endl;
    cout << MeanValue(ar4, nc) << endl;
}