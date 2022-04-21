#include "5.1.h"

int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru");

    double* arr;
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    new_arr(&arr, size);
    add_arr(arr, size);
    print_arr(arr, size);
    delete_arr(&arr);   
}