#include "5.1.h"
using namespace std;

void new_arr(double **arr, int size)
{
	*arr = new double[size];
}

void add_arr(double* arr, int size)
{
	double x;
	cout << "¬ведите значени€, которые хотите записать в массив: ";
	for (int i = 0; i < size; i++)
	{
		cin >> x;
		arr[i] = x;
	}
}

void print_arr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "|";
	}
}

void delete_arr(double** arr)
{
	delete[] *arr;
}